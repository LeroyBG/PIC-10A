/*
 PIC 10A Homework 8, department.cpp
 Author: Leroy Betterton Gage
 UID: 505794766
 Discussion Section: 5D
 Date: 12/2/2022
 */

#include "department.h"
#include <iostream>

Employee::Employee(std::string n, double s){ // custom constructor
    employee_name = n; // set employee name to n
    salary = s; // set employee salary to s
}
Department::Department(std::string n, Employee* s, Employee* r){
    department_name = n; // set department name to n
    receptionist = r; // set receptionist to r
    secretary = s; // set secretary to s
}

void Department::set_receptionist(Employee* r){
    receptionist = r; // set receptionist to r
}

void Department::set_secretary(Employee* s){
    secretary = s; // set secretary to s
}

double Department::get_total_salary() const{
    int total_salary = 0; // init total_salary as 0
    if (receptionist != nullptr && secretary != nullptr){ // if both receptionist and secretary aren't null pointers
        if (receptionist == secretary){ // and receptionist and secretary both point to the same thing
            total_salary = receptionist->salary; // total salary is just one of their salaries
        }
        else { // otherwise,
            total_salary = (receptionist->salary) + (secretary->salary); // if both point to different employees, add up the two salaries for the total salary
        }
    }
    else if (receptionist != nullptr && secretary == nullptr){  // if receptionist isn't nullptr but secretary is,
        total_salary = receptionist->salary; // total salary is just the receptionist's salary
    }
    else if (receptionist == nullptr && secretary != nullptr){ // if the reverse is true,
        total_salary = secretary->salary; // total salary is the secretary's salary
    }
    return total_salary;
}

void Department::display_department() const{
    if (receptionist != nullptr && secretary != nullptr){ // this function follows the same logic structure as the last
        if (receptionist == secretary){
            std::cout<<"Department name: "<<department_name<<std::endl // print department name
            <<"Receptionist: "<<receptionist->employee_name<<", Salary: "<<receptionist->salary<<std::endl // print receptionist name and salary
            <<"Secretary: "<<secretary->employee_name<<", Salary: "<<secretary->salary<<std::endl // print secretary name and salary
            <<"Total Salaries: "<<get_total_salary()<<std::endl<<std::endl; // print total salary
        }
        else {
            std::cout<<"Department name: "<<department_name<<std::endl // print department name
            <<"Receptionist: "<<receptionist->employee_name<<", Salary: "<<receptionist->salary<<std::endl // print receptionist name and salary
            <<"Secretary: "<<secretary->employee_name<<", Salary: "<<secretary->salary<<std::endl// print secretary name and salary
            <<"Total Salaries: "<<get_total_salary()<<std::endl<<std::endl; // print total salary
        }
    }
    else if (receptionist != nullptr && secretary == nullptr){
        std::cout<<"Department name: "<<department_name<<std::endl // print department name
        <<"Receptionist: "<<receptionist->employee_name<<", Salary: "<<receptionist->salary<<std::endl // print receptionist name and salary
        <<"Total Salaries: "<<get_total_salary()<<std::endl<<std::endl; // print total salary
    }
    else if (receptionist == nullptr && secretary != nullptr){
        std::cout<<"Department name: "<<department_name<<std::endl // print department name
        <<"Secretary: "<<secretary->employee_name<<", Salary: "<<secretary->salary<<std::endl// print secretary name and salary
        <<"Total Salaries: "<<get_total_salary()<<std::endl<<std::endl; // print total salary
    }
}
