#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        string key;
        int value;
        Node(string key,int value){
            this->key=key;
            this->value=value;
        }
};
class LRUCache{
    public:
        int maxSize;
        list<Node> l;
        unordered_map<string,list<Node>::iterator >m;
        LRUCache(int maxSize){
            this->maxSize=maxSize >1 ? maxSize:1;
        }
        void insertKeyValue(string key,int value){

        }
        int getValue(string key){

        }
        string mostRecentKey(){

        }
};