#pragma once // *1

struct Employee // *2
{
	char firstInitial;
	char lastInitial;
	int employeeNumber;
	int salary;

};

// *1 Header ������ cpp�� �ѹ��̶� ������ ���� ��� ��ü ���ٸ� �ۼ� ���� ��ü .cpp ���Ͽ� ��� �� �� �ִ�.
// *2 struct ������ ����ȭ ��Ű�� Ÿ��, ���� char�� Ÿ������ ���� ���� firstInitial, lastInitial, int�� Ÿ������ ���� employeeNumber, salary�� ���ο� Employee Ÿ������ ���� ���� struct�� ���� ����ȭ ���״�.