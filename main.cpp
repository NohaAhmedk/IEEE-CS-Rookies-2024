#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int b[x];
    for(int i=0;i<x;i++)
    {
        cin>>b[i];
    }
    int z=0;
    int counter=0;
      for(int i=0;i<n;i++)
      {
        if(a[i]==b[z])
        {
            counter++;
            z++;
        }
      }
      if(counter==x)
      {
           cout << "YES" << endl;
      }
      else{
        cout << "NO" << endl;
      }


    return 0;
}
