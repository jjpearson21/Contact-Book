#include "contactBook.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

void contactBook::addNewContact(const Contact &newContact)
{
    contacts.push_back(newContact);
}

void contactBook::viewAllContacts() const
{
    if (contacts.empty())
    {
        cout << "There are no contacts in the book" << endl;
        return;
    }

    cout << "Index : Name : Phone Number : Email" << endl;
    cout << "===================================" << endl;
    for (size_t i = 0; i < contacts.size(); i++)
    {
        cout << i + 1 << ". " << contacts[i].name << " : " << contacts[i].phone << " : " << contacts[i].email << endl;
    }
}

contactBook::Contact contactBook::searchContact(string name)
{
    for (int i = 0; i < contacts.size(); ++i)
    {
        if (contacts[i].name == name)
        {
            return contacts[i];
        }
    }

    return Contact{"", "", ""};
}

void contactBook::deleteContact(int index)
{
    if (index < 1 || index > contacts.size())
    {
        cout << "Please enter a valid index." << endl;
        return;
    }
    contacts.erase(contacts.begin() + (index - 1));
}

void contactBook::clearAllContacts()
{
    contacts.clear();
    cout << "All tasks cleared." << endl;
}

void contactBook::saveContacts(const string &fileName)
{
    cout << "Attempting to save " << contacts.size() << " contacts...\n";
    ofstream file(fileName);
    if (!file)
    {
        cout << "Failed to open file for writing.\n";
        return;
    }

    for (const auto &c : contacts)
    {
        file << c.name << '\n'
             << c.phone << '\n'
             << c.email << '\n';
    }

    file.close();
    cout << "Contacts saved successfully.\n";
}

void contactBook::loadContacts(const string &fileName)
{
    ifstream file(fileName);
    if (!file)
    {
        cout << "No saved contacts found.\n";
        return;
    }

    Contact c;
    while (getline(file, c.name) &&
           getline(file, c.phone) &&
           getline(file, c.email))
    {
        contacts.push_back(c);
    }

    file.close();
}