//
// Created by Maikol Guzman on 8/20/20.
//

#include "../lib/catch2/catch.hh"
#include <Professor.h>

TEST_CASE( "ProfessorTestSuite", "CalculateSalary" ) {
    Professor professor;

    professor.setFirstName("Maikol");
    professor.setLastName("Guzman");
    professor.setDocumentId(12345);
    professor.setCommissionRate(0.13);
    professor.setMonthlySalary(100000);

    REQUIRE( professor.salary() == 113000 );
    REQUIRE( professor.getMonthlySalary() == 100000 );
}
