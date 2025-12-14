#include<iostream>
#include<string>
using namespace std;

int maxofthree(int a, int b, int c)
{
	if (a >= b && a >= c)
		return a;
	else if (b >= a && b >= c)
		return b;
	else
		return c;

}

int minofthree(int a, int b, int c)
{
	if (a <= b && a <= c)
		return  a;
	else if (b <= a && b <= c)
		return  b;
	else
		return  c;
}


int main()
{ 
	int a, b, c;
	int maxvalue = -100000;


	cout << "Enter a integers: "; 
	cin >> a ; 
	cout << "Enter b integers: ";
	cin >> b;
	cout << "Enter c integers: ";
	cin >> c;


	maxvalue = maxofthree(a, b, c);
	cout << "the maximum value is:" << maxvalue << endl;

	int minvalue = minofthree(a, b, c);
	cout << "the minimum value is:" << minvalue << endl;

	return 1;
}