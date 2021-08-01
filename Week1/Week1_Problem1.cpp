#include<iostream>
using namespace std;

int linear_search(int arr[],int n,int key)
{
    int comparisons=0;
    for(int i=0;i<n;i++)
    {
        comparisons++;
        if(arr[i]==key){
            cout<<"Present ";
            return comparisons;
        }
    }
    cout<<"Not present ";
    return comparisons;
}

int main()
{
    int arr[10];
    int T,n,key;
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>n;
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        cin>>key;
        cout<<linear_search(arr,n,key)<<endl;
    }
    return 0;

}