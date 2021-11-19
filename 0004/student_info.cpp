#include "student_info.h"
#include <istream>
#include <vector>

using std::istream;
using std::vector;

bool compare(const student_info& x, const student_info& y)
{
	return x.name < y.name;
}

istream& read(istream& is, student_info& s)
{
	is >> s.name >> s.midterm >> s.final;

	read_hw(is, s.homework);
	return is;
}

istream& read_hw(istream& is, vector<double>& hw)
{
	if(is){
		hw.clear();

		double x;
		while(is >> x)
			hw.push_back(x);

		is.clear();
	}

	return is;
}
