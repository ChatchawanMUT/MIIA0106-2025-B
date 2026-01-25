// TODO 1) เติม field ใน class Student: id, nickname
 // TODO 2) ใช้ pointer p ชี้ไปที่ s1 
// TODO 3) กำหนดค่าโดยใช้ p-> 
// TODO 4) แสดงผลโดยใช้ p->
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
int main()
{
	Student s1;
	Student* p = nullptr;
	// TODO: p = &s1;
	// TODO: p->id = ...;
	// TODO: p->nickname = ...;
	p = &s1;
	p->id = "6812100014";
	p->nickname = "fazin";
	p->lineid = "fazin432";
	p->phone = "081234567";
	cout << "\n=== Output Student 1 ===\n";
	cout << "ID: " << p->id << endl;
	cout << "Nickname:" << p->nickname << endl;
	
	//cout << "ID: " << s1.id << endl;
	//cout << "Nickname:" << s1.nickname << endl;
	return 0;
}
