#include <iostream>
using namespace std;

// Function to swap two integers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to perform bubble sort using pointers
void bubbleSort(int *arr, int size) {
    for (int i = 0; i < size - 1; ++i) {
        // Last i elements are already in place
        for (int j = 0; j < size - i - 1; ++j) {
            if (*(arr + j) > *(arr + j + 1)) {
                swap(arr + j, arr + j + 1);
            }
        }
    }
}

// Function to print array elements
void printArray(int *arr, int size) {
    for (int i = 0; i < size; ++i) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, size);

    // Sort the array using bubble sort
    bubbleSort(arr, size);

    cout << "Sorted array in ascending order: ";
    printArray(arr, size);

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

// Base class Patient
class Patient {
protected:
    string name;
    int age;
    string gender;

public:
    Patient(string n, int a, string g)
        : name(n), age(a), gender(g) {}

    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
    }
};

// Derived class InPatient
class InPatient : public Patient {
private:
    int roomNumber;
    string admissionDate;

public:
    InPatient(string n, int a, string g, int room, string date)
        : Patient(n, a, g), roomNumber(room), admissionDate(date) {}

    void displayDetails() {
        Patient::displayDetails();
        cout << "Room Number: " << roomNumber << endl;
        cout << "Admission Date: " << admissionDate << endl;
    }
};

// Derived class OutPatient
class OutPatient : public Patient {
private:
    string appointmentDate;
    string doctorName;

public:
    OutPatient(string n, int a, string g, string appDate, string docName)
        : Patient(n, a, g), appointmentDate(appDate), doctorName(docName) {}

    void displayDetails() {
        Patient::displayDetails();
        cout << "Appointment Date: " << appointmentDate << endl;
        cout << "Doctor Name: " << doctorName << endl;
    }
};

int main() {
    // Creating objects of InPatient and OutPatient
    InPatient inPatient("John Doe", 35, "Male", 101, "2024-07-18");
    OutPatient outPatient("Jane Smith", 28, "Female", "2024-07-20", "Dr. Williams");

    // Displaying details of InPatient
    cout << "In-Patient Details:" << endl;
    inPatient.displayDetails();
    cout << endl;

    // Displaying details of OutPatient
    cout << "Out-Patient Details:" << endl;
    outPatient.displayDetails();
    cout << endl;

    return 0;
}

