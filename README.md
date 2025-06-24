# 📒 Contact Book (C++)

A simple command-line contact management system written in C++ that allows users to add, view, search, and delete contacts, with persistent storage using file I/O.

---

## 🛠 Features

- ✅ Add new contacts with name, phone number, and email
- ✅ View all saved contacts with indexed display
- ✅ Search for a contact by name
- ✅ Remove a contact by its number
- ✅ Clear all contacts
- ✅ Automatically saves and loads from `contacts.txt`

---

## 🗃️ File Structure

├── main.cpp // Main program logic and menu
├── contactBook.cpp // Class implementation
├── contactBook.h // Class definition and struct
├── contacts.txt // Contact data (auto-generated)
└── README.md // Project documentation


---

## 💾 How It Works

- On startup, the program **loads** contacts from `contacts.txt`
- Contacts are stored in a `vector` of `Contact` structs
- At runtime, users can manage contacts via a menu-driven interface
- On exit, the program **saves** all contacts back to the file

---

## 🔧 How to Compile

You can compile this using any C++ compiler. For example, with `g++`:

```bash
g++ -o contactBook main.cpp contactBook.cpp
./contactBook

---

## 💡 Example Use

--- CONTACT BOOK MENU ---
1. Add Contact
2. View Contacts
3. Remove Contact
4. Search Contact
5. Clear all Contacts
6. Save and Exit
Enter your choice:

---

## 🚀 Future Improvements

- Add edit/update functionality

- Export contacts to CSV

- Search by phone number or email

- Alphabetical sorting

- Case-insensitive searching

---

## 📄 License

This project is open-source and free to use for learning and personal projects.

---

Let me know if you want to include screenshots, GitHub badges, or a more advanced setup section!
