#include<bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   ll n,m;
   cin>>n>>m;
  
   int count=0;
   while(n<=m)
   {
      count++;
      n*=2;
   }
   cout<<count;
   
   return 0;
}