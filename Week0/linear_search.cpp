#include<iostream>
using namespace std;

int linearSearch(int arr[],int n,int key)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        count++;
        if(arr[i]==key){
           cout<<"Present ";
           return count;
        }
    }
    cout<<"Not present ";
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
        cout<<linearSearch(arr,n,key);
    }
    return 0;

}