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
#include "Node.h"
#include "config.h"
#include <string>
#include "enumstr.h"
using namespace std ;
class Weight ;
class Animal : public Node{
public:
    friend class Weight ;
    friend class Node ;
    Animal(Weight::t_weight newMaxWeight, const string &newClassification, const string &newSpecies ) ;
    Animal(Gender newGender, Weight newWeight, Weight::t_weight newMaxWeight, const string &newClassification, const string &newSpecies ) ;
    explicit Animal(Gender gender);

    Animal();


    string getKingdom() const noexcept ;
    string getClassification() const noexcept ;
    string getSpecies() const noexcept ;
    Gender getGender() const noexcept ;
    Weight getWeight() const noexcept ;
    void setWeight(Weight newWeight) ;
    virtual string speak() const noexcept = 0 ;
    void dump() const noexcept override ;
    bool validate() const noexcept override ;
    static bool validateClassification(const string &checkClassification) noexcept ;
    static bool validateSpecies(const string &checkSpecies) noexcept ;
    static const string KINGDOM_NAME ;
protected:
    friend class Cat ;
    friend class Mammal ;

     void setSpecies(string newSpecies) ;

     void setGender(Gender newGender) ;

private:
    string species ;
    string classification ;
    Gender gender = Gender::UNKNOWN_GENDER ;
    Weight weight ;


};


