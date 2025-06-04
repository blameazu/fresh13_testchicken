#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;
int main(int argc, char* argv[]) {
	registerGen(argc, argv, 1);
	int n = atoi(argv[1]), v = atoi(argv[2]);
	cout << n << ' ' << v << '\n';
	int mode = atoi(argv[3]);
	if(mode == 2)
		for(int i = 1; i <= n; i++) cout << rnd.next(1, 1000000000) << " \n"[i==n];
	else if(mode == 1) {
		vector<int> tmp;
		for(int i = 1; i <= n; i++) tmp.push_back(rnd.next(1, 1000000000));
		sort(tmp.begin(), tmp.end());
		for(int i = 1; i <= n; i++) cout << tmp[i-1] << " \n"[i==n];
	} else if(mode == 3)
		for(int i = 1; i <= n; i++) cout << 87 << " \n"[i==n];
}
