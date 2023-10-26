//Lab Problem 8-3 
#include <iostream>
#include <string>

using namespace std;

int romanCharValue(char r);

int main(){
	cout << "Enter Roman Numerals: ";
	char numeral;
	cin >> numeral;

	cout << numeral << " = " << romanCharValue(numeral) << endl;
}


int romanCharValue(char r) {
	int sum = 0;
	if (r == 'I') {
		sum += 1;
	}
	else if (r == 'V') {
		sum += 5;
	}
	else if (r == 'X') {
		sum += 10;
	}
	else if (r == 'L') {
		sum += 50;
	}
	else if (r == 'C') {
		sum += 100;
	}
	else if (r == 'D') {
		sum += 500;
	}
	else if (r == 'M') {
		sum += 1000;
	}

	return sum;
}

