#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

const double EPS = 1e-7;

int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	
	ifstream output1;
	ifstream output2;
	output1.open("out.txt", ios::in);
	output2.open("res.txt", ios::in);

	if (!output1) {
		cout<<"Can't open output file 1\n";
		return 0;
	}
	if (!output2) {
		cout<<"Can't open output file 2\n";
		return 0;	
	}

	int lines = 1;
	string str1, str2;
	double a, b, decimal;
	bool point_found;
	double error;
	while (getline(output1, str1)) {
		getline(output2, str2);
		a = 0.0, decimal = 1.0;
		point_found = false;
		for(int i=0; i<str1.length(); ++i) {
			if(str1[i] == '.') {
				point_found = true;
				decimal = 1.0;
			}
			if(point_found) {
				a = a + ((str1[i] - '0') * decimal / 10);
				decimal /= 10;
			}
			else {
				a = a * 10.0 + (str1[i] - '0');
			}
		}
		b = 0.0, decimal = 1.0;
		point_found = false;
		for(int i=0; i<str2.length(); ++i) {
			if(str2[i] == '.') {
				point_found = true;
				decimal = 1.0;
			}
			if(point_found) {
				b = b + ((str2[i] - '0') * decimal / 10);
				decimal /= 10;
			}
			else {
				b = b * 10.0 + (str2[i] - '0');
			}
		}
		error = (abs(a - b) / a) / b;
		if (error > EPS) {
			cout.precision(10);
			cout << "Error at line number " << lines << " is more than EPS set\n";
			cout << "Actual error found : " << fixed << error << "\n";
			cout << "Limit on error set : " << fixed << EPS << "\n";
			return 0;
		}
		lines += 1;
	}
	cout << "Scanned a total of " << (lines - 1) << " lines from both files\n";
	cout << "Both output files are same\n";
	output1.close();
	output2.close();
	return 0;
}