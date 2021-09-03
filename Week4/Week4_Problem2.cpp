#include<bits/stdc++.h>
using namespace std;

int comp=0;
int swaps=0;

int partition(int arr[],int first,int last)
{
   int x=rand()%(last-first+1)+first;
   swap(arr[x],arr[last]);

   int pivot=arr[last];
   int i=first-1;
   for(int j=first;j<=last-1;j++)
   {
       if(arr[j]<pivot)
       {
           comp++;
           i++;
           swap(arr[i],arr[j]);
           swaps++;
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


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++)
           cin>>arr[j];
        quick_sort(arr,0,n-1);
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
        cout<<"Comparisons = "<<comp<<endl;
        comp=0;
        cout<<"Swaps = "<<swaps<<endl;
        swaps=0;
    }
    return 0;
}