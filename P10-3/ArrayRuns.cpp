//Introductory Programming, Lab 10 -- Emerson Beesley -- October 29, 2026
#include <iostream>
using namespace std;

void displayRun(int values[], int size);

int main(void) {
	const int ARRAYSIZE = 6;
	int array[ARRAYSIZE] = { 1, 2, 2, 3, 3, 3 };
	displayRun(array, ARRAYSIZE);

}

void displayRun(int values[], int size) {
	int startRun;
	int endRun;
	for (int i = 0; i < size; i++) {
		if (!(values[i - 1] == values[i]) && (values[i] == values[i + 1])) {
			cout << "(" << values[i] << " ";
		}
		else if ((values[i - 1] == values[i]) && !(values[i] == values[i + 1])) {
			cout << values[i] << ") ";
		}
		else {
			cout << values[i] << " ";
		}
	}
}