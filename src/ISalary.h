//
// Created by Maikol Guzman on 8/20/20.
//

#ifndef UNIT_TESTING_01_BASIC_ISALARY_H
#define UNIT_TESTING_01_BASIC_ISALARY_H


class ISalary {
public:
    // Virtual Functions makes Person an abstract base class
    virtual double salary() const = 0; // Pure Virtual

    virtual ~ISalary();
};


#endif //UNIT_TESTING_01_BASIC_ISALARY_H
