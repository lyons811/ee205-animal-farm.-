///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_2 - EE 205 - Spr 2022
///
/// @file main.cpp
/// @version 1.0
///
/// @author Lyon Singleton <lyonws@hawaii.edu>
/// @date   1_April_2022
///////////////////////////////////////////////////////////////////////////////







#include <cstdio>
#include <cstdlib>
#include "Cat.h"
#include <cassert>
#include "config.h"
#include "catDatabase.h"
#include "addCats.h"
#include "reportCats.h"
#include "enumstr.h"
#include "deleteCats.h"
#include <iostream>
#include <cstring>
#include <exception>
using namespace std ;

#define MAX_NAME1 "1234567890123456789012345678901234567890123456789"
#define ILLEGAL_NAME "12345678901234567890123456789012345678901234567890"
#define DEBUG
int main() {
    cout << "Starting " << PROGRAM_NAME << endl ;

    StartDatabase() ;

#ifdef DEBUG
    {

      Cat testing = Cat();
      assert(testing.getName() != nullptr );
      assert(strcmp(testing.getName(), "") == 0);
      assert(testing.getGender() == UNKNOWN_GENDER);
      assert(testing.getBreed() == UNKNOWN_BREED);
      assert(testing.isFixed() == false);
      assert(testing.getWeight() == UNKNOWN_WEIGHT);
      assert(!testing.isFixed());
      assert(!testing.validate());


      try {
         testing.setName(nullptr);
         assert(false);
      } catch (exception const &e) {}


      try {
         testing.setName("");

      } catch (exception const &e) {}

      // Test valid names
      testing.setName("A");
      testing.setName(MAX_NAME1);


      try {
         testing.setName(ILLEGAL_NAME);
         assert(false);
      } catch (exception const &e) {}

      testing.setGender(FEMALE);

      try {
         testing.setGender(MALE);
         assert(false);
      } catch (exception const &e) {}

      testing.setBreed(MAINE_COON);

      try {
         testing.setBreed(MANX);
         assert(false);
      } catch (exception const &e) {}

      testing.fixCat();
      assert(testing.isFixed());


      try {
         testing.setWeight(0);
         assert(false);
      } catch (exception const &e) {}

      testing.setWeight(1.0 / 1024);
      assert(testing.getWeight() == 1.0 / 1024);

      assert(testing.validate());
      testing.print() ;

      assert(!isCatInDatabase(&testing)) ;
   }
#endif

    addCat( new Cat( "Loki", MALE, PERSIAN, 1.0 )) ;
    addCat( new Cat( "Milo", MALE, MANX , 1.1 )) ;
    addCat( new Cat( "Bella", FEMALE, MAINE_COON, 1.2 )) ;
    addCat( new Cat( "Kali", FEMALE, SHORTHAIR, 1.3 )) ;
    addCat( new Cat( "Trin", FEMALE, MANX, 1.4 )) ;
    addCat( new Cat( "Chili", MALE, SHORTHAIR, 1.5 )) ;


#ifdef DEBUG
    {

      Cat *bella = findCat("Bella");
      assert(bella != nullptr);

      assert(findCat("Bella's not here") == nullptr);


      assert(deleteCat(bella) == true);
      try {
         deleteCat(bella);
      } catch (exception const &e) {}

      bella = nullptr;
   }
#endif

    printAllCats() ;

    deleteAllCats() ;

    printAllCats() ;

    cout << "Done with " << PROGRAM_NAME << endl ;
    return( EXIT_SUCCESS ) ;
}