#include <iostream>
#include "cash.h"

//��ľ�̬��Ա����ʹ��ǰҪ��main������ǰ��ʼ��
SuperCash* OperatorFactor::cashSuper = NULL;

int main()
{
	// �����¼򵥹���ģʽ
	SuperCash* _superCash = OperatorFactor::CreateOperator(ADD_OPERATOR);
	_superCash->SetNumberA(2);
	_superCash->SetNumberB(220);
	int _retValue = _superCash->GetCashResult();
	std::cout << "the result is :" << _retValue << std::endl;
	//exit(EXIT_SUCCESS);

	// ������ ������ģʽ
	SuperCash* pCashSuper = new OperatorMul();
	CContextCash* ContextCash = new CContextCash(pCashSuper);
	int retValue = ContextCash->GetResult();
	std::cout << "����Ľ���ǣ�" << retValue << std::endl;


}