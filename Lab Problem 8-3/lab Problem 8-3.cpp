//Lab Problem 8-3 
#include <iostream>
#include <string>

using namespace std;

int romanCharValue(string r);
int convertRomanToInt(string s);

int main(){
	string s;
	while (true) {
		cout << "Enter Roman Numerals or Q to quit: ";
		getline(cin, s);
		if (s == "Q") break;
		cout << s << " = " << convertRomanToInt(s) << endl;
	}

}



int romanCharValue(string r) {
	int num = 0;
	if (r == "I") {
		num += 1;
	}
	else if (r == "V") {
		num += 5;
	}
	else if (r == "X") {
		num += 10;
	}
	else if (r == "L") {
		num += 50;
	}
	else if (r == "C") {
		num += 100;
	}
	else if (r == "D") {
		num += 500;
	}
	else if (r == "M") {
		num += 1000;
	}

	return num;
}


int convertRomanToInt(string s) {
	int total = 0;
	int x = 0;
	int num_char = s.length();
	string last_character = s.substr(s.length() - 1, 1);
	int num_last = s.length() - 1;

	for (x = 0; x <= num_last; x++) {
		string cut = s.substr(x, 1);
		string cut2 = s.substr((x+1), 1);
		int second = romanCharValue(cut2);
		int first = romanCharValue(cut);

		if (num_char == 1) {
			total += first;
			return total;
		}
		else if (first >= second) {
			total += first;
		}
		else if (first < second) {
			total += (second - first);
			x++;
		}
	}

	return total;
}
