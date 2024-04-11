#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const int MAX_STUDENTS = 20;
    int numStudents;

    cout << "Enter the number of students in the class section (maximum " << MAX_STUDENTS << "): ";
    cin >> numStudents;

    if (numStudents <= 0 || numStudents > MAX_STUDENTS) {
        cout << "Invalid number of students. Please enter a number between 1 and " << MAX_STUDENTS << "." << endl;
        return 1; // Exit with an error code
    }

    int scores[MAX_STUDENTS];
    int highestScore = -1; // Initialize to a value lower than any possible score
    int lowestScore = 101; // Initialize to a value higher than any possible score
    int totalScore = 0;

    for (int i = 0; i < numStudents; i++) {
        cout << "Enter the exam score for student #" << (i + 1) << ": ";
        cin >> scores[i];

        // Update highest and lowest scores if necessary
        if (scores[i] > highestScore) {
            highestScore = scores[i];
        }
        if (scores[i] < lowestScore) {
            lowestScore = scores[i];
        }

        totalScore += scores[i];
    }

    // Calculate the average score
    double averageScore = static_cast<double>(totalScore) / numStudents;

    // Display results
    cout << fixed << setprecision(2);
    cout << "\nHighest score: " << highestScore << endl;
    cout << "Lowest score: " << lowestScore << endl;
    cout << "Class average: " << averageScore << endl;

    return 0;
}