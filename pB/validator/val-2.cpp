#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;
const int MAXN = 2e5;
const int MAXV = 1e9;
int main(int argc, char* argv[]) {
	registerValidation(argc, argv);
	int n = inf.readInt(1, MAXN, "n");
	inf.readSpace();
	inf.readInt(0, MAXV, "v");
	inf.readEoln();
	vector<int> v;
	for(int i = 1; i <= n; i++) {
		int a = inf.readInt(1, MAXV, "a");
		v.push_back(a);
		if(i != n) inf.readSpace();
	}
	auto tmp = v;
	sort(tmp.begin(), tmp.end());
	ensure(tmp == v);
	inf.readEoln();
	inf.readEof();
}
