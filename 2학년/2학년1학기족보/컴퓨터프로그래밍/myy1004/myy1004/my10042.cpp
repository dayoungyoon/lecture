#include <stdio.h>
//������
/*void main(){
	int a;
	a = 7;
	printf("%d\n",a);
	int* p=NULL;
	p=&a;
	*p=100;//p�� ����Ű�� ��(a)���� 100�� ���
	printf("%d\n",a);
	printf("%d\n",*p);
	int tmp = *p;//p�� ����Ű�� ��(a)�� �о��


	
	getchar();
}*/
class CBase{
public:
	 virtual void WhoAreYou(){ //virtual:������ ->Ȥ�� ���߿� �������ϰŵ� ���Լ��� ��¥��
		printf("CBase!\n");
	}
};
//CBase cheolsu;


class CDerived : public CBase{
public:
	void WhoAreYou(){
		printf("������ ���� CDerived�Դϴ�\n");
	}
};
CDerived cheolsu;//������ �ִ� CBase�� ������ -> �����Ͷ�����

//�������� ã���ִ� �Լ�:AfxGetApp
CBase* AfxGetApp(){
	return &cheolsu;
}

void main(){
	CBase* p;
	p = AfxGetApp();
	(*p).WhoAreYou();

	getchar();
}

// ���� :�������ִ��ڵ� �ۼ��϶�, �������ߴµ� �� �������Ѱ� �ȳ���?�����Ͱ� �����Լ��� �����Ѽ�->�ذ�:�����Լ��� �����