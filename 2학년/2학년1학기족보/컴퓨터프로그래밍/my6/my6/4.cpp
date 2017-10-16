/*#include <stdio.h>

class Base{//gildong
	friend void main();//친구함수(main함수)에서 private 액세스가능
private:
	int a;
};

class Derived:Base{//cheolsu

public:
	void Set(){
		a=7;//하려면 base클래스에서 protected로
	}
};

void main(){
	Base gildong;
	gildong.a=0;
	printf("%d\n",gildong.a);
	getchar();
}*/