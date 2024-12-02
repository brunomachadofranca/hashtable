#include "LinkedList.h"
#include <iostream>
using namespace DataSctruct;
using namespace std;

LinkedList::LinkedList(){
    this->firstNode = nullptr;
    this->size = 0;
}

LinkedList::~LinkedList(){
    delete firstNode;
    this->size = 0;
}

int LinkedList::addElement(void *element){
    if (element != nullptr){
        //Lista vazia
        if(this->firstNode == nullptr){
            this->firstNode = new LinkedListNode(element);
            this->size++;
        }
            //Lista não vazia
            else{
                LinkedListNode *nextNode = new LinkedListNode(element);
                
                //this->firstNode->setNextNode(nextNode);
                nextNode->setNextNode(this->getFirstNode());
                this->firstNode = nextNode;
                this->size++;
            }
    return 1;         
    }
    return 0;
}


int LinkedList::getSize(){
    return this->size;
}

void LinkedList::showValues(){
    LinkedListNode *node = this->firstNode;
    //lista vazia
    if(node == nullptr){
        std::cout << "Vazia!" << endl;
    }
        else{
            while(node != nullptr){
                std::cout << (char *)node->getElementValue() << " ";
                node = node->getNextNode();
            }
            std::cout << endl;    
        }
}

LinkedListNode::LinkedListNode(void *element){
    if(element != nullptr){
        this->element = element;
        this->nextNode = nullptr;
    }
        else{
            this->element = nullptr;
            this->nextNode = nullptr;
        }
}

LinkedListNode::~LinkedListNode(){
   // delete this->element;
}

void LinkedListNode::setNextNode(LinkedListNode *nextNode){
        this->nextNode = nextNode;
}

void *LinkedListNode::getElementValue(){

    return this->element;

}

LinkedListNode *LinkedList::getFirstNode(){
    return this->firstNode;
}

LinkedListNode *LinkedListNode::getNextNode(){
    return this->nextNode;
}