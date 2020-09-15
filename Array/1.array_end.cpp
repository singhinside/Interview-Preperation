#include <iostream> 
using namespace std;
void arrayend(int arr[],int n,int e)
{
	arr[n-1]=e;
}
int main()
{
	int t;
	cin >> t;
	while(t--){
	int n,element;
	cin >> n;
	int arr[n];
	for(int i=0;i<n-1;i++)
		cin >> arr[i];
	cin >> element;
	arrayend(arr,n,element);
	for(int i=0;i<n;i++)
		cout << arr[i] << " ";
	cout << endl;
	}
}

