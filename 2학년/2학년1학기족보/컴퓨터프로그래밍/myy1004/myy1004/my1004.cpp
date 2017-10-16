/*#include <stdio.h>

//---아래코드는 이미 있었던 코드(우리 눈에 보이지 않음)
class CBase{
public:
	void WhoAreYou(){
		printf("CBase!\n");
	}
};
//여기까지
//가장 간단한 프로그램 CBase gildong; 
//아래 코드(main함수)도 라이브러리로 제공한다고 가정

//여기까지


class CDerived : public CBase{//마음에 안들때 재정의
public:
	void WhoAreYou(){
		printf("------------------\n");
		printf("저는 CDerived입니다!\n");
		printf("------------------\n");
	}
};

 CDerived gildong;

void main(){
	gildong.WhoAreYou();
	getchar();
}*/