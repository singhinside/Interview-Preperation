#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int arr[n];
		int max=-1 , secondmax=-1;
		for(int i=0;i<n;i++)
			cin >> arr[i];
		for(int i=0;i<n;i++)
		{
			if(arr[i]>max)
			{
				secondmax = max;
				max = arr[i];
			}
			else if(arr[i] < max && arr[i] > secondmax)
			{
				secondmax = arr[i];
			}
		}
		if(secondmax == -1)
			cout << "Maximum : " << max << " There is no second maximum" << endl;
		else
			cout << "Maximum : " << max << " SecondMaximum : " << secondmax;
	}
}
