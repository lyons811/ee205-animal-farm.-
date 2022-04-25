///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Mammal.h
/// @version 1.0
///
/// @author Lyon Singleton <lyonws@hawaii.edu>
/// @date   21_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once
#include <iostream>
#include "Animal.h"
#include <string>
using namespace std ;


class Mammal : public Animal {
public:
    static const string MAMMAL_NAME ;
    Mammal(Weight::t_weight newMaxWeight,  const string& newSpecies) ;
    Mammal(Color newColor, Gender newGender, Weight newWeight, Weight::t_weight newMaxWeight, const string &newSpecies) ;
    Color getColor() const noexcept { return color ;}
    void setColor(const Color newColor) noexcept {color = newColor ; }
    void dump () const noexcept override ;
protected:
    Color color = Color::UNKNOWN_COLOR ;
};



