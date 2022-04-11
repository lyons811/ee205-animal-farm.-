///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file reportCats.cpp
/// @version 1.0
///
/// @author Lyon Singleton <lyonws@hawaii.edu>
/// @date   1_April_2022
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
#include <cassert>
#include "Cat.h"
using namespace std ;
#define numArrElements(cats)  (sizeof(cats) / sizeof(cats[0]))



bool printAllCats() {
    if (size == 0) {
        cout << "No cats in database!" << endl;
        return false;
    }
    int numCats = 0 ;
    assert(validateDatabase()) ;
    for(Cat* SomeCat = HeadPointer ; SomeCat != nullptr ; SomeCat = SomeCat->next){
        SomeCat->print();
        numCats++;

    }
#ifdef DEBUG
    cout << "number of cats = [" << numCats << "]" << endl;
#endif


    assert(validateDatabase());
    return true;
}

Cat* findCat( const char* name) {
    assert(Cat().validateName(name)) ;


    for(Cat* SomeCat = HeadPointer ; SomeCat != nullptr ; SomeCat = SomeCat->next){
        if(strcmp(name, SomeCat->getName()) == 0) {
            return SomeCat ;
        }
    }
        return nullptr ;
}

