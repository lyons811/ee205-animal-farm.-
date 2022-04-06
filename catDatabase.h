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

#include "updateCats.h"
#include "reportCats.h"
#define MAX_CAT 1024
#define MAX_CAT_NAME 50
typedef float Weight;
typedef size_t NumCats;
enum gender{UNKNOWN_GENDER, MALE, FEMALE};
enum breed{UNKNOWN_BREED, MAINE_COON, MANX, SHORTHAIR, PERSIAN, SPHYNX};
enum color{BLACK, WHITE, RED, BLUE, GREEN, PINK};

struct cat {
    const char* name ;
    enum gender gender;
    enum breed breed;
    enum color collarColor1;
    enum color collarColor2;
    unsigned long long license;
    bool isfixed;
    Weight weight;
};

extern struct cat cats[MAX_CAT];
extern NumCats size ;
extern NumCats sizearray ;

