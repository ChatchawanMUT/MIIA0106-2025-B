// TODO 1) เติม field และ method ใน class Student 
// TODO 2) เขียนฟังก์ชัน printStudent(Student s) 
// TODO 3) เรียกใช้งาน printStudent จาก main
#include <iostream> 
#include  <string>
using namespace std;
class Student {
public:
    // TODO
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
void printStudent(Student s)
{
    cout << "ID:" << s.id << endl;
    cout << "Nickname" << s.nickname << endl;
    cout << "LineID" << s.lineid << endl;
    cout << "Phone" << s.phone << endl;
    // TODO: แสดงข้อมูลจาก object s
}
int main()
{
	Student s1;
	cout << "=== Input Student 1 ===\n";
    // TODO: s1.input();
    s1.input();

	cout << "\n=== Output (from function) ===\n";
	// TODO: printStudent(s1);
    printStudent(s1);
	return 0;
}
