#include "bits/stdc++.h"
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
char _;


int main(){
	int n;
	scan(n);
	vector<int> arr(n);
	for(int i = 0; i < n; i++)scan(arr[i]);
	return 0;
}