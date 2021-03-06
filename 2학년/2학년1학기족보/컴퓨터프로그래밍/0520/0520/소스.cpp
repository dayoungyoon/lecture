#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define M 20

int record[300];//키값
int curFile = 0;
int buffer[20];//버퍼
int frozen[20];//동결


typedef struct data{
	int num;
	struct data *next;
}Data;//struct data를 Data로 재정의
typedef struct run{
	Data *node;
	struct run *next;
}Run;//struct run을 Run으로 재정의
Run head;

Run* initRun(Data* n = NULL){//초기 런
	Run *nRun = new Run;
	nRun->next = NULL;
	nRun->node = n;
	return nRun;
}
Data* initData(int n = -1){//초기 데이터
	Data *nData = new Data;
	nData->next = NULL;
	nData->num = n;
	return nData;
}
int Min(){//최솟값 찾기
	int min = 1001;
	int ad = 0;
	for(int i = 0 ; i < M ; i++){
		if(min > buffer[i] && frozen[i] == 0){ 
			min = buffer[i]; 
			ad = i;
		}
	}
	return ad;
}
void addData(Data *node,int num){
	Data *temp = node;
	Data *newNode = initData(num);
	if(temp->num == -1){
		temp->num = num; 
		return;
	}
	while(temp->next){
		temp = temp->next;
	}
	temp->next = newNode;
}

void printData(Data *data){
	Data *p = data;
	while(p){
		printf("%d ",p->num);
		p = p->next;
	}
}

int check(int *arr){
	for(int i = 0 ; i < M ; i++){
		if(arr[i] != -1) 
			return 1;
	}
	return 0;
}
void meltFrozen(){
	for(int i = 0 ; i < M ; i++){
		frozen[i] = 0;
	}
}
void init(Run *r){
	int i;
	head.next = r; 
	srand((unsigned)time(NULL));
	for(i = 0 ; i < 300 ; i++){
		record[i] = (rand() % 1001);//입력값 랜덤생성
		printf("%d\t",record[i]);
	}
	for(i = 0 ; i < M ; i++){ 
		buffer[i] = record[curFile++]; 
	}
	printf("\n");
}
void addRun(Run *rNode, Data *dNode){//런추가
	Run *temp = rNode;
	Run *newNode = initRun(dNode);
	if(temp->node == NULL){ 
		temp->node = dNode; 
		return;
	}
	while(temp->next){ 
		temp = temp->next;
	}
	temp->next = newNode;
}

void divRun(Run *t1, Run *t2){//런 나누기
	Run *temp = head.next;
	while(temp){
		addRun(t1,temp->node);
		temp = temp->next;
		if(temp){
			addRun(t2,temp->node);
			temp = temp->next;
		}
	}
}
void printRun(Run *run){//런 출력
	Run *p = run;
	int i=1;
	while(p){
		printf("Run%d :",i++);
		printData(p->node);
		p = p->next;

		printf("\n\n");
	}
}
Data* mergeRun(Run *t1, Run *t2 = NULL){//합병
	Data *tNode1 = t1->node;
	Data *merge = initData();
	if(t2 == NULL){
		while(tNode1){
			addData(merge,tNode1->num);
			tNode1 = tNode1->next;
		}
	}else{
		Data *tNode2 = t2->node;
		while(!(tNode1 == NULL && tNode2 == NULL)){
			if(tNode1 && tNode2){
				if(tNode1->num >= tNode2->num){
					addData(merge,tNode2->num);
					tNode2 = tNode2->next;
				}else if(tNode2->num > tNode1->num){
					addData(merge, tNode1->num);
					tNode1 = tNode1->next;
				}
			}else if(!tNode1){
				addData(merge,tNode2->num);
				tNode2 = tNode2->next;
			}else if(!tNode2){
				addData(merge,tNode1->num);
				tNode1 = tNode1->next;
			}
		}
	}
	return merge;
}
void deleteData(Data *d){
	Data *del = d;
	Data *next;
	while(del){
		next = del->next;
		delete del;
		del = next;
	}
	del = NULL;
}
void deleteRun(Run *r){
	Run *del = r;
	Run *next;
	while(del){
		next = del->next;
		deleteData(del->node);
		delete del;
		del = next;
	}
	del = NULL;
}

void main(){
	int min;
	int lastData;
	Run *iFile1 = initRun();
	Run *iFile2 = initRun();
	Run *oFile = initRun();
	Run *fRun = initRun();
	Data *fData = initData();


	printf("*****입력값*****\n");
	init(fRun);

	while(curFile < 300 || check(buffer) == 1){
		while(check(frozen)){
			min = Min();
			if(buffer[min] != -1){
				addData(fData,buffer[min]);
				lastData = buffer[min];
			}
			if(curFile < 300){
				buffer[min] = record[curFile++];
				if(lastData > buffer[min]){ frozen[min] = -1;};
			}
			else{
				buffer[min] = -1;
				frozen[min] = -1;
			}
		}	 
		addRun(fRun,fData);
		fData = initData();
		meltFrozen();
	}
	printf("*****런 생성 결과*****\n");
	printRun(head.next);
	printf("*****합병 과정 및 결과*****\n\n");
	int div=1;
	while(head.next->next){
		divRun(iFile1,iFile2);
		while(iFile1){
			fData = mergeRun(iFile1,iFile2);
			iFile1 = iFile1->next;
			if(iFile2){ iFile2 = iFile2->next; }
			addRun(oFile,fData);
		}		 
		deleteRun(head.next);
		printf("%d차 합병\n",div++);
		printRun(oFile);
		head.next = oFile;
		iFile1 = initRun();
		iFile2 = initRun();
		oFile = initRun();
	}

	printf("최종결과\n");
	printRun(head.next);
	deleteRun(head.next);
}
