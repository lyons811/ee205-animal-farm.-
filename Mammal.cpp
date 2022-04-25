///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Mammal.cpp
/// @version 1.0
///
/// @author Lyon Singleton <lyonws@hawaii.edu>
/// @date   21_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include "Mammal.h"
#include "Weight.h"

const string Mammal::MAMMAL_NAME = "Mammalian";



Mammal::Mammal(const Color newColor, const Gender newGender, const Weight newWeight,
               const Weight::t_weight newMaxWeight, const string &newSpecies) : Animal(UNKNOWN_GENDER) {
    color = newColor ;
    setGender(newGender) ;
    setWeight(newWeight) ;
    Weight setMaxWeight(newMaxWeight) ;
}

Mammal::Mammal(const Weight::t_weight newMaxWeight, const string& newSpecies)  {
    Weight setMaxWeight(newMaxWeight) ;
    Animal::setSpecies(newSpecies) ;

}

void Mammal::dump() const noexcept {
    Animal::dump() ;
    FORMAT_LINE_FOR_DUMP( "Mammal", "color " ) << ColorToString(getColor()) << endl ;

}






