#include<bits/stdc++.h>
using namespace std;

int comp=0;

void merge(int arr[],int l,int mid,int r)
{
    int n1=mid-l+1;
    int n2=r-mid;
    int L[n1],R[n2];
    for(int i=0;i<n1;i++)
        L[i]=arr[l+i];
    for(int j=0;j<n2;j++)
        R[j]=arr[mid+1+j];

    int i=0,j=0,k=l;
    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j]){
           arr[k++]=L[i++];
        }
        else
           arr[k++]=R[j++];
         comp++;
    }
    while(i<n1)
       arr[k++]=L[i++];
    while(j<n2)
       arr[k++]=R[j++];
}

void merge_sort(int arr[],int l,int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        merge_sort(arr,l,mid);
        merge_sort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
}

int getInvCount(int arr[], int n)
{
    int inv_count = 0;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] > arr[j])
                inv_count++;
 
    return inv_count;
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
        int ans=getInvCount(arr, n);
        merge_sort(arr,0,n-1);
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
        cout<<"Comparisons = "<<comp<<endl;
        comp=0;
        cout <<"Inversions ="<< ans;
    }
    return 0;
}