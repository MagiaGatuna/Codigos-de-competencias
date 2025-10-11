/*

VZLA2019A - A not so good plan
no tags 

On the International Conglomerate of Pest Control (ICPC) they make experiments with exactly five laboratory mice. They are numbered from 1 to 5 and they are extremely intelligent

Last night they developed a escape plan, but surprisingly only one mouse made it out of the building. Can you tell which one escaped?

Input
The first and only line contains exactly four different integers a, b, c, d, being the number of each mouse remaining on the laboratory respectively..

Output
Print the number of the mouse that escaped

Example
Input:
1 2 4 5

Output:
3
Constraints
1 ≤ a, b, c, d ≤ 5
*/
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
