#include <afxwin.h>

class CDerived : public CWinApp{
public:
	BOOL InitInstance(){
		AfxMessageBox(TEXT("�ȳ��ϼ��� ���� CDerived�Դϴ�"));
		return TRUE;
	}
};

CDerived gildong;