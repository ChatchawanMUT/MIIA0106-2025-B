#include <iostream>
#include <string>

using namespace std;
int main()

{
	cout << "---start for--- \n";
	for (int i = 1;
		i <= 10;
		i++)
	{
		cout  << i << "\n";
	}

	cout << "---start while--- \n";
	int j = 1;
	while (j <= 10)
	{
		cout << j << "\n";
		j++;
	}
   
	cout << "---start do while--- \n";
	int k = 1;
	do
	{
		cout << k << "\n";
		k++;
	} while (k <= 10);

	return 1;








}