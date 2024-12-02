#include "HashTable.h"
#include <iostream>
using namespace DataSctruct;
using namespace std;

HashTable::HashTable(int Hash_Table_Size){
    if (Hash_Table_Size > 0){
        this->Hash_Table_Size = Hash_Table_Size;
        this->ht = new LinkedList[Hash_Table_Size];
    }    
        else
            this->Hash_Table_Size = 0;
}

HashTable::~HashTable(){
    this->Hash_Table_Size = 0;
    delete this->ht;
}

int HashTable::addElementHashTable(void *value){
    //Usa o valor para calcular o valor da chave
    int key = this->getKey(value);
    this->ht[key].addElement(value);

    return 1;
}

int HashTable::getKey(void *value){

    char * s = (char *) value;
    int size = strlen(s);
    int key = 0;
    
    for(int i =0; i< size; i++)
        key += s[i];
    
    key = key % this->Hash_Table_Size;

    return key;
}

int HashTable::showHashTableSize(){
    return this->Hash_Table_Size;
}

void HashTable::showHashTable(){
    
    for(int i=0; i<this->Hash_Table_Size; i++){
        std::cout << "Hash posição " << i << ": ";
        this->ht[i].showValues();
    }

}

