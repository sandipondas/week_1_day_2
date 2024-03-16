#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int a,b,c;
   cin>>a>>b>>c;
   int i=1;
   int ans;
   while(1)
   {
      ans=c*i;
      if(ans>b) 
      {
        ans=-1;
        break;
      }
      if(ans>=a && ans<=b)
      {
        break;
      }
      i++;
   }
   cout<<ans;
   return 0;
}