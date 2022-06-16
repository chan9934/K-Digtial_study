#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
	void SetID(int num)
	{
		id = num;
	}

	void SetName(char* str)
	{
		strcpy(name, str);
	}
	int GetID()
	{
		return id;
	}
	char* GetName() const
	{
		return (char*)name;
	}
private:
	int id;
	char name[30];

	enum Subjects { Math, English, Scinece };

	class Exam
	{
	public:
		void SetInfo(int id, char* name, Subjects s, int num);
		int GetPint() const
		{
			return point;
		}
		void GetResult(char* buf) const;

		Student student;
	private:
		Subjects subject;
		int point;
	};
};