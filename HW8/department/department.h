#ifndef DEPARTMENT_H
#define DEPARTMENT_H
#include <string>

class Employee{
public:
  Employee(std::string n, double s);
  std::string employee_name;
  double salary;
};


class Department{
public:
  Department(std::string n, Employee* s, Employee* r);

  /*
  set the receptionist to r; note that both receptionist and r are pointers
  */
  void set_receptionist(Employee* r);

    /*
  set the secretary to s; note that both secretary and s are pointers
  */
  void set_secretary(Employee* s);

  /*
  calculate the total salary and return it. 
  neglect the receptionist or secretary if it is nullptr.
  count only once if receptionist and secretary point to the same employee (check their address instead of name!)
  */
  double get_total_salary() const;

  /*
  display the department information, including department name, employees, and total salaries.
  see details in main function.
  neglect the receptionist or secretary if it is nullptr.
  */
  void display_department() const;


private:
  std::string department_name;
  Employee* receptionist; 
  Employee* secretary;
};

#endif
