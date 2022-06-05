// SalariedEMployee.h class member functions 
#include <iomanip> 
#include <stdexcept> 
#include <sstream> 
#include "SalariedEmployee.h"
using namespace std; 

// constructor 
SalariedEmployee::SalariedEmployee(const string& first, const string& last, const string& ssn, double salary)
    : Employee(first, last, ssn)
{
setWeeklySalary(salary); 
}

// set salary 
double SalariedEmployee::getWeeklySalary() const {return weeklySalary;}

// calculate earnings 
// override pure virtual function earings in Employee 
double SalariedEmployee::earnings() const {return getWeeklySalary();}

void SalariedEmployee::setWeeklySalary(double salary)
{
    if (salary < 0.0)
    {
        throw invalid_argument("Weekly salary must be >= 0.0"); 
    }
    weeklySalary = salary; 
}


// return  a string representaiton of salariedemployee's information 
string SalariedEmployee::toString() const 
{
    ostringstream output; 
    output << fixed << setprecision(2); 
    output << "salaried employee: "
        << Employee::toString() // reuse abstract base-class function 
        << "\nweekly salary: " << getWeeklySalary(); 
    return output.str(); 

}
