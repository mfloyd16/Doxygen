/**
 * @file Officer.h
 * @author Michael Floyd
 * @date 2025-04-15
 * @brief Variables and Method ideas for Officer
 * 
 * 
 */
#ifndef OFFICER_H
#define OFFICER_H

#include "Employee.h"


/**
 * Officer class that uses methods from employee class and adds to them
 *
 * @class Officer Officer.h "Doxygen/Officer.h"
 * @brief 
 *
 */
class Officer : public Employee {
 private:
  double evilness;//How evil the officer is
 public:

/**
 * Prints out info about the officer
 *
 * @pre 
 * @return void 
 * @post 
 * 
 */
  void print();

/**
 * Calculates the officers pay
 *
 * @pre 
 * @return double 
 * @post 
 * 
 */
  double calculatePay();

  //constructor for officer
  Officer();

  //constructor that sets variables
  Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness);
};

#endif //OFFICER_H
