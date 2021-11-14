/*
 * 四分位数概念： https://zh.wikipedia.org/wiki/%E5%9B%9B%E5%88%86%E4%BD%8D%E6%95%B0
 */
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
	vector<double> quartile;
	switch(nums.size()){
		case 0:
			cout << "You must enter nums"
			"Please try again, " << endl;
			return 1;
		case 1:
			cout << "Only one number" << endl;
			return 0;
	}
	
	

	sort(nums.begin(), nums.end());
	
	vector<double>::size_type size;

	size = nums.size();
	
	vector<int>::size_type sq_sz;
	
	for(int i = 1; i < 4; i++) {
		sq_sz =  size * i / 4;
		quartile.push_back((size * i % 4 == 0) ? (nums[sq_sz - 1] + nums [sq_sz]) / 2 : nums[sq_sz]);
	}
	cout << "quartile q1 = " << quartile[0] << ' '
	     << "q2 = " << quartile[1] << ' '
	     << "q3 = " << quartile[2] << endl;
	


	return 0;
}
