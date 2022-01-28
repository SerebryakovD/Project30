#include<iostream>
#include<string>

using namespace std;
// Проверить что куб суммы цифр в числе
// равен его квадрату

int getSum (string numStr) {
	long long sum = 0;

	for (long long i = 0; i < numStr.size(); i++) {
		long long number = (long long)numStr[i] - '0';
		sum += number;
	}

	return sum;
}

void printNums (long long count) {
	long long rowCounter = 0;

	for (long long i = 0; i < count; i++) {
		string numStr = to_string(i);

		if (pow(i, 2) == pow(getSum(numStr), 3)) {
			if (rowCounter % 10 == 0) cout << endl;
			cout << i << "\t";
		}

		rowCounter++;
	}

	cout << endl;
}


int main() {
	printNums(10000);

	string numStr;
	int sum = 0;
	cout << "enter number : ";
	cin >> numStr;
	int digital = stoi(numStr);

	// 12 345 = 5*10^0 + 4 * 10^1 ... 1*10^4
	for (int i = 0; i < numStr.size(); i++) {
		int number = numStr[i] - '0';
		sum += number;
		//digital += (
		//	(int)(numStr[i] - '0') *
		//	pow(10, numStr.size() - 1 - i)
		//);
	}

	cout << "digital = " << digital << endl;
	cout << "sum = " << sum << endl;
	cout << "digital ^ 2 = " << pow(digital, 2) << endl;
	cout << "sum ^ 3 = " << pow(sum, 3) << endl;

	if (pow(digital, 2) == pow(sum, 3)) {
		cout << "Equals!";
	}
	else {
		cout << "Not Equals!";
	}

	return 0;
}