�gN��I��generator�nvim�version�NVIM v0.10.2�max_kbyte
�pid�Lx�encoding�utf-8�gN������YANKY_HISTORY� /��regcontents�vim.opt.mouse = ""
�filetype�lua�regtype�V��regcontents�a577793
460353
880861
577793
577793
100033
22575
22575
1
100033
643621
632329
643621
4
6
13
737721�regtype�v��regcontents��50
1 577793
1 408221
1 880861
2 408221
1 460353
1 223489
6 577713
4 2
5 889905
2 880861
1 100033
1 73956
1 22575
5 583761
6 571549
1 812645
4 3
1 643621
1 451623
6 14895
1 556691
4 1
1 225789
2 22575
1 632329
3 73956
1 316785
5 101413
4 11
5 639414
6 636353
1 272382
1 434049
2 643621
1 99617
2 577793
1 921581
1 894033
3 223489
1 767367
3 272382
1 642721
1 272033
3 632329
1 737721
1 864513
5 746457
1 877545
1 51097
1 484817�regtype�v��regcontents�|#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e6 + 5;

struct Node {
    int l, r, v, w, cnt, siz;
} tree[N];

int n;
int root, tot;

void pushup(int pos) {
    tree[pos].siz = tree[tree[pos].l].siz + tree[pos].cnt + tree[tree[pos].r].siz;
}

int add(int v) {
    tree[++tot].v = v;
    tree[tot].w = rand();
    tree[tot].cnt = tree[tot].siz = 1;
    return tot;
}

void zag(int &pos) {
    int t = tree[pos].r;
    tree[pos].r = tree[t].l;
    tree[t].l = pos;
    pos = t;
    pushup(tree[pos].l);
    pushup(pos);
}

void zig(int &pos) {
    int t = tree[pos].l;
    tree[pos].l = tree[t].r;
    tree[t].r = pos;
    pos = t;
    pushup(tree[pos].r);
    pushup(pos);
}

void build() {
    add(-1e15);
    add(1e15);
    root = 1;
    tree[1].r = 2;
    pushup(root);
    if(tree[1].w < tree[2].w)
        zag(root);
}

void insert(int &pos, int v) {
    if(pos == 0) pos = add(v);
    else if(tree[pos].v == v) tree[pos].cnt++;
    else if(tree[pos].v > v) {
        insert(tree[pos].l, v);
        if(tree[pos].w < tree[tree[pos].l].w)
            zig(pos);
    } else {
        insert(tree[pos].r, v);
        if(tree[pos].w < tree[tree[pos].r].w)
            zag(pos);
    }
    pushup(pos);
}

void remove(int &pos, int v) {
    if(pos == 0) return;
    if(tree[pos].v == v) {
        if(tree[pos].cnt > 1)
            tree[pos].cnt--;
        else if(tree[pos].l != 0 || tree[pos].r != 0)
            if(tree[pos].r == 0 || tree[tree[pos].l].w > tree[tree[pos].r].w) {
                zig(pos);
                remove(tree[pos].r, v);
            } else {
                zag(pos);
                remove(tree[pos].l, v);
            }
        else pos = 0;
    } else if(tree[pos].v > v) remove(tree[pos].l, v);
    else remove(tree[pos].r, v);
}

int queryrnk(int pos, int v) {
    if(pos == 0) return 0;
    if(tree[pos].v == v) return tree[tree[pos].l].siz + 1;
    if(tree[pos].v > v) return queryrnk(tree[pos].l, v);
    else return queryrnk(tree[pos].r, v);
}

int querynum(int pos, int v) {
    if(pos == 0) return 1e15;
    if(tree[tree[pos].l].siz >= v) return querynum(tree[pos].l, v);
    if(tree[tree[pos].l].siz + tree[pos].cnt >= v) return tree[pos].v;
    return querynum(tree[pos].r, v - tree[tree[pos].l].siz - tree[pos].cnt);
}

int queryprev(int pos, int v) {
    if(pos == 0) return -1e15;
    if(tree[pos].v >= v) return queryprev(tree[pos].l, v);
    else return max(tree[pos].v, queryprev(tree[pos].r, v));
}

int querynxt(int pos, int v) {
    if(pos == 0) return 1e15;
    if(tree[pos].v <= v) return querynxt(tree[pos].r, v);
    else return min(tree[pos].v, querynxt(tree[pos].l, v));
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    srand(20241203);
    build();

    cin >> n;
    while(n--) {
        int opt, x;
        cin >> opt >> x;

        if(opt == 1) insert(root, x);
        else if(opt == 2) remove(root, x);
        else if(opt == 3) cout << queryrnk(root, x) - 1 << endl;
        else if(opt == 4) cout << querynum(root, x + 1) << endl;
        else if(opt == 5) cout << queryprev(root, x) << endl;
        else cout << querynxt(root, x) << endl;
    }
    return 0;
}
�filetype�cpp�regtype�V��regcontents�-�filetype�cpp�regtype�v��regcontents�1�filetype�cpp�regtype�v��regcontents�cout << querynxt(root, x) << e�filetype�cpp�regtype�v��regcontents�m�filetype�cpp�regtype�v��regcontents�u�filetype�cpp�regtype�v��regcontents�n�filetype�cpp�regtype�v��regcontents�v�filetype�cpp�regtype�v��regcontents�x�filetype�cpp�regtype�v��regcontents� �filetype�cpp�regtype�v��regcontents�,�filetype�cpp�regtype�v��regcontents�1�filetype�cpp�regtype�v��regcontents�
�filetype�cpp�regtype�V��regcontents�    
�filetype�cpp�regtype�V��regcontents�:�filetype�cpp�regtype�v��regcontents�a�filetype�cpp�regtype�v��regcontents�    if(pos == 0) return 0;
�filetype�cpp�regtype�V��regcontents�3    if(tree[tree[pos].l].siz + 1 == v) return pos;
�filetype�cpp�regtype�V��regcontents�t�filetype�cpp�regtype�v��regcontents�n�filetype�cpp�regtype�v��regcontents�c�filetype�cpp�regtype�v��regcontents�x�filetype�cpp�regtype�v��regcontents�v�filetype�cpp�regtype�v��regcontents�:�filetype�cpp�regtype�v��regcontents�l�filetype�cpp�regtype�v��regcontents�1�filetype�cpp�regtype�v��regcontents� pos)�filetype�cpp�regtype�v��regcontents�t�filetype�cpp�regtype�v��regcontents�n�filetype�cpp�regtype�v��regcontents�i�filetype�cpp�regtype�v��regcontents�r�filetype�cpp�regtype�v��regcontents�t�filetype�cpp�regtype�v��regcontents�e�filetype�cpp�regtype�v��regcontents�l�filetype�cpp�regtype�v��regcontents�x�filetype�cpp�regtype�v��regcontents�e�filetype�cpp�regtype�v��regcontents�d�filetype�cpp�regtype�v��regcontents�o�filetype�cpp�regtype�v��regcontents�n�filetype�cpp�regtype�v��regcontents�全频道阻塞干扰�regtype�v��regcontents� �regtype�v��regcontents��#include<bits/stdc++.h>
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
 
bool cmp(Node a, Node b) {
    return a.x < b.x;
}
 
signed main() {
    cin >> n;
    for(int i = 1; i <= n; ++i)
        cin >> a[i].x >> a[i].y;
     
    sort(a + 1, a + n + 1, cmp);
 
    for(int i = 1; i <= n; ++i) {
        dp1[i] = 1;
        for(int j = 1; j < i; ++j) {
            if(a[i].x > a[j].x && a[i].y > a[j].y)
                dp1[i] = max(dp1[i], dp1[j] + 1);
        }
    }
     
    for(int i = n; i >= 1; --i) {
        dp2[i] = 1;
        for(int j = n; j > i; --j) {
            if(a[i].x > a[j].x && a[i].y > a[j].y)
           