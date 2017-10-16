#include <stdio.h>
template<class T1, class T2>
class CAdder
{
public:
	T2 Add(T1 a, T1 b)
	{
		T2 sum = a + b;
		return sum;
	}
};
void main(){

	CAdder<int,long>gildong;//클래스 템플릿

	getchar();
}