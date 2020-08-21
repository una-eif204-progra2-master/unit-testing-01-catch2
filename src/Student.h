//
// Created by Maikol Guzman on 8/20/20.
//

#ifndef UNIT_TESTING_01_CATCH2_STUDENT_H
#define UNIT_TESTING_01_CATCH2_STUDENT_H


#include <string>
#include "Person.h"

class Student : public Person{
public:
    Student();

    Student(const std::string &rate);

    Student(const std::string &firstName, const std::string &lastName, int documentId, const std::string &rate);

    virtual ~Student();

    const std::string &getRate() const;

    void setRate(const std::string &rate);

    virtual std::string toString() const override; // string representation

private:
    std::string rate;
};


#endif //UNIT_TESTING_01_BASIC_STUDENT_H
