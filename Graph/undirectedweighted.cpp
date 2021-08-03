#include<bits/stdc++.h>
using namespace std;


class Graph{
    int v;
    list<pair<int,int>> *l;
    public:
    Graph(int v){
        this->v=v;
        l=new list<pair<int,int>>[v];
    }
    void addEdge(int x,int y,int weight,bool undrited=true){
        l[x].push_back({y,weight});
        if(undrited){
            l[y].push_back({x,weight});
        }
    }
    void printGraph(){
        for(int i=0;i<v;i++){
            cout<<i<<"-->";
            for(auto p:l[i]){
                cout<<p.first<<"("<<p.second<<")"<<",";
            }
            cout<<endl;
        }
    }
};


int main(){
    Graph g(5);
	g.addEdge(0,1,1);
	g.addEdge(1,2,2);
	g.addEdge(0,2,4);
	g.addEdge(0,3,7);
	g.addEdge(3,2,2);
	g.addEdge(3,4,3);
    g.printGraph();
    return 0;
}