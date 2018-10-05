#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
#define loop(i,N) for(int i = 0; i < int(N); i++)
#define diff(a,b) ( (a>b) ? (a-b) : (b-a) )
using namespace std;

int main ( void ) {
    freopen("in","r",stdin);

    int N;
    while( scanf("%d", &N) != EOF ) {
        int ans = 0, x, a, b;
        deque<int> Q;

        loop(i,N) {
            scanf("%d", &x);
            Q.push_back(x);
        }

        sort( Q.begin(), Q.end() );
        while( Q.size() > 1 ) {
            a = Q.front(), Q.pop_front();
            b = Q.back(), Q.pop_back();
            ans += diff(a,b);
        } printf("%d\n", ans);
    }

    return 0;
}
