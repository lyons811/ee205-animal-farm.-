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

const string Mammal::MAMMAL_NAME = "Mammilian";



Mammal::Mammal(const Color newColor, const Gender newGender, const Weight::t_weight newWeight,
               const Weight::t_weight newMaxWeight, const string &newSpecies) {
color = newColor ;
setGender(newGender) ;
setWeight(newWeight) ;

}

Mammal::Mammal(Weight::t_weight newMaxWeight, const string &newSpecies) {
Animal::getSpecies() = newSpecies ;
}

void Mammal::dump() const noexcept {
    Animal::dump();
}
