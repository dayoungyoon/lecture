#include <stdio.h>
//포인터
/*void main(){
	int a;
	a = 7;
	printf("%d\n",a);
	int* p=NULL;
	p=&a;
	*p=100;//p가 가리키는 곳(a)으로 100을 써라
	printf("%d\n",a);
	printf("%d\n",*p);
	int tmp = *p;//p가 가리키는 곳(a)을 읽어라


	
	getchar();
}*/
class CBase{
public:
	 virtual void WhoAreYou(){ //virtual:가상의 ->혹시 나중에 재정의하거든 이함수는 가짜다
		printf("CBase!\n");
	}
};
//CBase cheolsu;


class CDerived : public CBase{
public:
	void WhoAreYou(){
		printf("하하하 저는 CDerived입니다\n");
	}
};
CDerived cheolsu;//기존에 있는 CBase를 실행함 -> 포인터때문에

//전역변수 찾아주는 함수:AfxGetApp
CBase* AfxGetApp(){
	return &cheolsu;
}

void main(){
	CBase* p;
	p = AfxGetApp();
	(*p).WhoAreYou();

	getchar();
}

// 시험 :숨겨져있는코드 작성하라, 재정의했는데 왜 재정의한게 안나옴?포인터가 기존함수를 가리켜서->해결:가상함수로 만든다