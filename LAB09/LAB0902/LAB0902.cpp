// TODO 1) เติม field และ method ใน class Student 
// TODO 2) รับข้อมูลนักศึกษา 5 คน 
// TODO 3) แสดงผลข้อมูลนักศึกษาทั้งหมด
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
int main()
{
    const int SIZE = 5;
    Student students[SIZE];
    // INPUT
    for (int i = 0; i < SIZE; i++)
    {
        cout << "=== Input Student " << (i + 1) << " ===\n";
        // TODO: students[i].input();
        students[i].input();
        cout << endl;
    }

    // OUTPUT
    cout << "\n===== Student List =====\n";
    for (int i = 0; i < SIZE; i++)
    {
        // TODO: students[i].print();
        students[i].print();
        cout << "----------------------\n";
    }

    return 0;
}
