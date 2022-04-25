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
#include <iostream>
#include "enumstr.h"
#include "Weight.h"
#include <string>
#include "Mammal.h"
#include "Animal.h"

#define MAX_CAT_NAME 50
using namespace std;


class Cat : public Mammal {
public:
    explicit Cat(const string& newName) : Mammal(MAX_WEIGHT, SPECIES_NAME){
        if(!validateName(newName)) {
            throw out_of_range(PROGRAM_NAME ": Cat has to have a name!") ;
        }
        name = newName ;
        isCatFixed = false ;
    }
    Cat (const string &newName, Color newColor, bool newIsFixed, Gender newGender, Weight::t_weight newWeight) ;
    string getName() const noexcept ;
    bool isFixed () const noexcept ;
    void fixCat () noexcept ;
    string speak () const noexcept override ;
    void dump () const noexcept override ;
    bool validate () const noexcept override ;
    static bool validateName(const string &newName) ;
    static const string& SPECIES_NAME ;
    static const Weight::t_weight MAX_WEIGHT ;
protected:
    string name ;
    bool isCatFixed  ;

} ;



