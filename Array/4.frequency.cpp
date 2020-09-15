#include <iostream>
#include <map>
using namespace std;
int main()
{
	int t;
	cin >> t;
	map<int,int> mp={};
	while(t--)
	{
		int n,max=0,temp=0;
		cin >> n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin >> arr[i];
			mp[arr[i]]++;
		}
		for(auto i=mp.begin(); i!=mp.end() ; i++){
			if((i->second)>max)
				temp = i->first;
		}
		cout << temp << endl;
	}
}



