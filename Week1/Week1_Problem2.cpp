#include<iostream>
using namespace std;

int binary_search(int arr[],int n,int key)
{
    int first=0;
    int last=n-1;
    int count=0;
    while(first<=last)
    {
        count++;
        int mid=first+(last-first)/2;
        if(arr[mid]==key){
            cout<<"Present ";
            return count;
        }
        else if(arr[mid]>key){
            last=mid-1;
        }
        else
           first=mid+1;
    }
    cout<<"Not present ";
    return count;
}

int main()
{
    int T,n,key;
    int arr[10];
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>n;
        for(int j=0;j<n;j++)
            cin>>arr[j];
        cin>>key;
        cout<<binary_search(arr,n,key);
    }
    return 0;
}