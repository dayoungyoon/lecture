#include <stdio.h>

class CPoint{
protected://private�� �����ϴ� �Լ����� ���� ����
	int m_iX;
	int m_iY;

public:
	void Assign(int a, int b){
		m_iX = a;
		m_iY = b;
	}

	int Add(){
		return m_iX + m_iY;
	}
};

class CCircle :public CPoint{//Ŭ������ ��ü�������,�ڵ� �����Ϸ���
protected: 
	int m_iRadius;

public:

	void SetRadius(int a){
		m_iRadius = a;
	}
	
	double Area(){
		return 3.14*m_iRadius*m_iRadius;
	}
	void Move(int x, int y){
		m_iX = m_iX + x;
		m_iY = m_iY + y;
	}
};

class CEllipse : public CCircle{
private:
	int m_iRadius2;

public:
	void SetRadius2(int r){
		m_iRadius2 = r;
	}
	double Area(){//�Լ� ������- ����: ������ �ִ� �Լ��� ������
		return 3.14*m_iRadius*m_iRadius2;
	}

};
CPoint gildong;
CCircle youngja;
CEllipse sukhee;
void main(){
	gildong.Assign(2,3);
	int iResult = gildong.Add();

	youngja.Assign(3,4);
	youngja.SetRadius(100);
	double dArea = youngja.Area();

	sukhee.SetRadius(10);
	sukhee.SetRadius2(1);
	double tmp = sukhee.Area();
	
	printf("Sum : %d \n",iResult);
	printf("Area: %f\n",dArea);
	printf("������ ����: %f\n",tmp);
	getchar();
}