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
#include <stdio.h>
#include <stdlib.h>
#include "reportCats.h"
#include "catDatabase.h"
#include <string.h>
#include "addCats.h"
#include "deleteCats.h"
#include "config.h"
#include "enumstr.h"
#define numArrElements(cats)  (sizeof(cats) / sizeof(cats[0]))






void printCat(int index) {
    if (index < 0 || index > MAX_CAT -1 ) {
        fprintf( stderr, "%s: Invalid index of %s \n", PROGRAM_NAME, index ) ;
        return;
    }
    printf("cat index = [%u] name=[%s] gender=[%s] breed=[%s] isFixed=[%d] weight=[%f] color1=[%s] color2=[%s]  license=[%d]\n", index , cats[index].name, GenderToString(cats[index].gender), BreedToString(cats[index].breed), cats[index].isfixed, cats[index].weight, ColorToString(cats[index].collarColor1), ColorToString(cats[index].collarColor2), cats[index].license) ;
}


void printAllCats() {
    if (size == 0) {
        printf("No cats in database!\n");
        return ;
    }
    for(int i = 0; i < size; i++) {

        printf("cat index = [%u] name=[%s] gender=[%s] breed=[%s] isFixed=[%d] weight=[%f] color1=[%s] color2=[%s]  license=[%d]\n", i , cats[i].name, GenderToString(cats[i].gender), BreedToString(cats[i].breed), cats[i].isfixed, cats[i].weight, ColorToString(cats[i].collarColor1), ColorToString(cats[i].collarColor2), cats[i].license) ;
    }
}

int findCat( const char* name) {

    for (int i = 0; i < size; ++i) {

        if (strcmp(cats[i].name, name) == 0) {
            printf("cat index = [%u] name=[%s] gender=[%s] breed=[%s] isFixed=[%d] weight=[%f] color1=[%s] color2=[%s]  license=[%d]\n",
                   i, cats[i].name, GenderToString(cats[i].gender), BreedToString(cats[i].breed), cats[i].isfixed,
                   cats[i].weight, ColorToString(cats[i].collarColor1), ColorToString(cats[i].collarColor2),
                   cats[i].license);
            return i;
        }

    }
    fprintf(stderr, "%s: Cat name [%s] is not in the database.\n", PROGRAM_NAME, name);
    return 0;
}
