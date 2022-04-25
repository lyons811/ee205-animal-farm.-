///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Weight.h
/// @version 1.0
///
/// @author Lyon Singleton <lyonws@hawaii.edu>
/// @date   21_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once


#include <string>
#include <ostream>


using namespace std ;


class Weight {
public:
    enum UnitOfWeight {Pound, KILO, SLUG};
    typedef float t_weight ;
    static const float KILOS_IN_A_POUND ;
    static const float SLUGS_IN_A_POUND ;
    static const float UNKNOWN_WEIGHT ;
    static const string POUND_LABEL ;
    static const string KILO_LABEL ;
    static const string SLUG_LABEL ;
    Weight() noexcept ;
    explicit Weight(t_weight newWeight) ;
    explicit Weight(UnitOfWeight newUnitOfWeight) noexcept ;
    Weight (float newWeight, UnitOfWeight newUnitOfWeight) ;
    Weight (float newWeight, float newMaxWeight) ;
    Weight (UnitOfWeight newUnitOfWeight, float newMaxWeight);
    Weight (float newWeight, UnitOfWeight newUnitOfWeight, float newMaxWeight);
    bool isWeightKnown () const noexcept ;
    bool hasMaxWeight () const noexcept ;
    float 	getWeight () const noexcept ;
    float 	getWeight (UnitOfWeight weightUnits) const noexcept;
    t_weight getMaxWeight () const noexcept ;
    UnitOfWeight getWeightUnit () const noexcept ;
    void setWeight (float newWeight) ;
    void 	setWeight (float newWeight, UnitOfWeight weightUnits) ;
    bool 	isWeightValid (float checkWeight) const noexcept ;
    bool 	validate () const noexcept ;
    void dump () const ;
    bool 	operator== (const Weight &rhs_Weight) const ;
    bool 	operator< (const Weight &rhs_Weight) const ;
    Weight&  operator+= (float rhs_addToWeight) ;


    static float fromKilogramToPound(float kilogram) noexcept ;
    static float fromPoundToKilogram (float pound) noexcept ;
    static float fromSlugToPound (float slug) noexcept ;
    static float fromPoundToSlug (float pound) noexcept ;
    static float convertWeight(float fromWeight, UnitOfWeight fromUnit, UnitOfWeight toUnit) noexcept ;

    void setUnitOfWeight(UnitOfWeight unitOfWeight);




private:
    friend class  Mammal ;
    friend class  Animal ;
    void setMaxWeight(float newMaxWeight);
    bool blsKnown = false ;
    bool bHasMax = false ;
    enum UnitOfWeight unitOfWeight = Pound ;
    t_weight weight {};
    t_weight maxWeight {};



};

