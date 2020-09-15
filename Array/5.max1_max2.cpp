#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--){
		int n,max=0,secondmax=-1;
		cin >> n;
		int arr[n];
		for(int i=0;i<n;i++)
			cin >> arr[i];
		sort(arr,arr+n);
		for(int i=n-1;i>=0;i--)
		{
			max = arr[i];
			if(arr[i-1]==arr[i] && i>0)
				continue;
			else{
				secondmax = arr[i-1];
				break;
			}
	}
		cout <<"Max: "<< max <<" "<< "SecondMax: "<<secondmax<<endl; 
	}
}

	
