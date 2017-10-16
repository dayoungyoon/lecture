/*#include <stdio.h>

class Base{//gildong
	friend class My;//My에서 private 액세스가능
private:
	int a;
};
class My{
public:
	void Set()
	{
		Base gildong;
		gildong.a = 7;
		printf("%d \n", gildong.a);
	}
};

void main(){

}*/