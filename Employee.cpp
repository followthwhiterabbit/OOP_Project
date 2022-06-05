// abstract base class Employee.h member function definitions 

#include <sstream>
#include "Employee.h" // Employee class definition 
using namespace std; 

// constructor 
Employee::Employee(const string& first, const string& last, const string& ssn)
    : firstName(first), lastName(last), socialSecurityNumber(ssn){}

// setting the first name 
void Employee::setFirstName(const string& first) {firstName = first;}

// return first name 
string Employee::getFirstName() const {return firstName;}

// set last name 
void Employee::setLastName(const string& last){lastName = last;}

// return last name 
string Employee::getLastName() const {return lastName;}


// set social security number 
void Employee::setSocialSecurityNumber(const string& ssn){
    socialSecurityNumber = ssn; 
}

// return ssn 
string Employee::getSocialSecurityNumber() const 
{
    return socialSecurityNumber; 
}

// toString Employee's information (virtual, but not pure virtual)
string Employee::toString() const {
    return getFirstName() + " "s + getLastName() + "\nsocial security number: "s + getSocialSecurityNumber(); 
    }
