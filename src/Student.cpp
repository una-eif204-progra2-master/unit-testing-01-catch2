//
// Created by Maikol Guzman on 8/20/20.
//

#include "Student.h"
#include <sstream>
#include <iomanip>

Student::Student() {}

Student::Student(const std::string &rate) : rate(rate) {}

Student::Student(const std::string &firstName, const std::string &lastName, int documentId, const std::string &rate)
        : Person(firstName, lastName, documentId), rate(rate) {}

Student::~Student() {

}

const std::string &Student::getRate() const {
    return rate;
}

void Student::setRate(const std::string &rate) {
    Student::rate = rate;
}

std::string Student::toString() const {
    std::ostringstream output;
    output << std::fixed << std::setprecision(2);
    output << "Information: " << Person::toString()
           << ", Rate: " << getRate();
    return output.str();
}
