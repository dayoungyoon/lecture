#include <stdio.h>
#include <stdlib.h>

class calculator{
private:
	float m_X;
	float m_Y;
	float m_Result;
	char m_S;
public:
	void Cal(){

		char op;
		float a,b;

		while(1){

			printf("계산식을 입력하세요\n");
			scanf("%f %c %f",&a,&op,&b);
			if(a==0 && op=='0' && b==0)
				exit(1);
			switch(op){
			case '+':
				printf("%f + %f = %f\n",a,b,a+b);
				break;

			case '-':
				printf("%f - %f = %f\n",a,b,a-b);
				break;

			case '*':
				printf("%f * %f = %f\n",a,b,a*b);
				break;

			case '/':
				printf("%f / %f = %f\n",a,b,a/b);
				break;

			default:
				printf("숫자 연산 숫자 형태로 입력하시오.\n");
				exit(1);
			}
			
		}
		system("pause");
	}
	/*void Assign(int a,int b){
		m_X=a;
		m_Y=b;
	}
	int Add(){
		int m_Result = m_X + m_Y;
		return m_Result;	
	}
	int Subtract(){
		int m_Result = m_X - m_Y;
		return m_Result;	
	}
	int Multiple(){
		int m_Result = m_X * m_Y;
		return m_Result;	
	}
	double Divide(){
		float m_Result = m_X / m_Y;
		return m_Result;	
	}*/
};

int main(){
	calculator gildong;
	printf("=========계산기=========\n");
	gildong.Cal();

	getchar();
	return 0;
}