#ifndef CONTACTBOOK_H
#define CONTACTBOOK_H

#include <vector>
#include <string>
using namespace std;

class contactBook
{
public:
    struct Contact
    {
        string name;
        string phone;
        string email;
    };
    void addNewContact(const Contact &newContact);
    void viewAllContacts() const;
    Contact searchContact(string name);
    void deleteContact(int index);
    void clearAllContacts();
    void saveContacts(const string &fileName);
    void loadContacts(const string &fileName);

private:
    vector<Contact> contacts;
};

#endif