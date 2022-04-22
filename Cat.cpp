///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_2 - EE 205 - Spr 2022
///
/// @file Cat.cpp
/// @version 1.0
///
/// @author Lyon Singleton <lyonws@hawaii.edu>
/// @date  1_April_2022
///////////////////////////////////////////////////////////////////////////////
#include "Cat.h"
#include <cstring>
#include <stdexcept>
#include <iostream>
#include <iomanip>
#include <cassert>
#include "enumstr.h"
using namespace std ;
#define FORMAT_LINE( className, member ) cout << setw(8) << (className) << setw(20) << (member) << setw(52)


const string Cat::SPECIES_NAME = "Felis Catus";
const Weight::t_weight Cat::MAX_WEIGHT = 40;


Cat::Cat() {
    zeroOutMemberData() ;
}

Cat::~Cat() {
    zeroOutMemberData() ;
}



const char *Cat::getName() const noexcept {
    return name;
}

void Cat::setName(const char *newName) {
    validateName(newName) ;
    memset(name, 0, MAX_CAT_NAME) ;
    strcpy(name, newName) ;
}



void Cat::zeroOutMemberData() {
memset(name, 0, MAX_CAT_NAME);
gender = UNKNOWN_GENDER ;
breed = UNKNOWN_BREED ;
isfixed = false ;
weight = UNKNOWN_WEIGHT ;
next = nullptr ;

}


Cat::Cat(const char *newName, const Gender newGender, const Breed newBreed, const Weight newWeight) : Cat() {
    setName(newName);
    setGender(newGender);
    setBreed(newBreed);
    setWeight(newWeight);
    assert(validate());
}




bool Cat::isFixed() const noexcept {
    return isfixed;
}

void Cat::fixCat() noexcept {
    Cat::isfixed = true;
}

Weight Cat::getWeight() const noexcept {
    return weight;
}

void Cat::setWeight(Weight newWeight) {
    validateWeight(newWeight) ;
    Cat::weight = newWeight ;
}

void Cat::setGender(Gender newGender) {
    if(gender != UNKNOWN_GENDER) {
        throw logic_error (PROGRAM_NAME ": The cat's gender is already set, you can't change it!") ;
    }

    validateGender(newGender);
    Cat::gender = newGender ;
}

void Cat::setBreed(Breed newBreed) {
    if(breed != UNKNOWN_BREED) {
        throw logic_error (PROGRAM_NAME ": The cat's breed is already set, you can't change it!") ;
    }

    validateBreed(newBreed);
    Cat::breed = newBreed ;
}


bool Cat::print() const noexcept {
    assert( validate() ) ;
    cout << setw(80) << setfill( '=' ) << "" << endl ;
    cout << setfill( ' ' ) ;
    cout << left ;
    cout << boolalpha ;
    FORMAT_LINE( "Cat", "name" ) << getName() << endl ;
    FORMAT_LINE( "Cat", "gender" ) << genderName( getGender() ) << endl ;
    FORMAT_LINE( "Cat", "breed" ) << breedName( getBreed() ) << endl ;
    FORMAT_LINE( "Cat", "isFixed" ) << isFixed() << endl ;
    FORMAT_LINE( "Cat", "weight" ) << getWeight() << endl ;




    return true;
}

bool Cat::validate() const noexcept {
    try {
        validateName(name);
        validateGender(gender);
        validateBreed(breed);
        validateWeight(weight);
    } catch (exception const& e){
        cout << e.what() << endl ;
        return false ;
    }

    return true;
}

bool Cat::validateName(const char *newName) {
    if(newName == nullptr) {
        throw invalid_argument(PROGRAM_NAME ": name can not be NULL!") ;
    }

    if(strlen(newName) <= 0 ) {
        throw length_error(PROGRAM_NAME ": name must be more then 0 letters!") ;
    }

    if(strlen(newName) >= MAX_CAT_NAME) {
        throw length_error(PROGRAM_NAME ": name must be less then 50 letters!") ;
    }



    return true;
}

bool Cat::validateGender(const Gender NewGender) {
    if( NewGender == UNKNOWN_GENDER) {
        throw invalid_argument(PROGRAM_NAME ": The gender must be known!") ;
    }

    return true;
}

bool Cat::validateBreed(const Breed newBreed) {
    if (newBreed <= 0 ) {
        throw invalid_argument(PROGRAM_NAME ": A cat's breed must be known!") ;
    }

    return true;
}

bool Cat::validateWeight(const Weight newWeight) {
    if(newWeight <= 0) {
        throw invalid_argument(PROGRAM_NAME ": A cat can not weigh 0 pounds!") ;
    }

    return true;
}

Gender Cat::getGender() const noexcept {
    return gender;
}

Breed Cat::getBreed() const noexcept {
    return breed;
}





