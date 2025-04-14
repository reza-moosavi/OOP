#include <iostream>
#include <iomanip>  // برای setprecision()
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a) {}

    string GetName() const { return name; }
    int GetAge() const { return age; }

    virtual void ShowInfo() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
private:
    double averageScore;

public:
    Student(string n, int a, double avg) : Person(n, a), averageScore(avg) {}

    double GetAvg() const { return averageScore; }

    void ShowInfo() const override {
        Person::ShowInfo();
        cout << fixed << setprecision(2);
        cout << "Average Score: " << averageScore << endl;
    }
};

class Teacher : public Person {
private:
    double salary;

public:
    Teacher(string n, int a, double s) : Person(n, a), salary(s) {}

    double GetSalary() const { return salary; }

    void ShowInfo() const override {
        Person::ShowInfo();
        cout << fixed << setprecision(2);
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Person p("Ali", 21);
    cout << "Person Info:" << endl;
    p.ShowInfo();
    cout << endl;

    Student s("Amir", 17, 16.75);
    cout << "Student Info:" << endl;
    s.ShowInfo();
    cout << endl;

    Teacher t("Reza", 42, 62000.50);
    cout << "Teacher Info:" << endl;
    t.ShowInfo();
    cout << endl;

    return 0;
}
