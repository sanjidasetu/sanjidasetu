#include<iostream>
#include<vector>
using namespace std;

int n,edge,i,u,v;

void print(vector<int> g[])
{
    cout<<"Adjacency list:"<<endl;
    for(i=0;i<n;i++)
    {
        for(int j=0;j<g[i].size();j++)
           {
               cout<<"->"<<g[i][j];
           }
           cout<<endl;
    }
}

int main()
{
    cout<<"Enter number of nodes:"<<endl;
    cin>>n;
    cout<<"Enter number of edges:"<<endl;
    cin>>edge;
    vector<int>g[n];

    for(i=0;i<edge;i++)
    {
        cout<<"list:"<<endl;
        cin>>u;
        cin>>v;
        g[u].push_back(v);
        g[v].push_back(u);

    }
    print(g);
    return 0;
}
