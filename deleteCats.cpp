///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_2 - EE 205 - Spr 2022
///
/// @file deleteCats.cpp
/// @version 1.0
///
/// @author Lyon Singleton <lyonws@hawaii.edu>
/// @date   1_April_2022
///////////////////////////////////////////////////////////////////////////////
#include <cstdio>
#include <cstring>
#include "deleteCats.h"
#include "catDatabase.h"
#include <iostream>
#include "Cat.h"
#include <cassert>
#include <stdexcept>


using namespace std ;

bool deleteCat(Cat* CatDeletion) {
    assert(CatDeletion != nullptr) ;
    assert(validateDatabase()) ;

    if (CatDeletion == HeadPointer) {
        HeadPointer = HeadPointer->next ;
        delete CatDeletion ;
        size-- ;
        assert(validateDatabase()) ;
        return true  ;
    }

    Cat* SomeCat = HeadPointer ;
    while(SomeCat != nullptr) {
        if(SomeCat->next == CatDeletion) {
            SomeCat->next = CatDeletion->next ;
            delete CatDeletion ;
            size-- ;
            assert(validateDatabase()) ;
            return true ;
        }
        SomeCat = SomeCat->next ;
    }
    assert(validateDatabase()) ;
    throw invalid_argument(PROGRAM_NAME ": Cannot delete a cat that is not in the database!") ;
}











bool deleteAllCats() {
    while(HeadPointer != nullptr) {
        deleteCat(HeadPointer) ;
    }

#ifdef DEBUG
    cout << PROGRAM_NAME << ": Cats have been deleted from the database!" << endl ;
#endif
    return true ;
}