#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Sequence {
private:
    string pname;
    int digits[5];
    int score;
    double ptime;
public:
    int sdigits[5];

    void setname(string name) {
        pname = name;
    }

    string getname() {
        return pname;
    }

    void generateSequence() {
        for (int i = 0; i < 5; i++) {
            digits[i] = rand() % 50 + 1;
        }
    }

    void displaySequence() {
        cout << "The Random Sequence is: ";
        for (int i = 0; i < 5; i++) {
            cout << digits[i] << " ";
        }
        cout << endl;
    }

    void sortSequence() {
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5 - i - 1; j++) {
                if (digits[j] > digits[j + 1]) {
                    swap(digits[j], digits[j + 1]);
                }
            }
        }
        for (int i = 0; i < 5; i++) {
            sdigits[i] = digits[i];
        }
    }

    void displaySortedSequence() {
        cout << "The Correct Sequence is: ";
        for (int i = 0; i < 5; i++) {
            cout << sdigits[i] << " ";
        }
        cout << endl;
    }

    void Seqgame() {
        score = 0;
        clock_t Go, Stop;
        int arr[5];
        Go = clock();
        for (int i = 0; i < 3; i++) {
            generateSequence();
            displaySequence();
            cout << "Enter The Sequence: ";
            for (int j = 0; j < 5; j++) {
                cin >> arr[j];
            }
            sortSequence();
            bool ans = true;
            for (int j = 0; j < 5; j++) {
                if (arr[j] != sdigits[j]) {
                    ans = false;
                    break;
                }
            }
            if (ans) {
                cout << "Correct!" << endl;
                score++;
            }
            else {
                cout << "Incorrect!" << endl;
                displaySortedSequence();
            }
        }
        Stop = clock();
        ptime = (Stop - Go) / static_cast<double>(CLOCKS_PER_SEC);
        cout << "Time taken: " << ptime << " seconds" << endl;
        cout << "The Total Score is: " << score;
    }
};

void run() {
    Sequence Y1;
    srand(time(0));
    char name[100];
    cout << "Please Enter Your Name: ";
    cin.ignore();
    cin.getline(name, 100);
    Y1.setname(name);
    cout << "Ready " << Y1.getname() << endl;
    Y1.Seqgame();
}

int main() {
    run();
    return 0;
}

