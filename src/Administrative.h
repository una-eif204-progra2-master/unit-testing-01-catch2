//
// Created by Maikol Guzman on 8/20/20.
//

#ifndef UNIT_TESTING_01_BASIC_ADMINISTRATIVE_H
#define UNIT_TESTING_01_BASIC_ADMINISTRATIVE_H


#include "Person.h"
#include "ISalary.h"

class Administrative: public Person, ISalary {
public:
    Administrative();

    Administrative(double monthlySalary);

    Administrative(const std::string &firstName, const std::string &lastName, int documentId, double monthlySalary);

    double getMonthlySalary() const;

    void setMonthlySalary(double monthlySalary);

    // keyword virtual signals intent to override
    virtual double salary() const override; // calculate the salary
    virtual std::string toString() const override; // string representation

private:
    double monthlySalary;
};


#endif //UNIT_TESTING_01_BASIC_ADMINISTRATIVE_H
