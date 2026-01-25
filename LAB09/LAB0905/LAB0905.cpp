// TODO 1) เติม field: id, nickname, height, weight 
// TODO 2) เขียน method input(), print(), calcBMI()

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

	double height;
	double weight;


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

		cout << "Enter Height (m):";
		cin >> height;

		cout << "Enter Weight (Kg)";
		cin >> weight;
	}

	void print()
	{
		cout << "ID" << id << endl;
		cout << "Nickname" << nickname << endl;
		cout << "LineID" << lineid << endl;
		cout << "Phone" << phone << endl;
		cout << "Enter Height (m):" << height << endl;
		cout << "Enter Weight (Kg)" << weight << endl;

	}

	double calcBMI()
	{

		return weight / (height  * height );

	}

};
int main()
{
	Student s1;
	cout << "=== Input Student ===\n";
	// TODO: s1.input();
	s1.input();
	cout << "\n=== Student Info ===\n";
	// TODO: s1.print();
	s1.print();
	cout << "BMI : " << s1.calcBMI() << endl;

	return 0;
}
