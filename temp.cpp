#include<bits/stdc++.h>
using namespace std;

double EPS = 1e-9;
int INF = 1000000005;
long long INFF = 1000000000000000005ll;
const unsigned int mod = 1000000007;
double PI = acos(-1);
int dirx[8] = { -1, 0, 0, 1, -1, -1, 1, 1 };
int diry[8] = { 0, 1, -1, 0, -1, 1, -1, 1 };

#ifdef TESTING
#define DEBUG fprintf(stderr, "====TESTING====\n")
#define VALUE(x) cerr << "The value of " << #x << " is " << x << endl
#define debug(...) fprintf(stderr, __VA_ARGS__)
#else
#define DEBUG
#define VALUE(x)
#define debug(...)
#endif

#define ll long long
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
#define foreach(a, b) for (auto&(a) : (b))
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define all(v) v.begin(), v.end()
#define sortt(v) sort(all(v))
#define vi vector<ll>

int isPowerof2(int x)
{
    return (x && !(x & x-1));
}

void solve(){

}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll tomato=1;
    cin >> tomato;
    for(int i=1;i<=tomato;i++){
        solve();
    }
}