///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Gender.h
/// @version 1.0
///
/// @author Lyon Singleton <lyonws@hawaii.edu>
/// @date   21_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once
#include <iostream>
#include "config.h"
using namespace std ;
enum class Gender {
    UNKNOWN_GENDER = 0 ,
    MALE ,
    FEMALE
};

inline ostream& operator<<(ostream &lhs_stream, const Gender &rhs_Gender) {
    switch (rhs_Gender) {
        case Gender::UNKNOWN_GENDER :
            lhs_stream << "Unknown Gender" ;
            break ;
        case Gender::MALE :
            lhs_stream << "Male" ;
            break ;
        case Gender::FEMALE :
            lhs_stream << "Female" ;
            break ;
        default:
            throw out_of_range(PROGRAM_NAME ": This gender is not mapped to any string!" ;

    }
    return lhs_stream ;
}


