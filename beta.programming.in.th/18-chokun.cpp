#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n,k,m;
	cin >> n >> k;
	vector<int> arr;
	for (int i=2;i<=n;i++){
		arr.push_back(i);
	}
	int count,str;
	while(count <= k){
		str = arr[0];
		for (int i=0;i<arr.size();i++){
			if(arr[i]%str==0){
				count++;
				if (count == k+1) m = arr[i];
				arr.erase(arr.begin()+i);
			}
		}
	}
	cout << m;
	return 0;
}
