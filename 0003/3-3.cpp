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
using std::sort;

int main()
{
	// 将输入数据进行存储
	vector<string> str;
	vector<int> str_num;
	string x;
	bool same_flag;
	cout << "please input your string(use . end): ";
	while(cin >> x && x != "."){
		same_flag = false;
		for(int i = 0; i < str.size(); i++){
			if(x == str[i]){
				str_num[i] ++;
				same_flag = true;
				break;
			}
		}
		
		if(!same_flag){
			str.push_back(x);
			str_num.push_back(1);
		}



	}
	

	// 打印统计最大的字符
	for(int i = 0; i != str.size(); i++)
		cout << str[i]  << ':' << str_num[i] << endl;
		
	


	return 0;
}
