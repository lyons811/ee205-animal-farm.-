///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Node.h
/// @version 1.0
///
/// @author Lyon Singleton <lyonws@hawaii.edu>
/// @date   21_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once
#include <iostream>
#include "List.h"
#include "SinglyLinkedList.h"
#include "config.h"
using namespace  std ;

class Node {
    friend class List;
    friend class SinglyLinkedList;

public:
    virtual void dump () const {
        FORMAT_LINE_FOR_DUMP( "Node", "this " ) << this << endl ;
        FORMAT_LINE_FOR_DUMP( "Node", "next " ) << next << endl ;
    }
    virtual  bool validate() const noexcept {
        if (next == nullptr) {
            return true ;
        }

        if (next == next->next) {
            cout << PROGRAM_NAME << ": Pointer refers to it self!" << endl;
            return false ;
        }
        return true ;
    }


    virtual bool operator> (const Node &rightSide) {
        return compareByAddress(this, &(Node&)rightSide);
    }

protected:
    static bool compareByAddress(const Node *node1, const Node *node2) {
        if(node1 > node2) {
            return true ;
        }
        return false ;
    }
    Node * next = nullptr ;

};



