#include <iostream>
#include <string.h>

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int i;
	int bl[100] = {};
	std::cin >> i;

	char alpha[100] = {};
	char a[100], b[100];

	for (int k = 0; k < i; k++) {
		std::cin >> a;
		std::cin >> b;

		for (int j = 0; a[j]; j++) {
			alpha[a[j] - 'a'] = 1;
		}

		for (int j = 0; b[j]; j++) {
			if (alpha[b[j] - 'a'] == 0) {
				bl[k] = 1;
				break ;
			}
		}
		memset(alpha, 0, 100);
		memset(a, 0, 100);
		memset(b, 0, 100);
	}

	for (int k = 0; k < i; k++) {
		if (bl[k]) std::cout << "Impossible\n";
		else std::cout << "Possible\n";
	}

	return 0;
}
