#include "department.h"


int main(){
  Employee emp1("Alice", 6000);
  Employee emp2("Bob", 5500);

  Department dep1("IT", &emp1, &emp2);
  dep1.display_department();
  /*
  department name: IT
  secretary name: Alice, salary: 6000
  receptionist name: Bob, salary: 5500
  total salary: 11500
  */

  dep1.set_receptionist(&emp1);
  dep1.display_department();
  /*
  department name: IT
  secretary name: Alice, salary: 6000
  receptionist name: Alice, salary: 6000
  total salary: 6000
  */

  dep1.set_secretary(nullptr);
  dep1.display_department();
  /*
  department name: IT
  receptionist name: Alice, salary: 6000
  total salary: 6000
  */

}