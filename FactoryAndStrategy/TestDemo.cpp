#include <iostream>
#include "cash.h"

int main()
{
	//����ѹ���ģʽ�������ģʽ�ϲ��������ʾ
	CContextCash* ContextCash = new CContextCash(ADD_OPERATOR);

	int retValue = ContextCash->GetResult();
	std::cout << "����Ľ���ǣ�" << retValue << std::endl;
	exit(EXIT_SUCCESS);
}