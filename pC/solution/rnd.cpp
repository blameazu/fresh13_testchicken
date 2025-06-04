#include <bits/stdc++.h>
using namespace std;
mt19937 rng(time(NULL));
int main(int argc, char* argv[]) {
    cout << (((unsigned int)rng())%10000)+1 << '\n';
}