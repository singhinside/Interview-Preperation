#include <iostream>
#include <cmath>
using namespace std;
int mean(int arr[],int n)
{
	int a1=0,a2=0,avg=0;
	if(n%2==0)
	{
		a1=(n+1)/2;
		a2=(n-1)/2;
		avg = (arr[a1]+arr[a2])/2;
		return floor(avg);
	}
	else
	{
		a1 = n/2;
		avg = arr[a1];
		return avg;
	}
}
int median(int arr[],int n){
	int sum=0;
	for(int i=0;i<n;i++)
		sum = sum + arr[i];
	return sum/n;
}
int main()
{
	int t,n;
	cin >> t;
	while(t--)
	{
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin >> arr[i];
	cout << median(arr,n)<< endl;
	cout << mean(arr,n) << endl;
	}
}
