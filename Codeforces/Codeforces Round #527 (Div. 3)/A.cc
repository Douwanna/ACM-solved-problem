/*************************************************************************
    > File Name: A.cc
    > Author: sqwlly
    > Mail: sqw.lucky@gmail.com 
    > Created Time: 2018年12月18日 星期二 22时21分01秒
 ************************************************************************/

#include<bits/stdc++.h>

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.in","r",stdin);
#endif
	int T, n, k;
	cin >> T;
	while(T--) {
		cin >> n >> k;
		int cnt = n / k, t = 0;
		if(n % k != 0)
			t = n % k;
		for(int i = 0; i < k; ++i) {
			if(i == k - 1) 
				cnt += t;
			for(int j = 0; j < cnt; ++j) {
				putchar(i + 'a');
			}
		}
		puts("");
	}
    return 0;
}
