#include <string>
#include <iostream>
using namespace std;

class Student
{
public:
	// TODO 1) เติม field และ method
	// Properties
	string id;
	string nickname;
	string lineId;
	string phone;

	// Methods
	void input()
	{
		cout << "Enter id: ";
		cin >> id;
		cout << "Enter Nickname: ";
		cin >> nickname;
		cout << "Enter LineId: ";
		cin >> lineId;
		cout << "Enter Phone: ";
		cin >> phone;
	}

	void print()
	{
		cout << "ID: " << id << endl;
		cout << "Nickname: " << nickname << endl;
		cout << "LineId: " << lineId << endl;
		cout << "Phone: " << phone << endl;
	}
};

// TODO 2) เขียน swapStudent(Student&, Student&)
void swapStudent(Student& a, Student& b)
{
	Student temp = a;
	a = b;
	b = temp;
}

// TODO 3) เขียน sortByID(Student[], size)
void sortByID(Student students[], int size)
{
	// Bubble sort: เรียง id น้อย -> มาก
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			// ใช้ string comparison (ถ้า id ของ j มากกว่า j+1 ให้สลับที่กัน)
			if (students[j].id > students[j + 1].id)
			{
				swapStudent(students[j], students[j + 1]);
			}
		}
	}
}

void printStudents(Student students[], int size)
{
	for (int i = 0; i < size; i++)
	{
		// แก้ไข: เอา comment ออกเพื่อให้เรียกใช้ method print() ได้
		students[i].print();
		cout << "--------------------" << endl;
	}
}

int main()
{
	const int SIZE = 5; // สามารถเปลี่ยนจำนวนตรงนี้เพื่อทดสอบข้อมูลน้อยลงได้ เช่น เหลือ 3
	Student students[SIZE];

	// วนลูปรับข้อมูล
	for (int i = 0; i < SIZE; i++)
	{
		cout << "=== Input Student " << (i + 1) << " ===\n";
		students[i].input();
		cout << endl;
	}

	// ทำการเรียงลำดับ
	sortByID(students, SIZE);

	// แสดงผล
	cout << "\n===== Student List (Sorted by ID) =====\n";
	printStudents(students, SIZE);

	return 0;
}