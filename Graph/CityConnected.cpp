#include<bits/stdc++.h>
#include<list>
#include<unordered_map>
using namespace std;

class Node{
    public:
    string name;
    list<string> nbr;
    Node(string name){
        this->name=name;
    }
};
class Graph{
    unordered_map<string,Node*> m;
    public:
    Graph(vector<string> cities){
        for(string c:cities){
            m[c]=new Node(c);
        }
    }
    void addEdge(string x,string y,bool undrited=false){
        m[x]->nbr.push_back(y);
        if(undrited){
            m[y]->nbr.push_back(x);
        }
    }
    void printGraph(){
        for(auto ciytpair:m){
            auto city=ciytpair.first;
            cout<<city<<"-->";
            Node *node=ciytpair.second;
            for(auto x:node->nbr){
                cout<<x<<",";
            }
            cout<<endl;
        }
    }
};

int main(){
    vector<string> city={"delhi","london","newyork","paris"};
    Graph g(city);
    g.addEdge("delhi","london");
    g.addEdge("delhi","paris");    
    g.addEdge("paris","newyork");    
    g.addEdge("newyork","london");    

    g.printGraph();

    return 0;
}