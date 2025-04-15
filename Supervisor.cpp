/**
 * @file Supervisor.cpp
 * @author Michael Floyd
 * @date 2025-04-15
 * @brief Methods for Supervisor Class
 * 
 * 
 */
#include "Supervisor.h"
#include <iostream>

using namespace std;

//constructor for supervisor
Supervisor::Supervisor() {
  numSupervised = -1;
}

//constructor that uses variables from employee and adds amount supervised
Supervisor::Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised) : Employee(ID, years, hourlyRate, hoursWorked) {
  this->numSupervised = numSupervised;
}

//prints out info about supervisor
void Supervisor::print() {
  Employee::print();//uses employee info
  cout << " Number Supervised: " << numSupervised << endl;//adds on info about amount supervised
}

//calculates pay based on employee pay and how many employees they are supervising
double Supervisor::calculatePay() {
  double val = Employee::calculatePay();//takes employee pay calculations
  val = val + val * (.01 * numSupervised);//supervisor pay equals employee pay + employee pay times 1% of employees supervised
  return val;
}
