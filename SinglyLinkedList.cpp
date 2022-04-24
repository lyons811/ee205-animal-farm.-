///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file SinglyLinkedList.cpp
/// @version 1.0
///
/// @author Lyon Singleton <lyonws@hawaii.edu>
/// @date   21_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include "SinglyLinkedList.h"
using namespace  std ;
SinglyLinkedList::SinglyLinkedList() {
}

void SinglyLinkedList::push_front(Node *newNode) {
    if(newNode == nullptr ) {
        throw invalid_argument(PROGRAM_NAME ": Node can not be nullptr!") ;
    }
    if(newNode->next != nullptr) {
        throw domain_error(PROGRAM_NAME ": Next node is already set!") ;
    }

    if(isIn(newNode)) {
        throw logic_error(PROGRAM_NAME ": Node is already in container!") ;
    }


    newNode->next = head ;
    head = newNode ;
    count++ ;
}

Node *SinglyLinkedList::pop_front() noexcept {
    Node * node = head ;
    head = head->next ;
    return node ;

}

void SinglyLinkedList::insert_after(Node *currentNode, Node *newNode) {
    if(isIn(newNode)){
        throw logic_error((PROGRAM_NAME ": Node is not in  container!")) ;
    }

    if(!isIn(currentNode)){
        throw logic_error((PROGRAM_NAME ": Node is not in  container!")) ;
    }
    if(empty()){
        throw logic_error((PROGRAM_NAME ": List is empty!")) ;
    }
    if(currentNode == nullptr) {
        throw invalid_argument((PROGRAM_NAME ": Node can not be Nullptr!")) ;
    }
    if(newNode == nullptr) {
        throw invalid_argument((PROGRAM_NAME ": Node can not be Nullptr!")) ;
    }
    if(newNode->next != nullptr) {
        throw domain_error(PROGRAM_NAME ": Next node is already set!") ;
    }

    if(empty()) {
        push_front(newNode) ;
    }
    for(int i = 0; i < count ; i++ ) {
        newNode->next = currentNode->next ;
        currentNode->next = newNode ;
    }
}

void SinglyLinkedList::dump() const noexcept {

}

bool SinglyLinkedList::validate() const noexcept {
    return false;
}
