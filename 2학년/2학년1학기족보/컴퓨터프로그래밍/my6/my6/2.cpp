/*#include <stdio.h>

class My{
private:
	int a;//생성자에서 초기화
	int& babo;//별명-반드시 콜론초기화

	My():babo(a){//콜론초기화- 변수를 만들면서 바로 초기화하는 것과 똑같다 a=0,babo=a
		a=0;//그냥변수는 변수만들고난후 초기화해도된다
	}
};

void main(){
	int b;
	int& babo2 = b;
}*/