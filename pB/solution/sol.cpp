#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0);
	int n, k; cin >> n >> k;
	vector<int> v(n); for(auto &d : v) cin >> d;
	sort(v.begin(), v.end());
	auto ub = upper_bound(v.begin(), v.end(), k);
	int ans = 0;
	while(ub != v.end()) {
		ans += *ub - k;
		k = *ub;
		ub = upper_bound(v.begin(), v.end(), k);
	}
	cout << ans << '\n';
}