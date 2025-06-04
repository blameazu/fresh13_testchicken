#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;
mt19937 rng(time(NULL) + 231483);
int main(int argc, char* argv[]) {
    registerTestlibCmd(argc, argv);
    int ans = (((unsigned int)rng())%10000)+1;
    int qry = ouf.readInt(1, 10000);
    if(ans == qry) quit(_ok);
    else {
        int dif = abs(ans-qry);
        long double dif2 = ((long double)(dif))/10000;
        quitp(1-pow(dif2, 0.5));
    }
}