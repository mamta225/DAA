#include<bits/stdc++.h>
using namespace std;

int findkey(int arr[],int n,int key,bool searchFirst)
{
	int first=0;
	int last=n-1;
	int occ=-1;
	while(first<=last)
	{
		int mid=(first+last)/2;
		if(arr[mid]==key)
		  {
		  	occ=mid;
		  	if(searchFirst)
		  	   last=mid-1;
		  	else
		  	   first=mid+1;
		  }
		else if(arr[mid]>key)
		   last=mid-1;
		else
		   first=mid+1;
	}
	return occ;    	
}

int main()
{
	int arr[20];
	int T,n,key,i,j;
	cin>>T;
	for(i=0;i<T;i++){
		cin>>n;
		for(j=0;j<n;j++)
		   cin>>arr[j];
		cin>>key;
		int firstocc=findkey(arr,n,key,true);
		if(firstocc==-1)
		{
		   cout<<"Key not present"<<endl;
	    }
		else
		{
		   int lastocc=findkey(arr,n,key,false);
		   cout<<key<<"-"<<lastocc-firstocc+1;
	    }
	}
}
