//
// Created by Maikol Guzman on 8/20/20.
//

#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "Professor.h"

Professor::Professor() {}

Professor::Professor(double monthlySalary, double commissionRate) {}

Professor::~Professor() {

}

double Professor::getMonthlySalary() const {
    return monthlySalary;
}

void Professor::setMonthlySalary(double monthlySalary) {
    Professor::monthlySalary = monthlySalary;
}

double Professor::getCommissionRate() const {
    return commissionRate;
}

void Professor::setCommissionRate(double commissionRate) {
    Professor::commissionRate = commissionRate;
}

// calculate earnings;
// override pure virtual function salary in Professor
double Professor::salary() const {
    double salary = getMonthlySalary() + (getMonthlySalary() * getCommissionRate());
    return salary;
}

// return a string representation of Professor information
std::string Professor::toString() const {
    std::ostringstream output;
    output << std::fixed << std::setprecision(2);
    output << "Information: " << Person::toString()
           << ", Monthly Salary: " << salary();
    return output.str();
}