#include<bits/stdc++.h>
#include<list>
using namespace std;

class Graph{
    int V;
    list<int> *l;
    public:
        Graph(int v){
            V=v;
            l=new list<int>[v];
        }
        void addEdge(int i,int j,bool undrited=true){
            l[i].push_back(j);
            if(undrited){
                l[j].push_back(i);
            }
        }
        void printGraph(){
            for(int i=0;i<V;i++){
                cout<<i<<"-->";
                for(auto x:l[i])
                    cout<<x<<",";
                cout<<endl;
            }
        }
};

int main(){

    Graph g(6);
    g.addEdge(0,1);
    g.addEdge(0,4);
    g.addEdge(3,2);
    g.addEdge(1,2);
    g.addEdge(3,5);
    g.addEdge(3,4);
    g.addEdge(5,4);

    g.printGraph();

    return 0;
}