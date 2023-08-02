#include "department.h"
#include <iostream>

using namespace std;

Employee::Employee(string n, double s){
  employee_name = n;
  salary = s;
}

Department::Department(string n, Employee* s, Employee* r){
  department_name = n;
  secretary = s;
  receptionist = r;
}

void Department::set_receptionist(Employee* r){
  receptionist = r;
}

void Department::set_secretary(Employee* s){
  secretary = s;
}


void Department::display_department() const{
  cout << "department name: " << department_name << endl;
  if (secretary != nullptr){
    cout << "secretary name: " << secretary->employee_name << ", salary: " << secretary->salary << endl;
  }
  if (receptionist != nullptr){
    cout << "receptionist name: " << receptionist->employee_name << ", salary: " << receptionist->salary << endl;
  }
  cout << "total salary: " << get_total_salary() << endl;
}

double Department::get_total_salary() const{
  double total = 0;
  if (secretary != nullptr){
    total += secretary->salary;
  }
  if (receptionist!=nullptr && receptionist!=secretary){
    total += receptionist->salary;
  }
  return total;
}