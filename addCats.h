///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file addCats.h
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



extern int addCat(  const char* name , enum gender gender  , enum breed breed,  bool isfixed , float weight,  enum color collarColor1 , enum color collarColor2, unsigned long long license );
