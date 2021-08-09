#include<bits/stdc++.h>
using namespace std;

int find_pair(int arr[],int n,int key)
{
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]-arr[j]==key||arr[j]-arr[i]==key)
                  count++;
        }
    }
    return count;
}

int main()
{
    int arr[10];
    int T,n,key;
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>n;
        for(int j=0;j<n;j++)
           cin>>arr[j];
        cin>>key;
        cout<<find_pair(arr,n,key);
        cout<<endl;
    }
    return 0;
}