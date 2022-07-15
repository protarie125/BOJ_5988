#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;
	while (0 < (n--)) {
		string x;
		cin >> x;

		auto p = (x[x.length() - 1] - '0') % 2;
		if (0 == p) {
			cout << "even\n";
		}
		else {
			cout << "odd\n";
		}
	}

	return 0;
}