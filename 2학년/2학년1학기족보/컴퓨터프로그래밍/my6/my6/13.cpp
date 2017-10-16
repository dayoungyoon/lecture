#include <stdio.h>
#include <afxtempl.h>
class CDrawing{
public:
	virtual double Area()=0;

};
class Circle : public CDrawing{
	int iRadius;
public:
	double Area(){
		return 3.14*iRadius*iRadius;
	}
};

void main(){
	
}