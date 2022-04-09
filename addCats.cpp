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
#include <cassert>

using namespace std ;


bool addCat(Cat* newCat) {
    assert(newCat != nullptr) ;
    newCat->validate() ;
    if(isCatInDatabase(newCat)) {
        throw logic_error(PROGRAM_NAME ": Cat is in the database already!") ;
    }

    assert(validateDatabase()) ;
    newCat->next = HeadPointer ;
    HeadPointer = newCat ;
    size++ ;
    assert(validateDatabase()) ;
    return true ;
}

