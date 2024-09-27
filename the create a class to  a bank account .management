// Online C++ compiler to run C++ program online
#include<iostream>
#include<vector>
using namespace std;

class Bank {
public:
    string name;
    int acc_no;
    int balance_amt;

    Bank(string n, int acc, int bal) {
        name = n;
        acc_no = acc;
        balance_amt = bal;
    }

    int deposit(int deposit_amt) {
        balance_amt += deposit_amt;
        cout << "Your total balance is " << balance_amt << endl;
        return balance_amt;
    }

    int withdraw(int withdraw_amt) {
        if (withdraw_amt > balance_amt) {
            cout << "Insufficient balance!" << endl;
        } else {
            balance_amt -= withdraw_amt;
            cout << "Your total balance is " << balance_amt << endl;
        }
        return balance_amt;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Account No.: " << acc_no << endl;
        cout << "Balance: " << balance_amt << endl;
    }
};

int main() {
    int num_users;
    cout << "Welcome to BANK OF DHANTARA" << endl;
    cout << "Enter the number of users: ";
    cin >> num_users;

    vector<Bank> users;

    for (int i = 0; i < num_users; ++i) {
        string name;
        int acc_no, balance_amt;

        cout << "\nEnter details for user " << i + 1 << ":" << endl;
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter account number: ";
        cin >> acc_no;
        cout << "Enter initial balance: ";
        cin >> balance_amt;

        users.emplace_back(name, acc_no, balance_amt);
    }

    int choice, continue_choice, user_choice;
    do {
        cout << "\nSelect user by number (1 to " << num_users << "): ";
        cin >> user_choice;

        if (user_choice < 1 || user_choice > num_users) {
            cout << "Invalid user choice!" << endl;
            continue;
        }

        Bank &selected_user = users[user_choice - 1];

        cout << "Enter the operation:" << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Display details" << endl;
        cin >> choice;

        switch (choice) {
            case 1: {
                int deposit_amt;
                cout << "Enter deposit amount: ";
                cin >> deposit_amt;
                selected_user.deposit(deposit_amt);
                break;
            }
            case 2: {
                int withdraw_amt;
                cout << "Enter withdrawal amount: ";
                cin >> withdraw_amt;
                selected_user.withdraw(withdraw_amt);
                break;
            }
            case 3:
                selected_user.display();
                break;
            default:
                cout << "Invalid option!" << endl;
                break;
        }

        cout << "Do you want to continue? (1. Yes / 2. No): ";
        cin >> continue_choice;

    } while (continue_choice == 1);

 return 0;
}
