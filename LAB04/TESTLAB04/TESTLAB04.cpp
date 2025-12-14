#include <iostream>
#include <string>

using namespace std;

// กำหนดค่าสมมติสำหรับสี (1 = เจอเส้นสีดำ, 0 = พื้นสีขาว)
const int BLACK_LINE = 1;
const int WHITE_FLOOR = 0;

class LineFollowingRobot {
public:
    // ฟังก์ชันจำลองการทำงานของมอเตอร์
    void turnLeft() {
        cout << "[Action]: Turn Left (Left Motor: STOP, Right Motor: RUN)" << endl;
    }

    void turnRight() {
        cout << "[Action]: Turn Right (Left Motor: RUN, Right Motor: STOP)" << endl;
    }

    void moveForward() {
        cout << "[Action]: Run straight ahead. (Left Motor: RUN, Right Motor: RUN)" << endl;
    }

    void stopCar() {
        cout << "[Action]: Stop the car (No line found or error.)" << endl;
    }

    // ฟังก์ชันประมวลผลหลัก (Brain)
    void processLogic(int left, int center, int right) {
        // แสดงสถานะเซนเซอร์ที่รับเข้ามา
        cout << "\n--- Sensor Status: L=" << left << " C=" << center << " R=" << right << " ---" << endl;

        // ตรวจสอบเงื่อนไขตามที่คุณกำหนด
        // 1. ถ้าเส้นสีดำอยู่ทางซ้าย (ซ้ายเจอเส้น, กลางไม่เจอ)
        if (left == BLACK_LINE && center == WHITE_FLOOR) {
            turnLeft();
        }
        // 2. ถ้าเส้นสีดำอยู่ทางขวา (ขวาเจอเส้น, กลางไม่เจอ)
        else if (right == BLACK_LINE && center == WHITE_FLOOR) {
            turnRight();
        }
        // 3. ถ้าเส้นสีดำอยู่กลาง (กลางเจอเส้น)
        else if (center == BLACK_LINE) {
            moveForward();
        }
        // กรณีอื่นๆ (เช่น ไม่เจอเส้นเลย หรือ เจอทุกเส้น)
        else {
            stopCar();
        }
    }
};

int main() {
    LineFollowingRobot robot;
    int sLeft, sCenter, sRight;

    cout << "========================================\n";
    cout << "   Line Following Robot Simulation      \n";
    cout << "========================================\n";
    cout << "Instruction: Enter 1 for BLACK LINE, 0 for WHITE FLOOR\n";
    cout << "Example: 0 1 0 (Line is in center)\n";
    cout << "Enter -1 to exit program.\n";
    cout << "========================================\n";

    while (true) {
        cout << "\nEnter Sensor Values (Left Center Right): ";

        // รับค่าจำลองจากผู้ใช้ (Simulate Input)
        cin >> sLeft;

        // เช็คเงื่อนไขออกจากโปรแกรม
        if (sLeft == -1) break;

        cin >> sCenter >> sRight;

        // ส่งค่าไปให้หุ่นยนต์ประมวลผล
        robot.processLogic(sLeft, sCenter, sRight);
    }

    return 0;
}