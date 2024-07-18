#include <iostream>
using namespace std;
class BankAccount {
protected:
    string customerName;
    int accountNumber;
    string accountType;
    float balance;
public:
    BankAccount() {
        customerName = "";
        accountNumber = 0;
        accountType = "";
        balance = 0.0;
    }
    void setDetails(string name, int number, string type) {
        customerName = name;
        accountNumber = number;
        accountType = type;
        balance = 0.0; 
    }
    virtual void deposit(float amount) {
        balance += amount;
    }
    virtual void withdraw(float amount) {
        if (balance >= amount) {
            balance -= amount;
        } else {
            cout << "Insufficient balance." << endl;
        }
    }
    virtual void displayBalance() {
        cout << "Balance : " << balance << endl;
    }
    virtual void displayDetails() {
        cout << "Customer Name : " << customerName << endl;
        cout << "Account Number  : " << accountNumber << endl;
        cout << "Account Type    : " << accountType << endl;
        cout << "Balance : " << balance << endl;
    }
    virtual ~BankAccount() {}
};
class SavingAccount : public BankAccount {
public:
    SavingAccount() {
        accountType = "Saving";
    }
};
class CurrentAccount : public BankAccount {
public:
    CurrentAccount() {
        accountType = "Current";
    }
};
int main() {
    char accountChoice;
    string name;
    int accNumber;
    float amount;
    int choice;
    cout << "Enter S for saving customer and C for current a/c customer : ";
    cin >> accountChoice;
    BankAccount *account;
    if (accountChoice == 'S' || accountChoice == 's') {
        account = new SavingAccount();
    } else if (accountChoice == 'C' || accountChoice == 'c') {
        account = new CurrentAccount();
    } else {
        cout << "Invalid choice. Exiting..." << endl;
        return 0;
    }
    cout << "Enter Customer Name : ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter Account Number  : ";
    cin >> accNumber;
    account->setDetails(name, accNumber, account->accountType);
    do {
        cout << "\nChoose Your Choice\n";
        cout << "1)   Deposit\n";
        cout << "2)   Withdraw\n";
        cout << "3)   Display Balance\n";
        cout << "4)   Display with full Details\n";
        cout << "5)   Exit\n";
        cout << "Enter Your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "\nEnter amount to Deposit : ";
                cin >> amount;
                account->deposit(amount);
                break;
            case 2:
                cout << "\nBalance :- ";
                account->displayBalance();
                cout << "Enter amount to be withdraw : ";
                cin >> amount;
                account->withdraw(amount);
                cout << "\nBalance Amount After Withdraw: ";
                account->displayBalance();
                break;
            case 3:
                account->displayBalance();
                break;
            case 4:
                account->displayDetails();
                break;
            case 5:
                cout << "Thank You for Banking with us.." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a valid choice." << endl;
        }
    } while (choice != 5);
    delete account; 
    return 0;
}

