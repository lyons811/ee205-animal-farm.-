///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file List.cpp
/// @version 1.0
///
/// @author Lyon Singleton <lyonws@hawaii.edu>
/// @date   21_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include "List.h"
#include <iostream>

bool List::empty() const noexcept {
    if(size() == 0 ) {
        return true ;
    }
    return false ;
}

unsigned int List::size() const noexcept {
    return count ;
}

bool List::isIn(Node *aNode) const {
    Node * curr = head ;
    for(int i = 0; i < count ; i++ ) {
        if(aNode == curr ) {
            return true ;
        }
        curr = curr->next ;
    }
    return false ;
}

bool List::isSorted() const noexcept {
    Node * curr = head ;
    for(int i = 0; i < count ; i++ ) {
        if (!Node::compareByAddress(curr, curr->next)){
            return false ;
        }
        curr = curr->next ;

    }
   return true ;
}

Node *List::get_first() const noexcept {
   return head ;

}

void List::deleteAllNodes() noexcept {

    for(int i = 0; i < count ; i++ ) {
        Node * tempNext = head->next ;
        delete head ;
        head = tempNext ;
    }
}


Node *List::get_next(const Node *currentNode) {
    return currentNode->next ;
}
