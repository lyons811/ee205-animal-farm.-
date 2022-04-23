///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Animal.h
/// @version 1.0
///
/// @author Lyon Singleton <lyonws@hawaii.edu>
/// @date   21_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once
#include <iostream>
#include "Weight.h"
#include "Gender.h"
#include "Node.h"
#include "config.h"
#include <string>
#include "Cat.h"
#include "Mammal.h"
using namespace std ;
class Weight ;
class Animal : public Node{
public:
    friend class Weight ;
    Animal(Weight::t_weight newMaxWeight, const string &newClassification, const string &newSpecies ) ;
    Animal(Gender newGender, Weight::t_weight newWeight, Weight::t_weight newMaxWeight, const string &newClassification, const string &newSpecies ) ;

    Animal();

    string getKingdom() const noexcept ;
    string getClassification() const noexcept ;
    string getSpecies() const noexcept ;
    Gender getGender() const noexcept ;
    Weight getWeight() const noexcept ;
    void setWeight(Weight::t_weight newWeight) ;
    virtual string speak() const noexcept = 0 ;
    void dump() const noexcept override ;
    bool validate() const noexcept override ;
    static bool validateClassification(const string &checkClassification) noexcept ;
    static bool validateSpecies(const string &checkSpecies) noexcept ;
    static const string KINGDOM_NAME ;
protected:
    void setGender(Gender newGender) ;
private:
    string species ;
    string classification ;
    Gender gender = Gender::UNKNOWN_GENDER ;
    Weight weight ;


};


