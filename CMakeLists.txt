cmake_minimum_required(VERSION 3.1)

project(employee_project)


include_directories(./)

add_executable(out main_driver.cpp Employee.cpp SalariedEmployee.cpp CommissionEmployee.cpp BasePlusCommissionEmployee.cpp)
