#include<bits/stdc++.h>
using namespace std;

bool value(int arr[],int n)
{
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(arr[i]+arr[j]==arr[k]){
                    cout<<i<<","<<j<<","<<k<<endl;
                    return true;
                }
            }
        }
    }
     cout << "No sequence found";
    return false;
}

int main()
{
    int arr[10];
    int T,n;
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>n;
        for(int j=0;j<n;j++)
           cin>>arr[j];
           value(arr,n);
           cout<<endl;
    }
    return 0;
}
