//Below is used to compare the output of two files
//The "out.txt" file is generated from the "work.cpp" file
//The "res.txt" file is generated from the "check.cpp" file

#include <bits/stdc++.h>
using namespace std;

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
	while (getline(output1, str1)) {
		getline(output2, str2);
		if (str1 != str2) {
			cout<<"Output differs at line number : "<<lines<<"\n";
			return 0;
		}
		lines += 1;
	}
	cout<<"Scanned a total of "<<lines<<" lines from both files\n";
	cout<<"Both output files are same\n";
	output1.close();
	output2.close();
	return 0;
}