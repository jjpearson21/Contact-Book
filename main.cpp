#include "contactBook.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    contactBook myBook;
    int choice;
    contactBook::Contact input;
    string name;
    contactBook::Contact foundContact;
    string fileName = "contacts.txt";

    myBook.loadContacts(fileName); // Load on startup

    do
    {
        cout << "\n--- CONTACT BOOK MENU ---\n";
        cout << "1. Add Contact" << endl;
        cout << "2. View Contacts" << endl;
        cout << "3. Remove Contact" << endl;
        cout << "4. Search Contact" << endl;
        cout << "5. Clear all Contacts" << endl;
        cout << "6. Save and Exit" << endl;
        cin >> choice;
        cin.ignore();

        switch (choice)
        {
        case 1:
            system("cls");
            cout << "Enter Name: ";
            getline(cin, input.name);
            cout << "Enter Phone Number (xxx-xxx-xxxx): ";
            getline(cin, input.phone);
            cout << "Enter Email: ";
            getline(cin, input.email);
            myBook.addNewContact(input);
            break;
        case 2:
            system("cls");
            myBook.viewAllContacts();
            break;
        case 3:
            system("cls");
            cout << "Enter contact number to remove: ";
            int index;
            cin >> index;
            myBook.deleteContact(index);
            cout << "Contact deleted successfully." << endl;
            break;
        case 4:
            system("cls");
            cout << "Please enter the name you are looking for: ";
            getline(cin, name);
            foundContact = myBook.searchContact(name);
            if (foundContact.name == "")
            {
                cout << "The contact you are looking for is not in the Contact Book.";
            }
            else
            {
                cout << "Contact Found: " << foundContact.name << " : " << foundContact.phone << " : " << foundContact.email << endl;
            }
            break;
        case 5:
            system("cls");
            myBook.clearAllContacts();
            break;
        case 6:
            system("cls");
            cout << "Saving and Exiting..." << endl;
            break;
        default:
            system("cls");
            cout << "Invaild Choice." << endl;
        }
    } while (choice != 6);

    myBook.saveContacts(fileName); // Save on exit

    return 0;
}