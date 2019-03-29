#include <bits/stdc++.h>

#define FOR(i,n,m); for(int i=n;i<m;i++)
#define REP(i,n) FOR(i,0,n)
#define pb(x) push_back(x)
#define MAX MAX_INT
#define fst first
#define snd second
#define sz(x) int(x.size())
#define all(v) v.begin(),v.end()
#define mp(x,y) make_pair(x,y)
#define fastcin std::ios::sync_with_stdio(false); std::cin.tie(nullptr); 
using namespace std;
int main() {
	fastcin
	int queries;
	int walls;
	int current;
	int next;
	cin >> queries;
	REP(i , queries){
		int counthigh = 0;
		int countlow = 0;
		cin >> walls;
		cin >> current;
		for(int j = 1 ; j < walls ; j++){
			cin >> next;
			if(current < next){
				counthigh++;
			}
			else if(current > next){
				countlow++;
			}
			current = next;
		}
		cout << "Case " << i+1 << ": " << counthigh << ' ' << countlow << "\n";

	}
	return 0;
}

