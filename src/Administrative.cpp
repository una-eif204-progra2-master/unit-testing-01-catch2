//
// Created by Maikol Guzman on 8/20/20.
//

#include "Administrative.h"
#include <sstream>
#include <iomanip>

Administrative::Administrative() {}

Administrative::Administrative(double monthlySalary) : monthlySalary(monthlySalary) {}

Administrative::Administrative(const std::string &firstName, const std::string &lastName, int documentId,
                               double monthlySalary) : Person(firstName, lastName, documentId),
                                                       monthlySalary(monthlySalary) {}

double Administrative::getMonthlySalary() const {
    return monthlySalary;
}

void Administrative::setMonthlySalary(double monthlySalary) {
    Administrative::monthlySalary = monthlySalary;
}


double Administrative::salary() const {
    return getMonthlySalary();
}

std::string Administrative::toString() const {
    std::ostringstream output;
    output << std::fixed << std::setprecision(2);
    output << "Information: " << Person::toString()
           << ", Monthly Salary: " << salary();
    return output.str();
}