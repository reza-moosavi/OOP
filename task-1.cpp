#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    // سازنده پیش‌فرض
    Person() : name("Unknown"), age(0) {}

    // سازنده با مقداردهی اولیه
    Person(string n, int a) {
        setName(n);
        setAge(a);
    }

    // متد دریافت نام
    string getName() const {
        return name;
    }

    // متد تنظیم نام
    void setName(string n) {
        if (!n.empty()) {
            name = n;
        } else {
            cout << "Invalid name!" << endl;
        }
    }

    // متد دریافت سن
    int getAge() const {
        return age;
    }

    // متد تنظیم سن
    void setAge(int a) {
        if (a > 0) {
            age = a;
        } else {
            cout << "Invalid age!" << endl;
        }
    }

    // متد چاپ اطلاعات شخص
    void printInfo() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    // ایجاد یک شیء از کلاس Person
    Person p1("Reza", 29);
    
    // چاپ اطلاعات اولیه
    p1.printInfo();

    // تغییر نام و سن
    p1.setName("Ali");
    p1.setAge(32);

    // چاپ اطلاعات پس از تغییرات
    cout << "\nUpdated Information:" << endl;
    p1.printInfo();

    return 0;
}
