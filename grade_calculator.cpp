#include <iostream>
using namespace std;

int main() {
    int score;

    cout << "===== STUDENT GRADE CALCULATOR =====" << endl;
    cout << "Enter student's score (0 - 100): ";
    cin >> score;

    if (score < 0 || score > 100) {
        cout << "Invalid score entered!";
    }
    else if (score >= 70) {
        cout << "Grade: A";
    }
    else if (score >= 60) {
        cout << "Grade: B";
    }
    else if (score >= 50) {
        cout << "Grade: C";
    }
    else if (score >= 45) {
        cout << "Grade: D";
    }
    else {
        cout << "Grade: F";
    }

    return 0;
}
