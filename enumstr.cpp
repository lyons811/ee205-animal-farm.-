///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file enumstr.cpp
/// @version 1.0
///
/// @author Lyon Singleton <lyonws@hawaii.edu>
/// @date   1_April_2022
///////////////////////////////////////////////////////////////////////////////
#include "catDatabase.h"
#include "enumstr.h"
#include "Cat.h"
#include <iostream>
using namespace std ;


const char* genderName(enum Gender gender) {

    switch (gender) {
        case UNKNOWN_GENDER :
            return "Unknown gender" ;
        case MALE :
            return "Male" ;
        case FEMALE :
            return "Female" ;
        default :
            return "Invalid" ;
    }
}


const char* breedName( enum Breed breed) {

    switch (breed) {
        case UNKNOWN_BREED :
            return "Unknown breed" ;
        case MAINE_COON :
            return "Maine coon" ;
        case MANX :
            return "Manx" ;
        case SHORTHAIR :
            return "Shorthair" ;
        case PERSIAN :
            return "Persian" ;
        case SPHYNX :
            return "Sphynx" ;
        default :
            return "Invalid" ;
    }
}



const char* ColorToString( enum Color color) {

    switch (color) {
        case BLACK :
            return "Black" ;
        case WHITE :
            return "White" ;
        case RED :
            return "Red" ;
        case BLUE :
            return "Blue" ;
        case GREEN :
            return "Green" ;
        case PINK :
            return "Pink" ;
        default :
            return "Invalid" ;
    }
}

