#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	
	ifstream output1;
	ifstream output2;
	output1.open("out.txt", ios::in);
	output2.open("res.txt", ios::in);

	if (!output1) {
		cerr<<"Can't open output file 1\n";
		return 0;
	}
	if (!output2) {
		cerr<<"Can't open output file 2\n";
		return 0;	
	}

	int lines = 1;
	string str1, str2;
	while (getline(output1, str1)) {
		getline(output2, str2);
		int a = str1.length();
		int b = str2.length();
		int lim = min(a, b);
		int pos = 0;
		bool c = false;
		for(int i=0; i<lim; ++i) {
			if (str1[i] != str2[i]) {
				c = true;
				break;
			}
			pos += 1;
		}
		if (c || a!=b) {
			cerr<<"Output differs at line number : "<<lines<<"\n";
			cerr<<"The characters diifer at position : "<<pos+1<<"\n";
			if (a < b) {
				cerr<<"Output in file out.txt has shorter length\n";
			}
			else if (b < a) {
				cerr<<"Output in file res.txt has shorter length\n";		
			}
			return 0;
		}
		lines += 1;
	}
	cerr<<"Scanned a total of "<<lines<<" lines from both files\n";
	cerr<<"Both output files are same\n";
	output1.close();
	output2.close();
	return 0;
}