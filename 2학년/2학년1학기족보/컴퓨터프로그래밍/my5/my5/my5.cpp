/*#include <stdio.h>

class XXX{

private:
	int m_iX;
	int m_iY;
public:
	XXX();//생성자함수
	~XXX();//소멸자함수
	void Assign(int a, int b);
	int Add();
	int Multiply();
	double Divide();
};
XXX::XXX(){//생성자함수 자동으로
		m_iX = 0;
		m_iY = 0;
	}
XXX::~XXX(){//소멸자함수

	} 
XXX gildong;
void XXX::Assign(int a, int b){//아웃오브라인
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
	printf("합은 : %d\n",iResult);
	printf("곱은 : %d\n",iResult2);
	printf("나눈것은 : %f\n",dResult3);

	getchar();
}*/