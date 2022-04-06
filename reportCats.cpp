///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file reportCats.cpp
/// @version 1.0
///
/// @author Lyon Singleton <lyonws@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include <cstdio>
#include <cstdlib>
#include "reportCats.h"
#include "catDatabase.h"
#include <cstring>
#include "addCats.h"
#include "deleteCats.h"
#include "config.h"
#include "enumstr.h"
#include <iostream>
using namespace std ;
#define numArrElements(cats)  (sizeof(cats) / sizeof(cats[0]))






void printCat(int index) {
    if (index < 0 || index > MAX_CAT -1 ) {
        cout << stderr <<  PROGRAM_NAME << "Invalid index of " << index << endl ;
        return;
    }
    cout << "cat index = " << index <<  " name = " << cats[index].name <<  " gender = " << GenderToString(cats[index].gender) << " breed = " <<  BreedToString(cats[index].breed) <<  " isFixed = " << cats[index].isfixed <<  " weight = " << cats[index].weight <<  " color1 = " << ColorToString(cats[index].collarColor1) <<  " color2 = " <<  ColorToString(cats[index].collarColor2) << " license = " <<  cats[index].license << endl ;
}


void printAllCats() {
    if (size == 0) {
        cout << "No cats in database!" << endl;
        return ;
    }
    for(int i = 0; i < size; i++) {

        cout << "cat index = " << i <<  " name = " << cats[i].name <<  " gender = " << GenderToString(cats[i].gender) << " breed = " <<  BreedToString(cats[i].breed) <<  " isFixed = " << cats[i].isfixed <<  " weight = " << cats[i].weight <<  " color1= " << ColorToString(cats[i].collarColor1) <<  " color2 = " <<  ColorToString(cats[i].collarColor2) << " license = " <<  cats[i].license << endl ;
    }
}

int findCat( const char* name) {

    for (int i = 0; i < size; ++i) {

        if (strcmp(cats[i].name, name) == 0) {
            cout << "cat index = " << i <<  " name = " << cats[i].name <<  " gender = " << GenderToString(cats[i].gender) << " breed = " <<  BreedToString(cats[i].breed) <<  " isFixed = " << cats[i].isfixed <<  " weight = " << cats[i].weight <<  " color1= " << ColorToString(cats[i].collarColor1) <<  " color2 = " <<  ColorToString(cats[i].collarColor2) << " license = " <<  cats[i].license << endl ;
            return i;
        }

    }
    cout << stderr << PROGRAM_NAME << ": " <<  "Cat name" <<  name << "is not in the database." << endl ;
    return 0;
}
