///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file SinglyLinkedList.h
/// @version 1.0
///
/// @author Lyon Singleton <lyonws@hawaii.edu>
/// @date   21_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once
#include "List.h"
#include "Node.h"
#include <iostream>

class SinglyLinkedList : public List {
public:
    SinglyLinkedList() ;
    void push_front(Node * newNode) ;
    Node * pop_front() noexcept override ;
    void insert_after(Node *currentNode, Node *newNode) ;
    void dump() const noexcept override ;
    bool validate() const noexcept override ;


};



