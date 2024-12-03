/*

On Terminal:
g++ -w LinkedList.cpp HashTable.cpp main.cpp -o hash.out
./hash.out

*/

#include <iostream>
#include "HashTable.h"
#define TAMANHO_HASH_TABLE 500
using namespace std;
using namespace DataSctruct;

int main(){

    /*
    
    string *a = new string();
    string *b = new string();
    string *c = new string();
    string *d = new string();
    string *e = new string();
    string *f = new string();
    string *g = new string();
    string *h = new string();
    string *i = new string();
    string *j = new string();
    string *k = new string();
    *a = "primeiro";
    *b = "primeiro";
    *c = "primeiro";
    *d = "terceiro";
    *e = "terceiro";
    *f = "terceiro";
    *g = "setimo";
    *h = "oitavo";
    *i = "primeiro";
    *j = "décimo";
    *k = "Bruno";
    
    HashTable *hash = new HashTable(TAMANHO_HASH_TABLE);
    std::cout << "Hash Table com tamanho " <<  hash->showHashTableSize() << endl;
    
    hash->addElementHashTable(a);
    hash->addElementHashTable(b);
    hash->addElementHashTable(c);
    hash->addElementHashTable(d);
    hash->addElementHashTable(e);
    hash->addElementHashTable(f);
    hash->addElementHashTable(a);
    hash->addElementHashTable(a);
    hash->addElementHashTable(a);
    hash->addElementHashTable(b);
    hash->addElementHashTable(c);
    hash->addElementHashTable(d);
    hash->addElementHashTable(e);
    hash->addElementHashTable(f);
    hash->addElementHashTable(g);
    hash->addElementHashTable(h);
    hash->addElementHashTable(i);
    hash->addElementHashTable(j);
    hash->addElementHashTable(j);
    hash->addElementHashTable(j);
    hash->addElementHashTable(j);
    hash->addElementHashTable(j);
    hash->addElementHashTable(k);
    hash->addElementHashTable(k);
    hash->addElementHashTable(k);
    hash->addElementHashTable(k);
    hash->addElementHashTable(k);
    hash->addElementHashTable(k);
    hash->addElementHashTable(k);
    hash->addElementHashTable(k);
    hash->addElementHashTable(k);
    hash->addElementHashTable(k);
    hash->addElementHashTable(k);

    hash->showHashTable();
    */

   char *ex[10] = {"Primeiro", "Segundo", "Terceiro", "Quarto", "Quinto", 
                "Sexto", "Setimo", "Oitavo", "Nono", "Decimo"
    };

    HashTable *hash = new HashTable(TAMANHO_HASH_TABLE);
    std::cout << "Hash Table com tamanho " <<  hash->showHashTableSize() << endl;
        
        for(int j=0;j<TAMANHO_HASH_TABLE;j++)
            hash->addElementHashTable(ex[j%10]);

    hash->showHashTable();
    std::cout << "FIM" << endl;
return 1;
}
