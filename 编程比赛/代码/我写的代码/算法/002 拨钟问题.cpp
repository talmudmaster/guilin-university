#include<iostream>
#include<cstring>
using namespace std;

int clocks[9] = {0};
int steps[9] = {0};

void check_road(int i1, int i2, int i3) {
	int i4 = (4 - ((i1 + i2 + clocks[0]) % 4)) % 4;
	int i5 = (4 - ((i1 + i2 + i3 + clocks[1]) % 4)) % 4;
	int i6 = (4 - ((i2 + i3 + clocks[2]) % 4)) % 4;
	int i7 = (4 - ((i1 + i4 + i5 + clocks[3]) % 4)) % 4;
	int i9 = (4 - ((i1 + i3 + i5 + i7 + clocks[4]) % 4)) % 4;
	int i8 = (4 - ((i6 + i9 + clocks[8]) % 4)) % 4;
	
	if (
		(clocks[5] + i3 + i5 + i6 + i9) % 4 == 0 &&
		(clocks[6] + i4 + i7 + i8) % 4 == 0 &&
		(clocks[7] + i5 + i7 + i8 + i9) % 4 == 0
		) {
		int tmp[9] = { i1,i2,i3,i4,i5,i6,i7,i8,i9 };
		int sum = 0, ans = 0;
		for (int i = 0; i < 9; ++i)
			sum += tmp[i], ans += steps[i];

		if (sum < ans)
			memcpy(steps, tmp, sizeof(steps));
	}
}

void find() {
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j) {
			for (int k = 0; k < 4; ++k) {
				check_road(i, j, k);
			}
		}
	}
}

int main() {
	for (int i = 0; i < 9; ++i)
		cin >> clocks[i], steps[i] = 4;
	find();
	for (int i = 0; i < 9; ++i)
		while(steps[i]--)
			cout << i + 1 << ' ';
	return 0;
}

