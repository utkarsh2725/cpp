#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int lo=0;
    int mid=0;
    int en=n-1;
    while(mid<=en)
    {
        switch(a[mid])
        {
            case 0:
            swap(a[mid++],a[lo++]);
            
            break;

            case 1:
            mid++;
            break;

            case 2:
            swap(a[mid++],a[en--]); 
            
            break;
        }
    
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
   
    
    return 0;
}