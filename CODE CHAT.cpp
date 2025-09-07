#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> messages;

    while (true) {
        cout << "\nChat Message History Manager\n";
        cout << "1. Add Message\n2. View History\n3. Search Message\n4. Delete Message\n5. Exit\nChoose: ";
        int choice;
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            string msg;
            cout << "Enter message: ";
            getline(cin, msg);
            messages.push_back(msg);
            cout << "Message added.\n";
        } else if (choice == 2) {
            cout << "\nMessage History:\n";
            for (size_t i = 0; i < messages.size(); ++i) {
                cout << i + 1 << ". " << messages[i] << endl;
            }
        } else if (choice == 3) {
            string keyword;
            cout << "Enter keyword to search: ";
            getline(cin, keyword);
            bool found = false;
            for (size_t i = 0; i < messages.size(); ++i) {
                if (messages[i].find(keyword) != string::npos) {
                    cout << "Found: " << i + 1 << ". " << messages[i] << endl;
                    found = true;
                }
            }
            if (!found) cout << "No message found with that keyword.\n";
        } else if (choice == 4) {
            cout << "Enter message number to delete: ";
            int num;
            cin >> num;
            cin.ignore();
            if (num < 1 || num > (int)messages.size()) {
                cout << "Invalid message number.\n";
            } else {
                messages.erase(messages.begin() + num - 1);
                cout << "Message deleted.\n";
            }
        } else if (choice == 5) {
            break;
        } else {
            cout << "Invalid choice.\n";
        }
    }
    return 0;
}