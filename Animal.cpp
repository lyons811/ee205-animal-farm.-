///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Animal.cpp
/// @version 1.0
///
/// @author Lyon Singleton <lyonws@hawaii.edu>
/// @date   21_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include "Animal.h"
#include <iostream>
#include "Weight.h"
#include "Mammal.h"
#include <cassert>
#include <stdexcept>
#include <iostream>
#include <iomanip>
#include <utility>
#include "Cat.h"

const string Animal::KINGDOM_NAME = "Animalia";


Animal::Animal(Weight::t_weight newMaxWeight, const string &newClassification, const string &newSpecies) {
    classification = newClassification ;
    species = newSpecies ;
    Weight setMaxWeight(newMaxWeight) ;
}

Animal::Animal(const Gender newGender, const Weight newWeight, const Weight::t_weight newMaxWeight,
               const string &newClassification, const string &newSpecies) {

    Animal::setGender(newGender) ;
    Animal::setWeight(newWeight) ;
    classification = newClassification ;
    species = newSpecies ;
    Weight setMaxWeight(newMaxWeight) ;

}

string Animal::getKingdom() const noexcept {
    return KINGDOM_NAME ;
}

string Animal::getClassification() const noexcept {
    return classification ;
}

string Animal::getSpecies() const noexcept {
    return species ;
}

Gender Animal::getGender() const noexcept {
    return gender ;
}

Weight Animal::getWeight() const noexcept {
    return weight ;
}

void Animal::setWeight(const Weight newWeight) {
    weight = newWeight ;
}

void Animal::dump() const noexcept {
    Node::dump() ;
    FORMAT_LINE_FOR_DUMP( "Animal", "this " ) << this << endl ;
    FORMAT_LINE_FOR_DUMP( "Animal", "kingdom " ) << getKingdom() << endl ;
    FORMAT_LINE_FOR_DUMP( "Animal", "classification " ) << getClassification() << endl ;
    FORMAT_LINE_FOR_DUMP( "Animal", "species " ) << getSpecies() << endl ;
    FORMAT_LINE_FOR_DUMP( "Animal", "gender " ) << getGender()  << endl ;
    FORMAT_LINE_FOR_DUMP( "Animal", "weight " ) << (to_string(getWeight().getWeight(Weight::Pound)) + string( " out of ") + to_string(Weight::convertWeight(getWeight().getMaxWeight(), getWeight().getWeightUnit(), Weight::Pound)) + "Pounds") << endl;

}

bool Animal::validate() const noexcept {
    try {
        validateClassification(classification) ;
        validateSpecies(species) ;
    } catch (exception const& e){
        cout << e.what() << endl ;
        return false ;
    }

    return true ;
}

bool Animal::validateClassification(const string &checkClassification) noexcept {
    if(Mammal::MAMMAL_NAME != checkClassification) {
        return false ;
    }

    return true ;
}

bool Animal::validateSpecies(const string &checkSpecies) noexcept {
    if(Cat::SPECIES_NAME != checkSpecies) {
        return false ;
    }
    return true ;
}

void Animal::setGender(const Gender newGender) {
    if(gender == UNKNOWN_GENDER) {
        gender = newGender ;
    }
}



void Animal::setSpecies(string newSpecies) {
species = move(newSpecies) ;
}

Animal::Animal() = default;

Animal::Animal(Gender gender) {
this->gender = gender ;
}