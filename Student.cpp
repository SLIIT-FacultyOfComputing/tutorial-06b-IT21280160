#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int st_ID, char st_name[]) {
  
  studentId = st_ID;
  strcpy(name, st_name);
}

// Display StudentId and Name
void Student::display() {

  cout << "Student ID : " << studentId << endl;
  cout << "Student Name : " << name << endl;
}
