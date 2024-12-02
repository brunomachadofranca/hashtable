namespace DataSctruct{

    class LinkedListNode{

        private:
        void *element;
        LinkedListNode *nextNode;

        public: 
        LinkedListNode(void *element);
        ~LinkedListNode(); 
        void setNextNode(LinkedListNode *nextNode);
        void *getElementValue();
        LinkedListNode *getNextNode();

    };

    class LinkedList{

        private:
        LinkedListNode *firstNode;
        int size;

        public:
        LinkedList();
        ~LinkedList();
        int addElement(void *node);
        int getSize();
        void showValues();
        LinkedListNode *getFirstNode();

        //

    };

}