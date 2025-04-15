/**
 * @file Employee.h
 * @author Michael Floyd
 * @date 2025-04-15
 * @brief Variables and Method ideas for Employee
 * 
 * 
 */
#ifndef EMPLOYEE_H
#define EMPLOYEE_H


/**
 * Class that sets up Emloyee ID and Year, also has clculation methods
 *
 * @class Employee Employee.h "Doxygen/Employee.h"
 * @brief 
 *
 */
class Employee {
 private:
  int ID; //employee ID
  int years; //years worked
  
 protected:
  double hourlyRate; //pay in hours
  float hoursWorked; //how many hours employee has worked
 public:

/**
 * Prints out employee info
 *
 * @pre 
 * @return virtual 
 * @post 
 * 
 */
  virtual void print();

/**
 * Calculates employees pay
 *
 * @pre 
 * @return virtual 
 * @post 
 * 
 */
  virtual double calculatePay();

/**
 * States when an employees anniversary of working is
 *
 * @pre 
 * @return void 
 * @post 
 * 
 */
  void anniversary();

  //constructor
  Employee();

  //constructor that sets variables
  Employee(int ID, int years, double hourlyRate, float hoursWorked);
};

#endif //EMPLOYEE_H
