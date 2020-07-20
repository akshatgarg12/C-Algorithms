//
//  main.cpp
//  Graph with adjacency list
//
//  Created by akshat garg on 09/05/20.
//  Copyright © 2020 akshat garg. All rights reserved.
//

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

queue<int> pushFunc(vector<int> graph[], int num, queue<int> q){
    vector<int>::iterator it;
    for(it=graph[num].begin();it<graph[num].end();it++){
        q.push(*it);
    }
    return q;
    }
    




void BFS(vector<int> graph[], int n){
    int A[n];
    queue<int> q;
    queue<int> q2;
    for(int i=0;i<n;i++) A[i]=0;
    pushFunc(graph,0, q);
    for(int i=0;i<q.size();i++){
        q2 = pushFunc(graph, q.front(), q2);
        cout<<q.front()<<" ";
        q.pop();
    }
    while(!q.empty()){
        if(A[q.front()]==0){
        cout<<q.front()<<" ";
            A[q.front()]=1;
            q.pop();
    }
    }
        
}




int main(int argc, const char * argv[]) {
    int n;
    cin>>n; //no of vertices.
    int edges; cin>>edges;// no of connections bw vertices (total)
    vector<int> graphs[n];
    int i=0;
    for(i=0;i<edges;i++){
        int u,v;
        cin>>u; cin>>v;
        graphs[u].push_back(v); //graph must be bidirectional!
        graphs[v].push_back(u);
    }
    // if graph is unidirectional use only first statement.
    vector<int>::iterator it;
    for(i=0;i<n;i++){
        cout<<"the vertex "<<i<<endl;
        cout<<"the connections of this vertices are with:"<<endl;
        for(it=graphs[i].begin();it<graphs[i].end();it++){
            cout<<*it<<" ";
        }
        cout<<endl;
    }
    
//    BFS(graphs, n);
    return 0;
}
