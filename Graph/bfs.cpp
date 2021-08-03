#include<bits/stdc++.h>
using namespace std;


class Graph{
    int V;
    list<int> *l;
    public:
        Graph(int v){
            this->V=v;
            l=new list<int>[v];
        }
        void addEdge(int i,int j,bool undrited=true){
            l[i].push_back(j);
            if(undrited){
                l[j].push_back(i);
            }
        }
        void bfs(int source){
            queue<int> q;
            q.push(source);
            bool *visited=new bool[V]{0};
            while(!q.empty()){
                int k=q.front();
                cout<<k<<" ";
                q.pop();
                visited[k]=true;
                for(int x:l[k]){
                    if(!visited[x]){
                        q.push(x);
                        visited[x]=true;
                }
                }

            }
        }
};

int main(){
    Graph g(7);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,4);
    g.addEdge(4,0);
    g.addEdge(4,5);
    g.addEdge(3,5);
    g.addEdge(5,6);
    g.bfs(1);
    return 0;
}