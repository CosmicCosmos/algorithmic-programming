
//Shreyans Sheth [bholagabbar]

#include <bits/stdc++.h>
using namespace std;
#define readFile freopen("E:/Shreyans/Documents/Coding Workspace/STDINPUT.txt","r",stdin);
#define getPrecision(s,p) fixed<<setprecision(p)<<s
#define boostIO ios_base::sync_with_stdio(0), cin.tie(0)
#define CLR(s) memset(&s, 0, sizeof s)
#define hashset unordered_set   //JAVA Feels :')
#define hashmap unordered_map
#define pb push_back
#define mp make_pair
#define sz 100001
#define F first
#define S second
#define endl '\n'

typedef long long int ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

inline int Find(int x) {
    if (u[x] != u[u[x]]) {
        u[x] = Find(u[x]);
    }
    return u[x];
}

bool Union(int x, int y) {
    int px = Find(x), py = Find(y);
    if (px == py) {
        return false;
    }
    if (r[px] > r[py]) {
        std::swap(px, py);
    } else if (r[px] == r[py]) {
        r[py]++;
    }
    u[px] = py;
    return true;
}

void initializeDSU(int l) {
    for (int i = 1; i <= l; i++) {
        u[i] = i;
        r[i] = 1;
    }
}

int main() {
    boostIO;


    return 0;
}