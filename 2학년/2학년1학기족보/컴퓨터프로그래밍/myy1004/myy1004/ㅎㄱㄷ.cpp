#include <afxwin.h>

class CDerived : public CWinApp{
public:
	BOOL InitInstance(){
		AfxMessageBox(TEXT("안녕하세요 저는 CDerived입니다"));
		return TRUE;
	}
};

CDerived gildong;