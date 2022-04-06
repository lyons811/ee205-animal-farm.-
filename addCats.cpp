///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file addCats.cpp
/// @version 1.0
///
/// @author Lyon Singleton <lyonws@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include "addCats.h"
#include <cstdio>
#include "catDatabase.h"
#include <cstring>
#include "config.h"
#include "updateCats.h"
#include <iostream>
using namespace std ;


int addCat( const char* name , enum gender gender  , enum breed breed,  bool isfixed , Weight weight,  enum color collarColor1 , enum color collarColor2, unsigned long long license  ) {


    if (strlen(name) == 0) {
        cout << stderr << "%s: Cat must have a name!\n"<< PROGRAM_NAME << endl ;
        return 0;
    }

    if (sizearray == MAX_CAT - 1) {
        cout << stderr << "%s: Database is full!\n" << PROGRAM_NAME << endl ;
        return 0;
    }
    if (strlen(name) >= MAX_CAT_NAME - 1) {
        cout << stderr << "%s: Cat name [%s] is more then 50 letters!\n" << PROGRAM_NAME << name << endl;
        return 0;
    }
    if (weight <= 0) {
        cout << stderr << "%s: Weight can not be less then or equal to 0!\n"<< PROGRAM_NAME << endl;
        return 0;
    }





    cats[size].name = name;
    cats[size].gender = gender;
    cats[size].breed = breed;
    cats[size].isfixed = isfixed;
    cats[size].weight = weight;
    cats[size].collarColor1 = collarColor1;
    cats[size].collarColor2 = collarColor2;
    cats[size].license = license;




    size++;


    return size - 1;

} ;

