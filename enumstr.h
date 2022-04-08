///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file enumstr.h
/// @version 1.0
///
/// @author Lyon Singleton <lyonws@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std ;



enum Gender{UNKNOWN_GENDER, MALE, FEMALE};
enum Breed{UNKNOWN_BREED, MAINE_COON, MANX, SHORTHAIR, PERSIAN, SPHYNX};
enum Color{BLACK, WHITE, RED, BLUE, GREEN, PINK};


extern const char* GenderToString(enum Gender gender) ;

extern const char* BreedToString( enum Breed breed) ;

extern const char* ColorToString( enum Color color) ;