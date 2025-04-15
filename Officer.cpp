/**
 * @file Officer.cpp
 * @author Michael Floyd
 * @date 2025-04-15
 * @brief Methods for Officer class
 * 
 * 
 */
#include "Officer.h"
#include <iostream>

using namespace std;

//constructor for officer
Officer::Officer() {
  evilness = 500;
}

//constructor for variables: uses variables from employee 
Officer::Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness) : Employee(ID, years, hourlyRate, hoursWorked) {
  this->evilness = evilness;
}

//prints out same info as employee, Evilness is added
void Officer::print() {
  Employee::print();
  cout << " Evilness: " << evilness << endl;
}

//Evilness increases calculated pay
double Officer::calculatePay() {
  return (hourlyRate + evilness) * hoursWorked;
}
