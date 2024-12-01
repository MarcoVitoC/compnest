#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

vector<int> parent, sz;

void setup(int n) {
    for (int i=1; i<=n; i++) {
        parent[i] = i;
        sz[i] = 1;
    }
}

int find(int x) {
    if (x == parent[x]) return x;
    return parent[x] = find(parent[x]);
}

void merge(int a, int b) {
    int pa = find(a), pb = find(b);

    if (pa == pb) return;
    if (sz[pa] < sz[pb]) swap(pa, pb);

    parent[pb] = pa;
    sz[pa] += sz[pb];
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;

    parent.resize(n + 1);
    sz.resize(n + 1);
    setup(n);

    for (int i=1; i<=m; i++) {
        int k;
        cin >> k;

        int initialParent = -1;
        for (int j=0; j<k; j++) {
            int u;
            cin >> u;

            if (initialParent != -1) merge(initialParent, u);
            initialParent = u;
        }
    }

    for (int i=1; i<=n; i++) {
        cout << sz[find(i)] << " ";
    }
    cout << endl;

    return 0;
}