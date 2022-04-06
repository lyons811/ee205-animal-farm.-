///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file deleteCats.cpp
/// @version 1.0
///
/// @author Lyon Singleton <lyonws@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include <cstdio>
#include <cstring>
#include "deleteCats.h"
#include "catDatabase.h"
#include <iostream>
using namespace std ;


void deleteAllCats() {
    cout << "Deleteing Cats" << endl;
    memset(cats, 0, sizeof(cats));
    size = 0;
    cout << "All Cats Deleted" << endl;

}