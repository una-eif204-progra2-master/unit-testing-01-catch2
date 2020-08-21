#ifndef UNIT_TESTING_01_CATCH2_PERSON_H
#define UNIT_TESTING_01_CATCH2_PERSON_H

#include <string>
#include <ostream>

/**
 * Abstract Class of Person
 */
class Person {
public:

    // Constructors
    Person();
    Person(const std::string &firstName, const std::string &lastName, int documentId);

    virtual ~Person();

    // Gets and Sets
    const std::string &getFirstName() const;

    void setFirstName(const std::string &firstName);

    const std::string &getLastName() const;

    void setLastName(const std::string &lastName);

    int getDocumentId() const;

    void setDocumentId(int documentId);

    virtual std::string toString() const; // Virtual
private:
    std::string firstName;
    std::string lastName;
    int documentId;
};

#endif //UNIT_TESTING_01_BASIC_PERSON_H
