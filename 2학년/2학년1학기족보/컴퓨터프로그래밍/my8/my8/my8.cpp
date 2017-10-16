#include <stdio.h>

class CPoint{
protected://private은 재사용하는 함수에서 쓸수 없다
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

class CCircle :public CPoint{//클래스는 객체만들려고,코드 재사용하려고
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
	double Area(){//함수 재정의- 이유: 기존에 있는 함수가 쓸모없어서
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
	printf("숙희의 면적: %f\n",tmp);
	getchar();
}