// Employee abstract base class 
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee
{
    public:
        Employee(const std::string&, const std::string&, const std::string& ); 
        virtual ~Employee() = default; // compiler generates virtual destructor 

        void setFirstName(const std::string&); // set first name 
        std::string getFirstName() const; // returning the first name 

        void setLastName(const std::string&); // set last name 
        std::string getLastName() const; // return last name 

        void setSocialSecurityNumber(const std::string&); 
        std::string getSocialSecurityNumber() const; // return SSN 

        // pure virtual function definitions 
        virtual double earnings() const = 0; // pure virtual 
        virtual std::string toString() const; // virtual 

    private:
        std::string firstName; 
        std::string lastName; 
        std::string socialSecurityNumber; 


}; 



















#endif