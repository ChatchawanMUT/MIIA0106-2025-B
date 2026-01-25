// TODO 1) เติม field ใน class Student ให้ครบ: id, nickname, lineId, phone 
// TODO 2) เขียน method input() รับค่าจากผู้ใช้ 
// TODO 3) เขียน method print() แสดงข้อมูล
#include <iostream>
#include  <string>
using namespace std;
class Student {
public:
	// TODO
	// propeties
	string id;
	string nickname;
	string lineid;
	string phone;

	void input()
	{
		cout << "Enter ID:";
		cin >> id;

		cout << "Enter Nickname:";
		cin >> nickname;

		cout << "Enter LineID:";
		cin >> lineid;

		cout << "Enter Phone:";
		cin >> phone;
	}

	void print()
	{
		cout << "ID" << id << endl;
		cout << "Nickname" << nickname << endl;
		cout << "LineID" << lineid << endl;
		cout << "Phone" << phone << endl;


	}

};

void input(Student s)
{

	cout << "Enter ID";
	cin >> s.id;

	cout << "Enter nickname";
	cin >> s.nickname;

	cout << "Enter Line ID";
	cin >> s.lineid;

	cout << "Enter phone";
	cin >> s.phone;
}
int main()
{
	Student s1;
	cout << "=== Input Student 1 ===\n";
	s1.input();
	// TODO: s1.input();

	cout << "\n=== Output Student 1 ===\n";
	// TODO: s1.print();
	s1.print();

	return 0;
}
