///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file enumstr.h
/// @version 1.0
///
/// @author Lyon Singleton <lyonws@hawaii.edu>
/// @date   1_April_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once
#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std ;



enum Gender{UNKNOWN_GENDER, MALE, FEMALE};
enum Breed{UNKNOWN_BREED, MAINE_COON, MANX, SHORTHAIR, PERSIAN, SPHYNX};
enum class Color { UNKNOWN_COLOR=0, BLACK, BROWN, WHITE, RED, BLUE, GREEN, GINGER, CREAM, CINNAMON, CALICO} ;



extern const char* genderName(enum Gender gender) ;

extern const char* breedName( enum Breed breed) ;

extern const char* ColorToString( enum Color color) ;