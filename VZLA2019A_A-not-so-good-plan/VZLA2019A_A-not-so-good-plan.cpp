#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main() {
	
	vector<int> nums;
	for(int i=0;i<4;i++){
		int n;
		cin>>n;
		nums.push_back(n);
	}
	cout<<15-accumulate(nums.begin(), nums.end(), 0);
	return 0;
}
