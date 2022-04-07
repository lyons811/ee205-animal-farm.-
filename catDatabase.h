///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file catDatabase.h
/// @version 1.0
///
/// @author Lyon Singleton <lyonws@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once
#include <iostream>
using namespace std ;




#include <cstdio>


#include "reportCats.h"
#define MAX_CAT 1024
#define MAX_CAT_NAME 50
typedef float Weight;
typedef size_t NumCats;
const Weight UNKNOWN_WEIGHT = -1;

enum Gender{UNKNOWN_GENDER, MALE, FEMALE};
enum Breed{UNKNOWN_BREED, MAINE_COON, MANX, SHORTHAIR, PERSIAN, SPHYNX};
enum Color{BLACK, WHITE, RED, BLUE, GREEN, PINK};



extern NumCats size ;
extern NumCats sizearray ;

