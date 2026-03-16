# Student Record Database Management System (C)

## Overview
The **Student Record Database Management System** is a menu-driven console application developed using the C programming language to manage student information efficiently.

The system allows users to **add, display, modify, delete, sort, reverse, and save student records**. The application uses a **singly linked list** for dynamic storage and **file handling** to store records permanently.

---

## Features

- Add new student records
- Display student records in tabular format
- Delete records using roll number or name
- Modify student name or marks
- Sort records by name or marks
- Reverse the linked list
- Save records to a file
- Delete all records
- Exit with save option

---

## Data Structure Used

The system uses a **Singly Linked List** to store student records dynamically.

```c
struct st
{
    int roll;
    char name[20];
    float marks;
    struct st *next;
};
```

Each node contains:
- Roll number
- Student name
- Student marks
- Pointer to the next record

---

## Menu Interface

```
*** STUDENT RECORD ***

a/A : Add new record
d/D : Delete a record
s/S : Show the list
m/M : Modify the record
v/V : Save the list
t/T : Sort the list
r/R : Reverse the list
l/L : Delete all the records
e/E : Exit
```

---

## File Storage

Student records can be saved to the file:

```
std_rcd.txt
```

This ensures persistent storage of the student database.

---

## Concepts Used

- Linked Lists
- Dynamic Memory Allocation
- File Handling
- Pointer Manipulation
- String Handling
- Searching Algorithms
- Sorting Algorithms
- Modular Programming

---

## Project Structure

```
student-record-management-system/
│
├── main.c
├── header.c
├── stud_add.c
├── stud_show.c
├── stud_del.c
├── stud_modify.c
├── stud_sort.c
├── stud_save.c
├── rev_list.c
├── count.c
└── del_all.c
```

---

## Sample Output

```
|-------------------------------------------|
| Roll       | Name            | Marks      |
|-------------------------------------------|
| 1          | John A          | 85.50      |
| 2          | Alexa           | 92.00      |
| 3          | Tony            | 78.25      |
|-------------------------------------------|
```

---

## Author

**Hemanth Kumar**  
Electronics and Communication Engineering  

---

## 📜 License

Developed for educational and research purposes, feel free to send pull requests.

