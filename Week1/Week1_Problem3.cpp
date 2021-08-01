#include<bits/stdc++.h>
using namespace std;

int jump_search(int arr[],int n,int key)
{
   int count=0;
   int step=sqrt(n);
   int prev=0;
   while(arr[min(step,n)-1]<key)
   {
       count++;
       prev=step;
       step+=sqrt(n);
       if(prev>=n)
         return -1;
   }

   while(arr[prev]<key)
   {
       count++;
       prev++;
       if(prev==min(step,n)){
          return -1;
       }
   }

   if(arr[prev]==key){
       count++;
       cout<<"Present ";
       return count;
   }

   cout<<"Not Present ";
   return count;
}

int main()
{
    int arr[100];
    int T,n,key;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>n;
        for(int j=0;j<n;j++)
            cin>>arr[j];
        cin>>key;
        cout<<jump_search(arr,n,key);
    }
    return 0;
}