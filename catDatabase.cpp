///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_2 - EE 205 - Spr 2022
///
/// @file catDatabase.cpp
/// @version 1.0
///
/// @author Lyon Singleton <lyonws@hawaii.edu>
/// @date   1_April_2022
///////////////////////////////////////////////////////////////////////////////

#include <cstdio>
#include "catDatabase.h"
#include <iostream>
#include "config.h"
#include <cassert>
#include "reportCats.h"
using namespace std ;


Cat* HeadPointer = nullptr ;

NumCats size = 0 ;

void StartDatabase() {
    if(HeadPointer != nullptr) {
        throw logic_error(PROGRAM_NAME ": Old database still in memory!") ;
    }
    assert(validateDatabase());
#ifdef DEBUG
    cout << PROGRAM_NAME << ": Database started" << endl;
#endif
}

bool isCatInDatabase(const Cat* SomeCat) {
    assert(SomeCat != nullptr);
    assert(validateDatabase());

    for (Cat *Cats = HeadPointer; Cats != nullptr; Cats = Cats->next) {
        if (Cats == SomeCat) {
            return true;
        }
    }

    assert(validateDatabase());
    return false ;
}


bool validateDatabase() {
    int OKCats = 0;
    for(Cat* SomeCat = HeadPointer ; SomeCat != nullptr ; SomeCat = SomeCat ->next) {
        if(!SomeCat->validate()) {
            return false;
        }
        Cat* CatFound = findCat(SomeCat->getName());
        if(CatFound != SomeCat) {
            cout << PROGRAM_NAME << ": WARNING: Duplicate name " << SomeCat->getName() << " found!" << endl;
        }
        OKCats++ ;
    }


    if(OKCats != size) {
        cout << PROGRAM_NAME << ": ERROR: the size " << size << " doesn't match " << OKCats << endl;
        return false;

    }

#ifdef DEBUG
    cout << PROGRAM_NAME << ": Database passes all checks and is good" << endl;
#endif
    return true;
}