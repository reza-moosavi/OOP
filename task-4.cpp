#include <iostream>
#include <string>

using namespace std;

// کلاس اصلی خودرو
class Vehicle {
private:
    bool fuelSystem; // سیستم سوخت
    bool powerSystem; // سیستم برق

public:
    Vehicle() {
        fuelSystem = false;
        powerSystem = false;
    }

    // متد شروع به کار خودرو
    virtual string ignite() {
        fuelSystem = true;
        powerSystem = true;
        string status;
        status += "Fuel system activated.\n";
        status += "Power system activated.\n";
        return status;
    }
};

// کلاس مخصوص خودروی Pride
class CompactCar : public Vehicle {
private:
    string enableRadio() {
        return "Radio enabled.\n";
    }

    string enableSpeedometer() {
        return "Speedometer activated.\n";
    }

public:
    string ignite() override {
        string status = Vehicle::ignite();
        status += enableRadio();
        status += enableSpeedometer();
        return status;
    }
};

// کلاس مخصوص خودروی BMW
class LuxuryCar : public Vehicle {
private:
    string activateGPS() {
        return "GPS enabled.\n";
    }

    string turnOnHeadlights() {
        return "Headlights turned on.\n";
    }

    string extendMirrors() {
        return "Side mirrors extended.\n";
    }

public:
    string ignite() override {
        string status = Vehicle::ignite();
        status += activateGPS();
        status += turnOnHeadlights();
        status += extendMirrors();
        return status;
    }
};

// تابع اصلی برنامه
int main() {
    Vehicle* car1 = new CompactCar(); // خودروی نوع Pride
    Vehicle* car2 = new LuxuryCar();  // خودروی نوع BMW

    cout << "Compact Car:\n" << car1->ignite() << endl;
    cout << "Luxury Car:\n" << car2->ignite() << endl;

    // آزاد کردن حافظه
    delete car1;
    delete car2;

    return 0;
}