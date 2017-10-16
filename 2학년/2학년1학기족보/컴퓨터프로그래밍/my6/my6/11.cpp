#include <stdio.h>
template <typename T>//ÇÔ¼öÅÛÇÃ¸´
T Max (T a, T b){
	if(a > b)
		return a;
	else
		return b;
}

void main(){

	double tmp = Max(2.8,3.9);
	printf("%g\n",tmp);
	getchar();
}