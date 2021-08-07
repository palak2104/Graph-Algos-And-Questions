#include <bits/stdc++.h>

using namespace std;
void dfs(int node,vector<int>arr[],int v,int e,vector<int>&vis,vector<int>&result){
    vis[node]=1;
    result.push_back(node);
    for(auto it:arr[node]){
        if(!vis[it]){
          dfs(it,arr,v,e,vis,result);  
        }
    }
    return;
}
vector<int> solveDFS(vector<int>arr[],int v,int e){
    vector<int>vis(v+1,0);
    vector<int>result;
    for(int i=0;i<=v;i++){
        if(!vis[i]){
            dfs(i,arr,v,e,vis,result);
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
   vector<int>res=solveDFS(arr,v,e);
   for(auto it:res){
       cout<<it<<" ";
   }


    return 0;
}
