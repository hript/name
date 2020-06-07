#include<iostream>

#define SIZE 100

using namespace std;

int main()
{
	int party, candy, kids;
	bool flag = false;
	cin >> party;
	int arr[SIZE] = { 0 };

	for (int i = 0; i < party; i++) {
		cin >> kids >> candy;
		if (candy % kids != 0) {
			arr[candy % kids] += 1;
			flag = true;
		}		
	}

	if (flag == false)
		cout << 0;

	int answer = 0, counter = 0;
	for (int i = 0; i < 100; i++) {
		if (counter <= arr[i]) {
			counter = arr[i];
			answer = i;
		}
			
	}

	cout << answer;
	return 0;
}