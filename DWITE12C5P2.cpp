#include <bits/stdc++.h>
using namespace std;
// Change me!
#define INF 0x3F3F3F3F
#define MOD 1000000007
// All other macros.
#define pow2(n) (1<<(n))
#define ilg2(n) sizeof(n)*8-__builtin_clz(n)-1
#define mid(n,m)(((m)+(n))/2)
#define ff first
#define ss second
#define cintie(x) { cin.sync_with_stdio(x); cin.tie(x); }
// Typedefs
typedef long long ll;
typedef struct{int x,y;}vec;
typedef struct{double x,y;}vecf;
typedef pair<int, int> ip;

int main()
{
for(int _ = 0; _ < 5; _++) {
	string s;
	int ln = 0;
	getline(cin, s);
	for(int l = 1; l < s.length(); l++)
		if(s.compare(0, l, s.substr(s.length()-l, l)) == 0)
			ln = l;
	cout << s << s.substr(ln) << endl;
}}
