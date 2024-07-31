#include <iostream>
using namespace std;
class Person {
protected:
    string name;
    int id;
public:
    virtual void getData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter ID: ";
        cin >> id;
    }
    virtual void displayData() const {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
    }
    virtual double calculateBonus() const = 0; 
};
class Admin : virtual public Person {
public:
    void getData() override {
        Person::getData();
    }
    void displayData() const override {
        Person::displayData();
    }
    double calculateBonus() const override {
        return 5000; 
    }
};
class Account : virtual public Person {
public:
    void getData() override {
        Person::getData();
    }
    void displayData() const override {
        Person::displayData();
    }
    double calculateBonus() const override {
        return 4000; 
    }
};
class Master : public Admin, public Account {
public:
    void getData() override {
        Admin::getData(); 
    }
    void displayData() const override {
        Admin::displayData(); 
    }
    double calculateBonus() const override { 
        return Admin::calculateBonus() + Account::calculateBonus();
    }
};
int main() {
    Master m;
    m.getData();
    m.displayData();
    cout << "Total Bonus: " << m.calculateBonus() << endl;
    return 0;
}

