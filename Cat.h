///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_2 - EE 205 - Spr 2022
///
/// @file Cat.h
/// @version 1.0
///
/// @author Lyon Singleton <lyonws@hawaii.edu>
/// @date   1_April_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

#include "config.h"
#include "catDatabase.h"
#include "enumstr.h"
#define MAX_CAT_NAME 50
using namespace std;
typedef float Weight ;
const Weight UNKNOWN_WEIGHT = -1 ;
class Cat {

protected:
    char name[MAX_CAT_NAME] ;
    enum Gender gender ;
    enum Breed breed ;
    bool isfixed ;
    Weight weight ;

public:
    Cat* next ;

private:
    void zeroOutMemberData();

public:
    Cat();
    Cat(const char *newName, Gender newGender, Breed newBreed, Weight newWeight) ;
    virtual ~Cat();

public:
    const char *getName() const noexcept ;
    void setName(const char* newName) ;
    Gender getGender() const noexcept ;
    Breed getBreed() const noexcept ;
    bool isFixed() const noexcept ;
    void fixCat() noexcept ;
    Weight getWeight() const noexcept ;
    void setWeight(Weight newWeight) ;

protected:

public:
    void setGender(Gender newGender);
    void setBreed(Breed newBreed);

public:
    bool print() const noexcept ;
    bool validate() const noexcept ;

public:
    static bool validateName(const char* newName) ;
    static bool validateGender(Gender NewGender) ;
    static bool validateBreed(Breed newBreed) ;
    static bool validateWeight(Weight newWeight) ;



};



