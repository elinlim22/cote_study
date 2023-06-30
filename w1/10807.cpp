//ios::sync_with_stdio(0);
//cin.tie(nullptr);
#include <iostream>

int main() {
	int i;
	int j;
	int a = 0;

	std::cin >> i;
	int arr[100];
	for (j = 0; j < i; j++) {
		std::cin >> arr[j];
	}
	std::cin >> j;
	for (i--; i >= 0; i--) {
		if (arr[i] == j) a++;
	}
	std::cout << a << std::endl;
	return 0;
}
