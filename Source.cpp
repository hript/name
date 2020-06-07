#include<iostream>

#define SIZE 16

using namespace std;

int main()
{
	int vote, pair;
	cin >> vote;
	int count[SIZE + 1] = { 0 };
	

	for (int i = 0; i < vote; i++) {
		cin >> pair;
		count[pair] += 1;
	}

	int counter = 0, numPair = 0;
	for (int i = 1; i <= SIZE; i++) {
		if (counter <= count[i])
		{
			counter = count[i];
			numPair = i;
		}
	}

	cout << numPair << " " << counter << endl;
	counter -= 1;
	while (counter > 0) {
		for (int i = 1; i <= SIZE; i++) {
			if (counter == count[i])
				cout << i << " " << counter<<endl;
		}
		counter -= 1;
	}
	
	return 0;
}