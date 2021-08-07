#include <bits/stdc++.h>

using namespace std;
void bfs(int x,vector<int>arr[],int v,int e,vector<int>&vis,vector<int>&result){
    queue<int>q;
    q.push(x);
    vis[x]=1;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        result.push_back(node);
        for(auto it:arr[node]){
            if(!vis[it]){
                vis[it]=1;
                q.push(it);
            }
        }
    }
}

vector<int> solveBFS(vector<int>arr[],int v,int e){
    vector<int>vis(v+1,0);
    vector<int>result;
    for(int i=0;i<=v;i++){
        if(!vis[i]){
            bfs(i,arr,v,e,vis,result);
        }
    }
    return result;
}
int main()
{
   int v,e;
   cin>>v>>e;
   vector<int>arr[v+1];
   for(int i=0;i<e;i++){
       int x,y;
       cin>>x>>y;
       arr[x].push_back(y);
       arr[y].push_back(x);
   }
   vector<int>res=solveBFS(arr,v,e);
   for(auto it:res){
       cout<<it<<" ";
   }

    return 0;
}
