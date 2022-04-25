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


const string& Cat::SPECIES_NAME = "Felis Catus";
const Weight::t_weight Cat::MAX_WEIGHT = 40;


bool Cat::isFixed() const noexcept {
    return isCatFixed ;
}

void Cat::fixCat() noexcept {
    isCatFixed = true ;
}


bool Cat::validate() const noexcept  {
    if(getName() != name) {
        return false ;
    }

    if(!validateName(name) ) {
        return false;
    }
    return true ;
}


void Cat::dump() const noexcept {
    Mammal::dump() ;
    FORMAT_LINE_FOR_DUMP( "Cat", "name " ) << getName() << endl ;
    FORMAT_LINE_FOR_DUMP( "Cat", "isFixed " ) << boolalpha << isFixed() << endl ;


}

Cat::Cat(const string &newName, const Color newColor, const bool newIsFixed, const Gender newGender,
         const Weight::t_weight newWeight) : Mammal(MAX_WEIGHT, SPECIES_NAME){
    name = newName ;
    weight = Weight(newWeight) ;
    isCatFixed = newIsFixed ;
    color = newColor ;
    Animal::setGender(newGender) ;
}

string Cat::getName() const noexcept  {
    return name ;
}


bool Cat::validateName(const string &newName) {
    if(sizeof(name) == 0) {
        return false ;
    }
    return true ;
}

string Cat::speak() const noexcept {
    return "meow" ;
}




