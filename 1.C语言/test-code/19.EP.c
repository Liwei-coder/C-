/*************************************************************************
	> File Name: EP.c
	> Author: 
	> Mail: 
	> Created Time: 2020年11月12日 星期四 10时05分01秒
 ************************************************************************/

#include <stdio.h>
typedef long long ll;

ll Triangle (ll n) {
    return n * (n + 1) / 2;
}

ll Pentagonal (ll n) {
    return n * (3 * n - 1) / 2;
}

ll Hexagonal (ll n) {
    return n * (2 * n - 1);
}

ll binary_search(ll (*arr)(ll), ll n, ll x) {
    ll head = 1, tail = n, mid;
    while (head <= tail) {
        mid = (head + tail) >> 1;
        if (arr(mid) == x) return mid;
        if (arr(mid) < x) head = mid + 1;
        else tail = mid - 1;
    }
    return -1;
}

int main() {
    ll n = 143;
    while (1) {
        n += 1;
        ll temp = Hexagonal(n);
        if (binary_search(Pentagonal, temp, temp) == -1) continue ;
        printf("%lld\n", temp);
        break;
    }

    return 0;
}
