#include <iostream>
using namespace std;
void arrayatindex(int arr[],int n,int index,int e)
{
	int i;
for(i=n-1;i>index;i++)
	arr[i] = arr[i-1];
arr[i] = e;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int arr[n];
		for(int i=0;i<n-1;i++)
		cin >> arr[i];
		int index,element;
		cin >> index;
		cin >> element;
		arrayatindex(arr,n,index,element);
		for(int i=0;i<n;i++)
			cout << arr[i] << " ";
		cout << endl;
	}
}


		
