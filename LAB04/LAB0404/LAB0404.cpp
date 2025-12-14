#include <iostream>
using namespace std;

int main() {

    int number = 14;
	cout << "Multiplication Table for " << number << ":\n";
    for (int i = 1; i <= 12; i++) {
        cout << number << " x " << i << " = " << (number * i) << "\n";
    }

    return 0;
}