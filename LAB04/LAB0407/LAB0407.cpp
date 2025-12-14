#include <iostream>
#include <cmath>

using namespace std;

//  ฟังก์ชันตรวจสอบจำนวนเฉพาะ 
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int num;

    cout << "-----------------------------------" << endl;
    cout << "  Prime Number Checker Program" << endl;
    cout << "  (Type 0 to exit program)" << endl;
    cout << "-----------------------------------" << endl;

    // --- เริ่มต้น Loop วนซ้ำไม่รู้จบ ---
    while (true) {
        cout << "\nEnter a positive integer: ";
        cin >> num;

        // 1. ตรวจสอบเงื่อนไขการหยุดโปรแกรม
        if (num == 0) {
            cout << "Exiting program..." << endl;
            break; // คำสั่ง break ใช้สำหรับดีดออกจาก loop ทันที
        }

        // 2. ป้องกันกรณีผู้ใช้ใส่ค่าติดลบ (Optional)
        if (num < 0) {
            cout << "Please enter a positive number only." << endl;
            continue; // ข้ามรอบนี้ไป แล้วกลับไปรับค่าใหม่ทันที
        }

        // 3. เรียกฟังก์ชันตรวจสอบและแสดงผล
        if (isPrime(num)) {
            cout << ">> " << num << " is a PRIME number." << endl;
        }
        else {
            cout << ">> " << num << " is NOT a Prime number." << endl;
        }
    }

    return 0;
}