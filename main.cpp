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







#include <cstdlib>
#include <iostream>
#include "config.h"
#include "Cat.h"
#include "SinglyLinkedList.h"
#include <iostream>
#include <cstring>
#include <exception>
#include "Animal.h"
using namespace std ;

#define MAX_NAME1 "1234567890123456789012345678901234567890123456789"
#define ILLEGAL_NAME "12345678901234567890123456789012345678901234567890"

int main() {
    cout << "Starting " << PROGRAM_NAME << endl ;
    SinglyLinkedList catDB ;
    catDB.push_front( new Cat( "Loki", Color::CREAM, true, Gender::MALE, 1.0 ) ) ;
    catDB.push_front( new Cat( "Milo", Color::BLACK, true, Gender::MALE, 1.1 ) ) ;
    catDB.push_front( new Cat( "Bella", Color::BROWN, true, Gender::FEMALE, 1.2 ) ) ;
    catDB.push_front( new Cat( "Kali", Color::CALICO, true, Gender::FEMALE, 1.3 ) ) ;
    catDB.push_front( new Cat( "Trin", Color::WHITE, true, Gender::FEMALE, 1.4 ) ) ;
    catDB.insert_after(catDB.get_first(), new Cat( "Chili", Color::GINGER, true,
                                                   Gender::MALE, 1.5 ) );
    for( Animal* pAnimal = (Animal*)catDB.get_first() ; pAnimal != nullptr ; pAnimal = (Animal*)List::get_next( (Node*)pAnimal ) ) {
        cout << pAnimal->speak() << endl;
    }

    catDB.validate() ;

    catDB.dump() ;

    catDB.deleteAllNodes() ;

    catDB.dump() ;


    cout << "Done with " << PROGRAM_NAME << endl ;
    return( EXIT_SUCCESS ) ;
}