#include <iostream>
#include <ios>
#include <string>
#include <vector>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main()
{
	cout << "Please input your nums: ";
	vector<double> nums;
	double x;
	while(cin >> x)
		nums.push_back(x);
	
	if(!nums.size()){
		cout << "You must enter nums"
			"Please try again, " << endl;
		return 1;
	}
	sort(nums.begin(), nums.end());
	
	vector<double>::size_type size;

	size = nums.size();


	for(vector<double>::const_iterator i = nums.begin(); i != nums.end(); ++i)
		cout << *i << ' ';

	return 0;
}
