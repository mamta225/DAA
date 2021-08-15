#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[],int n)
{
    int temp,i,j;
    int comp=0;
    int shift=0;
    for(i=1;i<n;i++){
        temp=arr[i];
         j=i;
        while(j>0 && arr[j-1]>temp){
            comp=comp+1;
            arr[j]=arr[j-1];
            shift=shift+1;
            j=j-1;
        }
        arr[j]=temp;
        shift=shift+1;
        
    }

    for( i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Comparisons ="<<comp<<endl;;
    cout<<"Shifts="<<shift<<endl;
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
        insertionSort(arr,n);
        cout<<endl;
    }
    return 0;
}