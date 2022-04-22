///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_2 - EE 205 - Spr 2022
///
/// @file config.h
/// @version 1.0
///
/// @author Lyon Singleton <lyonws@hawaii.edu>
/// @date   1_April_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once
#include <ostream>
#include <iostream>
#include <iomanip>

using namespace  std ;
#define PROGRAM_NAME "Animal Farm 1"

#define FORMAT_LINE_FOR_DUMP( className, member )     \
         cout << setfill( ' ' )                        \
              << left                                   \
              <<  boolalpha                              \
              <<  setw( 8) << (className)                 \
              <<  setw(20) << (member)                     \
              <<  setw(52)                                  \
