#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int first,int last)
{
   int x=rand()%(last-first+1)+first;
   swap(arr[x],arr[last]);

   int pivot=arr[last];
   int i=first-1;
   for(int j=first;j<=last-1;j++)
   {
       if(arr[j]<=pivot)
       {
           i++;
           swap(arr[i],arr[j]);
       }
   }
   swap(arr[i+1],arr[last]);
   return(i+1);  
}

void quick_sort (int arr[],int first,int last)
{
   if(first<last)
   {
       int p=partition(arr,first,last);
       quick_sort(arr,first,p-1);
       quick_sort(arr,p+1,last);
   }   
}

bool findEle(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==key){
                cout<<arr[i]<<" "<<arr[j]<<endl;
                return true;        
    }
    }
    }
    cout<<"No such element found";
    return false;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int j=0;j<n;j++)
           cin>>arr[j];
        int key;
        cin>>key;
        quick_sort(arr,0,n-1);
        findEle(arr,n,key);
    }
    return 0;
}