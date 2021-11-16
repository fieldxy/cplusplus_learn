#include <iostream>
#include <ios>
#include <string>
#include <vector>
#include <algorithm>


using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector; 

int main()
{
	vector<string> strings;
	string word;
	
	cout << "Please input your word(use '.' end): ";

	// 保存输入的数据
	while(cin >> word && word != ".")
		strings.push_back(word);
	cout << endl;
	
	string max = strings[0];
	string min = strings[0];

	for(int i = 0; i < strings.size(); i++)
		if( strings[i].size() > max.size())
			max = strings[i];
	
	for(int i = 0; i < strings.size(); i++)
		if( strings[i].size() < min.size())
			min = strings[i];
	

	cout << "max sting is " << max  << " size is = " << max.size() << endl;

	cout << "min sting is " << min  << " size is = " << min.size() << endl;

	

	
	return 0;
}
