#include <iostream>
#include <string.h>

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int N;
	int alpha[26];
	std::string res = "Possible\n";
	std::string a, b;

	std::cin >> N;

	for (int i = 0; i < N; i++) {
		std::cin >> a >> b;
		memset(alpha, 0, 26);
		if (a.length() != b.length()) {
			res = "Impossible\n";
		}
		else {
			for (int i = 0; i < a.length(); i++) {
				alpha[a[i] - 'a']++;
				alpha[b[i] - 'a']--;
			}
			for (int i = 0; i < 26; i++) {
				if (alpha[i] != 0) {
					res = "Impossible\n";
					break ;
				}
			}
		}
		std::cout << res;
		res = "Possible\n";
	}

	return 0;
}

// int main() {
// 	std::ios::sync_with_stdio(0);
// 	std::cin.tie(0);

// 	int i;
// 	int bl[1000] = { POSS };
// 	std::cin >> i;

// 	char alpha[26] = { 0 };
// 	char a[1000] = { 0 }, b[1000] = { 0 };

// 	for (int k = 0; k < i; k++) {
// 		std::cin >> a;
// 		std::cin >> b;

// 		for (int j = 0; j < 1000; j++) {
// 			if (a[j] >= 'a') alpha[a[j] - 'a'] += 1;
// 		}

// 		for (int j = 0; j < 1000; j++) {
// 			if (b[j] >= 'a') {
// 				if (alpha[b[j] - 'a'] == 0) {
// 					bl[k] = IMPO;
// 					break ;
// 				}
// 				alpha[b[j] - 'a'] -= 1;
// 			}
// 		}
// 		memset(alpha, 0, 26);
// 		memset(a, 0, 1000);
// 		memset(b, 0, 1000);
// 	}

// 	for (int k = 0; k < i; k++) {
// 		if (bl[k] == IMPO) std::cout << "Impossible\n";
// 		else std::cout << "Possible\n";
// 	}

// 	return 0;
// }
