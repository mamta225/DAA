#include<bits/stdc++.h>
using namespace std;

 void selectionSort(int arr[],int n)
{
    int min_index,temp,i,j;
    int comp=0;
    int swaps=0;
    for(i=0;i<n-1;i++){
        min_index=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
            comp=comp+1;

        }
        swap(arr[min_index],arr[i]);
        swaps=swaps+1;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Comparisons = "<<comp<<endl;
    cout<<"Swaps = "<<swaps<<endl;
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
        selectionSort(arr,n);
        cout<<endl;
    }
    return 0;
}