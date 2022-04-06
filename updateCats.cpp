///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file updateCats.cpp
/// @version 1.0
///
/// @author Lyon Singleton <lyonws@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////


#include <cstdio>
#include <cstring>
#include "updateCats.h"
#include "catDatabase.h"
#include "config.h"
#include <iostream>
using namespace std ;
#define numArrElements(names)  (sizeof(names) / sizeof(*names))
int updateCatName (int index, const char* newName) {
    for(int i = 0; i <= size - 1; i++) {

        if ( strcmp(cats[i].name, newName) == 0  ) {
            cout << PROGRAM_NAME << ": " << " Cat name " <<  newName <<  " is already in the database." << endl ;
            return 0 ;
        }

        if (strlen(newName) >= MAX_CAT_NAME) {
            cout << PROGRAM_NAME << ": " << " Cat name " <<  newName <<  " is more then 50 letters!." << endl ;
            return 0;
        }
    }
    cats[index].name = newName;
    cout << "Success, new name!" << endl;
    return 0 ;

}

bool fixCat(int index) {
    cats[index].isfixed = !cats[index].isfixed ;
    return 0;
}

Weight updateCatWeight (int index , Weight newWeight) {
    if (newWeight <= 0) {
        cout << PROGRAM_NAME << ": " << " Weight can not be less then or equal to 0!" << endl ;
        return 0;
    }
    cats[index].weight = newWeight;
    cout << "Success, new weight!" << endl;
     return 0;
}

int updateCatCollar1 (int index, int newColor) {
    for(int i = 0; i <= size - 1; i++) {

        if (cats[i].collarColor1 == cats[i].collarColor2 ) {
            cout << PROGRAM_NAME << ": " << "Collar colors can not match!" << endl;
            return 0 ;
        }
    }
    cats[index].collarColor1 = static_cast<color>(newColor);
    cout << "Success, new color!" << endl ;
    return 0 ;

}

int updateCatCollar2 (int index, int newColor) {
    for(int i = 0; i <= size - 1; i++) {


        if (cats[i].collarColor1 == cats[i].collarColor2) {
            cout << PROGRAM_NAME << ": " << "Collar colors can not match!" << endl;
            return 0 ;
        }
    }
    cats[index].collarColor2 = static_cast<color>(newColor);
    cout << "Success, new color!" << endl;
    return 0;

}

int updateLicense( int index, unsigned long long newLicense) {
    for(int i = 0; i <= size - 1; i++) {

        if (cats[i].license == newLicense ) {
            cout << PROGRAM_NAME << ": " <<  "License" <<  newLicense <<  "is already being used!" << endl;
            return 0 ;
        }
    }
    cats[index].license = newLicense;
    cout << "Success, new license!" << endl;
    return 0;

}

