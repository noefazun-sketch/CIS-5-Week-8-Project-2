
#include <iostream>
#include <cstdlib>
#include <ctime>

const int scoreAt0 = 95; // change this number

// Project 2 - Noe Zuniga
// CIS 5 Week 08
// Do not edit the boilerplate. It randomly generates 30 elements into the array.
// One main only. No vector. No extra functions. No files.

int main() {
    const int N = 30;
    int scores[N];
    const int scoreAt10 = 85; // change this number

    // Do not edit this boilerplate. It randomly generates 30 elements into the array.
    srand(static_cast<unsigned>(time(nullptr)));

    const int scoreAt20 = 75; // change this number

    for (int i = 0; i < N; ++i) {
        scores[i] = rand() % 100;
    }

    scores[0] = scoreAt0;
    const int scoreAt27 = 45; // change this number
    scores[10] = scoreAt10;
    scores[20] = scoreAt20;
    scores[27] = scoreAt27;

    // Print each student index and score
    std::cout << "Student Scores:" << std::endl;

    for (int i = 0; i < N; ++i) {
        std::cout << "Student at index " << i
                  << ": " << scores[i] << std::endl;
    }

    // Count letter grades
    int A = 0, B = 0, C = 0, D = 0, F = 0;

    for (int i = 0; i < N; ++i) {
        if (scores[i] >= 90) {
            A++;
        }
        else if (scores[i] >= 80) {
            B++;
        }
        else if (scores[i] >= 70) {
            C++;
        }
        else if (scores[i] >= 60) {
            D++;
        }
        else {
            F++;
        }
    }

    // Print grade counts
    std::cout << "\nGrade Counts:" << std::endl;
    std::cout << "A: " << A << std::endl;
    std::cout << "B: " << B << std::endl;
    std::cout << "C: " << C << std::endl;
    std::cout << "D: " << D << std::endl;
    std::cout << "F: " << F << std::endl;

    // Print students who need office hours
    std::cout << "\nOffice Hours:" << std::endl;

    int i = 0;

    while (i < N) {
        if (scores[i] < 60) {
            std::cout << "Student at index " << i
                      << " needs to come to office hours."
                      << std::endl;
        }
        ++i;
    }

    return 0;
}
