#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   string s;
   cin>>s;
   int freq[256]={0};
   int n=s.size();
   for(int i=0; i<n; i++)
   {
      freq[s[i]]++;
   }
   char c='a';
   //bool ans=false;
   while(c<='z')
   {
      if(freq[c]==0)
      {
        break; 
      }
      c++;
   }
   if(c<='z')
   cout<<c<<endl;
   else
   cout<<"None"<<endl;
   return 0;
}