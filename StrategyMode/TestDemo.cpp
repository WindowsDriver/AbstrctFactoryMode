#include <iostream>
#include "cash.h"

//��ľ�̬��Ա����ʹ��ǰҪ��main������ǰ��ʼ��
//SuperCash* OperatorFactor::cashSuper = NULL;

int main()
{

	// ������ ������ģʽ
	SuperCash* pCashSuper = new OperatorMul();
	CContextCash* ContextCash = new CContextCash(pCashSuper);
	int retValue = ContextCash->GetResult();
	std::cout << "����Ľ���ǣ�" << retValue << std::endl;


}