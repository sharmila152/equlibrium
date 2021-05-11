#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int prefix[n];
    prefix[0]=arr[0];
    for(i=1;i<n;i++)
    {
        prefix[i]=prefix[i-1]+arr[i];
    }
    int l_sum=0,r_sum=0,flag=0;
    int eq_index;
    for(i=1;i<n;i++)
    {
        l_sum=prefix[i-1];
        r_sum=prefix{n-1]-prefix[i];
        if(l_sum==r_sum)
        {
            eq_index=i;
            flag=1;
            break;
       }      
     }
     if(flag)
     {
         cout<<eq_index;
     }
     else
     {
         cout<<-1;

     }
     
    }
    return 0;
}
