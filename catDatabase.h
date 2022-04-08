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
#include <cstddef>
#include "Cat.h"
using namespace std;

#define MAX_CAT 1024
#define MAX_CAT_NAME 50
typedef float Weight;
typedef size_t NumCats;

class Cat;

extern Cat* HeadPointer;
extern void StartDatabase() ;
extern bool isCatInDatabase(const Cat* SomeCat) ;
extern bool validateDatabase();








extern NumCats size ;
extern NumCats sizearray ;

