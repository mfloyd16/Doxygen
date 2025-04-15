/**
 * @file Supervisor.h
 * @author Michael Floyd
 * @date 2025-04-15
 * @brief Variables and Method ideas for Supervisor
 * 
 * 
 */
#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "Employee.h"


/**
 * Supervisor class takes employee methods and adds to them
 *
 * @class Supervisor Supervisor.h "Doxygen/Supervisor.h"
 * @brief 
 *
 */
class Supervisor : public Employee {
 private:
  int numSupervised;//amount supervised
 public:

/**
 * Prints out info about supervisor
 *
 * @pre 
 * @return void 
 * @post 
 * 
 */
  void print();

/**
 * calculates pay of supervisor
 *
 * @pre 
 * @return double 
 * @post 
 * 
 */
  double calculatePay();

  //supervisor constructor
  Supervisor();

  //supervisor constructor with variables
  Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised);
};

#endif //SUPERVISOR_H
