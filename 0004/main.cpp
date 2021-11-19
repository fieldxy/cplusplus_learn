#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
#include "grade.h"
#include "student_info.h"

using std::cin;
using std::cout;
using std::domain_error;
using std::endl;
using std::max;
using std::setprecision;
using std::sort;
using std::streamsize;
using std::string;
using std::vector;
using std::setw;

int main()
{
	vector<student_info> students;
	student_info record;
	string::size_type maxlan = 0;
	
	while(read(cin, record)) {
		maxlan = max(maxlan, record.name.size());
		students.push_back(record);
	}

	sort(students.begin(), students.end(), compare);

	for(std::vector<student_info>::size_type i = 0;
			i != students.size(); i++){
		cout << setw(maxlan + 1) << students[i].name;

		try {
			double final_grade = grade(students[i]);
			streamsize prec = cout.precision();
			cout << setprecision(3) << final_grade 
				<< setprecision(prec);
		} catch (domain_error e) {
			cout << e.what();
		}
		cout << endl;
	}

	return 0;

}
