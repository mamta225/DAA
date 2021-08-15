#include<bits/stdc++.h>
using namespace std;


int partition(int arr[],int first,int last)
{

   int pivot=arr[last];
   int i=first-1;
   for(int j=first;j<=last-1;j++)
   {
       if(arr[j]<pivot)
       {
           i++;
           swap(arr[i],arr[j]);
           
       }
       
   }
   swap(arr[i+1],arr[last]);
   return(i+1);  
}

int quick_sort (int arr[],int first,int last)
{
   if(first<last)
   {
       int p=partition(arr,first,last);
       quick_sort(arr,first,p-1);
       quick_sort(arr,p+1,last);
   }
       for(int i=0;i<=last;i++){
           if(arr[i]==arr[i+1])
               return 1;
       }
       return 0;
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
           int result=quick_sort(arr,0,n-1);
           if(result==1)
              cout<<"YES"<<endl;
            else
              cout<<"NO"<<endl;

           }
    return 0;
}