///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file updateCats.h
/// @version 1.0
///
/// @author Lyon Singleton <lyonws@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once


#include "catDatabase.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef float Weight;
extern int updateCatName(int index, const char* newName);
extern bool fixCat(int index);
extern Weight updateCatWeight( int index, Weight newWeight);
extern int updateCatCollar1 (int index, int newColor);
extern int updateCatCollar2 (int index, int newColor);
extern int updateLicense( int index, unsigned long long newLicense);