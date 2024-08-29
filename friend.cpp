#include<iostream>
using namespace std;

class Employee {
private:
    string name;
    int bpay, wrhrs, da, hra, bonus, gross;
    friend void result(Employee);

public:
    void read() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter the basic pay: ";
        cin >> bpay;
        cout << "Enter the working hours: ";
        cin >> wrhrs;
    }


    void print() {
        cout << "Name: " << name << endl;
        cout << "Basic Pay: " << bpay << endl;
        cout << "Working Hours: " << wrhrs << endl;
        cout << "Gross Salary: " << gross << endl;
    }
};

    void result(Employee em) {
        if (em.wrhrs > 50) {
            em.bonus = 5000;
            cout << "You are eligible for a Rs. 5000 bonus.\n";
        } else if (em.wrhrs >= 40) {
            em.bonus = 2000;
            cout << "You are eligible for a Rs. 2000 bonus.\n";
        } else {
            em.bonus = 0;
            cout << "No bonus awarded.\n";
        }

        em.da = (em.bpay * 10) / 100;
        em.hra = (em.bpay * 20) / 100;
        em.gross = em.bpay + em.bonus + em.da + em.hra;
    }

int main() {



    Employee s;
    s.read();
    result(s);
    s.print();
    return 0;
}

