#include<bits/stdc++.h>
using namespace std;
template<typename T>

class Graph{
    public:

    /*         Unweighted Graph      */

    map<T, list<T>> adjlist;
    void addEdge(T u, T v, bool direction)
    {
        adjlist[u].push_back(v);

        if(direction == 0)
        {
            adjlist[v].push_back(u);
        }
    }

    void printGraph()
    {
        for(auto i : adjlist)
        {
            cout<<i.first<<" -> ";
            for(auto j : i.second)
            {
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }

    /*                                          Weighted Graph                                           */

    // map<T,list<pair<T,T>>> adjlist;

    // void addEdge(T u, T v, T weight, bool direction)
    // {
    //     adjlist[u].push_back({v,weight});

    //     if(direction == 0)
    //     {
    //         adjlist[v].push_back({u,weight});
    //     }
    // }

    // void printGraph()
    // {
    //     for(auto i : adjlist)
    //     {
    //         cout<<i.first<<" -> ";
    //         for(auto j : i.second)
    //         {
    //             cout<<"["<<j.first<<", "<<j.second<<"]"<<" ";
    //         }
    //         cout<<endl;
    //     }
    // }

};

int main()
{
    Graph<int> g;

    g.addEdge(0,1,0);
    g.addEdge(1,2,1);
    g.printGraph();
    
    return 0;
}