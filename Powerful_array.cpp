
#include <bits/stdc++.h>
#include <cstdio>
#include <algorithm>
using namespace std;
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

#define N 200001
#define ll long long
#define A 1111111
#define BLOCK 700 // ~sqrt(N)

ll cnt[A], a[N], ans[N], answer = 0, freq[1000001] ;

struct node {
	ll L, R, i;
}q[N];

bool cmp(node x, node y) {
	if(x.L/BLOCK != y.L/BLOCK) {
		// different blocks, so sort by block.
		return x.L/BLOCK < y.L/BLOCK;   // will sort in ascending order
	}
	// same block, so sort by R value
	return x.R < y.R;
}

void add(ll position) {
    // cout << " ->" << (freq[a[position]]);
    answer -= cnt[a[position]]*cnt[a[position]]*(a[position]) ;
	freq[a[position]] -= cnt[a[position]]*cnt[a[position]]*(a[position]) ;
	cnt[a[position]]++;
	freq[a[position]] += cnt[a[position]]*cnt[a[position]]*(a[position]) ;
    // cout << " -#" << (freq[a[position]]);
    answer += cnt[a[position]]*cnt[a[position]]*(a[position]) ;
}

void remove(ll position) {
    // cout << " ->>>" << (freq[a[position]]);
    answer -= cnt[a[position]]*cnt[a[position]]*(a[position]) ;
	freq[a[position]] -= cnt[a[position]]*cnt[a[position]]*(a[position]) ;
	cnt[a[position]]--;
	freq[a[position]] += cnt[a[position]]*cnt[a[position]]*(a[position]) ;
    // cout << " -###" << (freq[a[position]]);
    answer += cnt[a[position]]*cnt[a[position]]*(a[position]) ;
}

int main() {
    // FIO;
	ll n;
	scanf("%d", &n);
	ll m;
	scanf("%d", &m);
    for(ll i ; i<N; i++) freq[i]=0;  
	for(ll i=0; i<n; i++)
		scanf("%d", &a[i]);

	for(ll i=0; i<m; i++) {
		scanf("%d%d", &q[i].L, &q[i].R);
		q[i].L--; q[i].R--;   // -- to start no from zero
		q[i].i = i;
	}

	sort(q, q + m, cmp);    // sort query in ascending order
	ll currentL = 0, currentR = 0;
	for(ll i=0; i<m; i++) {
		ll L = q[i].L, R = q[i].R;
		while(currentL < L) {
			remove(currentL);
			currentL++;
		}
		while(currentL > L) {
			add(currentL-1);
			currentL--;
		}
		while(currentR <= R) {
			add(currentR);
			currentR++;
		}
		while(currentR > R+1) {
			remove(currentR-1);
			currentR--;
		}
		ans[q[i].i] = answer;
        // cout << answer << endl ;
	}

	for(ll i=0; i<m; i++)
		printf("%d\n", ans[i]);
}