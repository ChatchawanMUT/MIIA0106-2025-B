#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void displayStudentInfo(string name, string id, double score, char grade)
{
    cout << "Student Name: " << name << "\n";
    cout << "Student ID  : " << id << "\n";
    // แสดงเป็น Total Score หรือ Average ก็ได้ (ในที่นี้แก้เป็น Average ให้ดูสมเหตุสมผลกับเกรด)
    cout << "Average     : " << fixed << setprecision(2) << score << "\n";
    cout << "Grade       : " << grade << "\n";
}

void calculateGrade(double score, char& grade)
{
    if (score >= 90) grade = 'A';
    else if (score >= 80) grade = 'B';
    else if (score >= 70) grade = 'C';
    else if (score >= 60) grade = 'D';
    else grade = 'F';
}

int main()
{
    const int N = 3; // students
    const int M = 4; // subjects

    string name[N], id[N];
    double score[N][M];
    double total[N];
    char grade[N];

    // --- ส่วนรับข้อมูล ---
    for (int i = 0; i < N; i++)
    {
        cout << "--------------------\n";
        cout << "Input for Student " << (i + 1) << endl;
        cout << "Enter student name: ";
        getline(cin >> ws, name[i]);
        cout << "Enter student ID: ";
        cin >> id[i];

        // Reset คะแนนรวมเป็น 0 ก่อนเริ่มบวก
        total[i] = 0.0;

        // [จุดที่แก้ 1] เปลี่ยน i++ เป็น j++
        for (int j = 0; j < M; j++)
        {
            cout << "Enter score for subject " << (j + 1) << ": ";
            cin >> score[i][j];
            total[i] += score[i][j];
        }

        // [จุดที่แก้ 3] หาค่าเฉลี่ยก่อนส่งไปตัดเกรด (เพราะเกณฑ์คือ 90/80/70)
        double average = total[i] / M;
        calculateGrade(average, grade[i]);
    }

    // --- ส่วนแสดงผล ---
    cout << "\n=== RESULTS ===\n";
    for (int i = 0; i < N; i++)
    {
        cout << "--------------------\n";
        // ส่ง average ไปแสดงผล หรือจะส่ง total ก็ได้แล้วแต่โจทย์ต้องการ
        double average = total[i] / M;
        displayStudentInfo(name[i], id[i], average, grade[i]);
    } // [จุดที่แก้ 2] ปิดปีกกาลูป for ให้เรียบร้อย

    return 0; // return 0 ต้องอยู่นอกลูป for และก่อนปิด main
}
