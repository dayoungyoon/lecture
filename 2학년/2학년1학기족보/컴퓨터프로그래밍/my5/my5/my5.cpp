/*#include <stdio.h>

class XXX{

private:
	int m_iX;
	int m_iY;
public:
	XXX();//�������Լ�
	~XXX();//�Ҹ����Լ�
	void Assign(int a, int b);
	int Add();
	int Multiply();
	double Divide();
};
XXX::XXX(){//�������Լ� �ڵ�����
		m_iX = 0;
		m_iY = 0;
	}
XXX::~XXX(){//�Ҹ����Լ�

	} 
XXX gildong;
void XXX::Assign(int a, int b){//�ƿ��������
		m_iX = a;
		m_iY = b;
	}
	int XXX::Add(){
		return m_iX + m_iY;
	}
	int XXX::Multiply(){
		return m_iX * m_iY;
	}
	double XXX::Divide(){
		return m_iX / double(m_iY);
	}
void main(){
	
	gildong.Assign(2,3);
	int iResult = gildong.Add();
	int iResult2 = gildong.Multiply();
	double dResult3 = gildong.Divide();
	printf("���� : %d\n",iResult);
	printf("���� : %d\n",iResult2);
	printf("�������� : %f\n",dResult3);

	getchar();
}*/