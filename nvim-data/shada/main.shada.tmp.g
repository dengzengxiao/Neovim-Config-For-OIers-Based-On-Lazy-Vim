�gLR�I��generator�nvim�version�NVIM v0.10.2�max_kbyte
�pid�>�encoding�utf-8�gLR����YANKY_HISTORY���regcontents� �regtype�v��regcontents��#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e3 + 5;

int n, a[N];
int dp[N];

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    while(cin >> a[++n]);

    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j < i; ++j)
            if(a[i] <= a[j])
                dp[i] = max(dp[i], dp[j] + 1);
    }

    cout << (*max_element(dp + 1, dp + n + 1)) << endl;

    memset(dp, 0, sizeof(dp));
    for(int i = 1; i <= n; ++i) {
        dp[i] = 1;
        for(int j = 1; j < i; ++j)
            if(a[i] >= a[j])
                dp[i] = max(dp[i], dp[j] + 1);
    }

    cout << (*max_element(dp + 1, dp + n + 1)) << endl;
    return 0;
}�regtype�v��regcontents��#include<bits/stdc++.h>
using namespace std;
#define int long long
 
int n, dp1[5005], dp2[5005];
 
struct Node {
    int x, y;
} a[5005];
 
bool