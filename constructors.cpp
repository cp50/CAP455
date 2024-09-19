#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    float marks;
    public:
    Student() : name("chris"), rollNumber(34), marks(50) {}

    Student(string n, int r, float m) : name(n), rollNumber(r), marks(m) {}

    Student(string n, int r) : name(n), rollNumber(r), marks(0.0f) {}
    void display() const {
        cout << "Name: " << name << ", Roll Number: " << rollNumber << ", Marks: " << marks << endl;
    }
};

int main() {
    Student s1;
    Student s2("kashik", 35, 80);
    Student s3("sathavi", 9,90);

    s1.display();
    s2.display();
    s3.display();

    return 0;
}
