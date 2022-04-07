///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file reportCats.h
/// @version 1.0
///
/// @author Lyon Singleton <lyonws@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once



#include "Cat.h"
#include <cstdio>
#include <cstdlib>

extern const char* genderName(enum Gender gender);
extern const char* breedName(enum Breed breed);
extern void printCat(int index);

extern void printAllCats();

extern int findCat( const char* name);
