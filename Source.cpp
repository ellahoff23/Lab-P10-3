#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    const int MAX_STUDENTS = 20;
    int numStudents;

    cout << "Number of students: ";
    cin >> numStudents;

    if (numStudents <= 0 || numStudents > MAX_STUDENTS) {
        cout << "Invalid number of students. Please enter a number between 1 and " << MAX_STUDENTS << "." << endl;
        return 1; 
    }

    int scores[MAX_STUDENTS];
    int highestScore = -1; 
    int lowestScore = 101; 
    int totalScore = 0;

    for (int i = 0; i < numStudents; i++) {
        cout << "Enter score #" << (i + 1) << ": ";
        cin >> scores[i];

        if (scores[i] > highestScore) {
            highestScore = scores[i];
        }
        if (scores[i] < lowestScore) {
            lowestScore = scores[i];
        }

        totalScore += scores[i];
    }

    double averageScore = static_cast<double>(totalScore) / numStudents;
    averageScore = static_cast<int>(averageScore * 10) / 10.0;

    cout << fixed << setprecision(2);
    cout << "\nhigh = " << highestScore << " ";
    cout << "low = " << lowestScore << " ";
    cout << "average = " << setprecision (1) << averageScore << " ";

    return 0;
}