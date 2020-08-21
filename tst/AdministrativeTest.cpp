//
// Created by Maikol Guzman on 8/20/20.
//

#include "../lib/catch2/catch.hh"
#include <Administrative.h>

TEST_CASE( "AdministrativeTestSuite", "CalculateSalary" ) {
    Administrative administrative;

    administrative.setFirstName("Pedro");
    administrative.setLastName("Villegas");
    administrative.setDocumentId(36525);
    administrative.setMonthlySalary(80000);

    REQUIRE( administrative.salary() == 80000 );
}
