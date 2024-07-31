#include <iostream>
#include <string>
#include <limits> // For numeric_limits

using namespace std;

// Base class for basic information
class BasicInfo {
public:
    string name;
    int age;
    char gender;

    // Function to read basic information
    void readBasicInfo() {
        cout << "Enter student's basic information:" << endl;
        cout << "Name?: ";
        getline(cin, name);
        cout << "Age?: ";
        cin >> age;
        cout << "Gender? (M/F): ";
        cin >> gender;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer
    }

    // Function to display basic information
    void displayBasicInfo() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
    }
};

// Derived class for result information
class ResultInfo : public BasicInfo {
public:
    int totalMarks;
    char grade;

    // Function to read result information
    void readResultInfo() {
        cout << "Enter student's result information:" << endl;
        cout << "Total Marks?: ";
        cin >> totalMarks;
        cout << "Grade?: ";
        cin >> grade;
    }

    // Function to display result information
    void displayResultInfo() const {
        cout << "Total Marks: " << totalMarks << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    // Create an object of the derived class
    ResultInfo student;

    // Read and display student's basic information
    student.readBasicInfo();
    student.readResultInfo();

    // Display student's information
    cout << "\nStudent's Information:" << endl;
    student.displayBasicInfo();
    student.displayResultInfo();

    return 0;
}

