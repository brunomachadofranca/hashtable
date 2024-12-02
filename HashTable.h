#include "LinkedList.h"
namespace DataSctruct{

class HashTable{

    private:
    unsigned int Hash_Table_Size;
    LinkedList *ht;
    int getKey(void *value);


    public:
    HashTable(int Hash_Table_Size);
    ~HashTable();
    int addElementHashTable(void *value);
    int showHashTableSize();
    void showHashTable();

};

}