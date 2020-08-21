//
// Created by Maikol Guzman on 8/20/20.
//

#ifndef UNIT_TESTING_01_CATCH2_PROFESSOR_H
#define UNIT_TESTING_01_CATCH2_PROFESSOR_H

#include "ISalary.h"
#include "Person.h"

class Professor: public Person, ISalary {
public:
    Professor();

    Professor(double monthlySalary, double commissionRate);

    virtual ~Professor();

    double getMonthlySalary() const;

    void setMonthlySalary(double monthlySalary);

    double getCommissionRate() const;

    void setCommissionRate(double commissionRate);

    virtual double salary() const override; // calculate the salary
    virtual std::string toString() const override; // string representation
private:
    double monthlySalary;
    double commissionRate; // commission percentage
};

#endif //UNIT_TESTING_01_BASIC_PROFESSOR_H
