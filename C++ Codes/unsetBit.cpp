#include <bits/stdc++.h>
using namespace std;

int main(){

    int k = 3; //bit to be unset (to 0)
    int n = 21; // number 10101
    int m = 1 << (k-1); // 0100

    cout<<(n&(~m));

    return 0;

}
