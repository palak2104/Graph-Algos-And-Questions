#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,e;
   cin>>n>>e;
   vector<int>arr[n+1];
   for(int i=0;i<e;i++){
       int x,y;
       cin>>x>>y;
       arr[x].push_back(y);
       arr[y].push_back(x);
   }
   for(int i=1;i<=n;i++){
       cout<<i<<"--> ";
       for(auto it:arr[i])
       cout<<it<<" ";
       cout<<endl;
       
   }

    return 0;
}
