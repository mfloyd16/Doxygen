/**
 * @file Employee.cpp
 * @author Michael Floyd
 * @date 2025-04-15
 * @brief Method for Employee class
 * 
 * 
 */


#include "Employee.h"
#include <iostream>

using namespace std;

//constructor for Employee
Employee::Employee() {
  ID = years = hoursWorked = hourlyRate = -1;
}

//constructor for employee that sets variables
Employee::Employee(int ID, int years, double hourlyRate, float hoursWorked) {
  this->ID = ID;
  this->years = years;
  this->hourlyRate = hourlyRate;
  this->hoursWorked = hoursWorked;
}

//Prints out employee information
void Employee::print() {
  cout << "Printing information for employee " << ID << ":\n Years Employed: " << years
       << "\n Hourly Rate: " << hourlyRate << "\n Hours Worked: " << hoursWorked
       << endl;
}

//Announces anniversary and increases pay
void Employee::anniversary() {
  years++;//increments years worked
  hourlyRate = hourlyRate + hourlyRate * .002;//Increases hourlyrate
  cout << "Congratulations to employee " << ID << " on " << years << " year(s) at company!"
       << endl;
}

//computes pay
double Employee::calculatePay() {
  return hourlyRate * hoursWorked;
}

