#include <iostream>
#include <string>
using namespace std;

// Base class
class student {
protected:
    int seatno;
    string name;

public:
    void getinfo() {
        cout << "\nEnter the seat no: ";
        cin >> seatno;
        cout << "Enter the name: ";
        cin.ignore(); // To clear leftover newline
        getline(cin, name);
    }

    void displayinfo() {
        cout << "\nSeat No: " << seatno;
        cout << "\nName   : " << name;
    }
};

// Derived from student
class exam : public student {
protected:
    int s1, s2, s3, s4;

public:
    void getmarks() {
        cout << "\nEnter the marks of 4 subjects (Each Max-300): ";
        cin >> s1 >> s2 >> s3 >> s4;
    }

    void displaymarks() {
        cout << "\nSubject 1 : " << s1;
        cout << "\nSubject 2 : " << s2;
        cout << "\nSubject 3 : " << s3;
        cout << "\nSubject 4 : " << s4;
    }
};

// Independent class
class evs {
protected:
    char grade;

public:
    void getgrade() {
        cout << "\nEnter the grade (A/B/C/D/F): ";
        cin >> grade;
    }

    void displaygrade() {
        cout << "\nGrade : " << grade;
    }
};

// Derived from exam and evs
class result : public exam, public evs {
private:
    int tot;
    float per;
    char score;

public:
    void display() {
        tot = s1 + s2 + s3 + s4;
        per = ((float)tot / 1200) * 100;  // since max total = 4 * 300

        displayinfo();
        displaymarks();
        displaygrade();

        cout << "\n----------------------------------------";
        cout << "\nTotal Marks : " << tot;
        cout << "\nPercentage  : " << per << "%";

        // Calculate pass/fail
        if ((s1 >= 120 && s2 >= 120 && s3 >= 120 && s4 >= 120) &&
            (grade == 'A' || grade == 'B' || grade == 'C'))
            score = 'P';
        else
            score = 'F';

        cout << "\nResult      : " << (score == 'P' ? "PASS" : "FAIL");
        cout << "\n----------------------------------------" << endl;
    }
};

int main() {
    result r;
    r.getinfo();
    r.getmarks();
    r.getgrade();
    r.display();
    return 0;
}
