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


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "updateCats.h"
#include "catDatabase.h"
#include "config.h"
#define numArrElements(names)  (sizeof(names) / sizeof(*names))
int updateCatName (int index, const char* newName) {
    for(int i = 0; i <= size - 1; i++) {

        if ( strcmp(cats[i].name, newName) == 0  ) {
            fprintf( stderr, "%s: Cat name [%s] is already in the database.\n", PROGRAM_NAME, newName ) ;
            return 0 ;
        }

        if (strlen(newName) >= MAX_CAT_NAME) {
            fprintf( stderr, "%s: Cat name [%s] is more then 50 letters!\n", PROGRAM_NAME, newName ) ;
            return 0;
        }
    }
    cats[index].name = newName;
    printf("Success, new name!\n");
    return 0 ;

}

bool fixCat(int index) {
    cats[index].isfixed = !cats[index].isfixed ;
    return 0;
}

float updateCatWeight (int index , float newWeight) {
    if (newWeight <= 0) {
        fprintf( stderr, "%s: Weight can not be less then or equal to 0!\n", PROGRAM_NAME ) ;
        return 0;
    }
    cats[index].weight = newWeight;
    return printf("Success, new weight!\n");
}

int updateCatCollar1 (int index, int newColor) {
    for(int i = 0; i <= size - 1; i++) {

        if (cats[i].collarColor1 == cats[i].collarColor2 ) {
            fprintf( stderr, "%s: collar colors can not match!\n", PROGRAM_NAME ) ;
            return 0 ;
        }
    }
    cats[index].collarColor1 = static_cast<color>(newColor);
    printf("Success, new color!\n");
    return 0 ;

}

int updateCatCollar2 (int index, int newColor) {
    for(int i = 0; i <= size - 1; i++) {


        if (cats[i].collarColor1 == cats[i].collarColor2) {
            fprintf( stderr, "%s: collar colors can not match!\n", PROGRAM_NAME ) ;
            return 0 ;
        }
    }
    cats[index].collarColor2 = static_cast<color>(newColor);
    printf("Success, new color!\n");
    return 0;

}

int updateLicense( int index, unsigned long long newLicense) {
    for(int i = 0; i <= size - 1; i++) {

        if (cats[i].license == newLicense ) {
            fprintf( stderr, "%s: License [%s] is aleady being used!\n", PROGRAM_NAME, newLicense ) ;
            return 0 ;
        }
    }
    cats[index].license = newLicense;
    printf("Success, new license!\n");
    return 0;

}

