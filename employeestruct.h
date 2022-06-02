#pragma once // *1

struct Employee // *2
{
	char firstInitial;
	char lastInitial;
	int employeeNumber;
	int salary;

};

// *1 Header 파일을 cpp에 한번이라도 컴파일 했을 경우 전체 별다른 작성 없이 전체 .cpp 파일에 사용 할 수 있다.
// *2 struct 변수를 구조화 시키는 타입, 기존 char의 타입으로 만든 변수 firstInitial, lastInitial, int의 타입으로 만든 employeeNumber, salary를 새로운 Employee 타입으로 묶기 위해 struct를 통해 구조화 시켰다.