

/*सब सुख लहै तुम्हारी सरना, तुम रक्षक काहू को डरना*/

#include<bits/stdc++.h>
using namespace std;

#define Code ios_base::sync_with_stdio(false);



using ll= long long;
using lld= long double;
using ull= unsigned long long;


const lld pi= 3.141592653589793238;
const ll INF= LONG_LONG_MAX;
const ll mod=1e9+7;


ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);} 
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
ll moduloMultiplication(ll a,ll b,ll mod){ll res = 0;a %= mod;while (b){if (b & 1)res = (res + a) % mod;b >>= 1;}return res;}
ll powermod(ll x, ll y, ll p){ll res = 1;x = x % p;if (x == 0) return 0;while (y > 0){if (y & 1)res = (res*x) % p;y = y>>1;x = (x*x) % p;}return res;}
ll nCr(int n, int r) { if (r > n) return 0; if (r == 0 || n == r) return 1; double res = 0;for (int i = 0; i < r; i++) {res += log(n-i) - log(i+1); }return (ll)round(exp(res));}
int inv(ll b,ll m){return powermod(b,m-2,m);}


bool sortAsc(const pair<int,int> &a,const pair<int,int> &b){return (a.second < b.second);}
bool sortDesc(const pair<int,int> &a,const pair<int,int> &b){return (a.second > b.second);}


string decToBin(int n){string s="";int i = 0;while (n > 0) {s =to_string(n % 2)+s;n = n / 2;i++;}return s;}
ll binToDec(string n){string num = n;ll dec_value = 0;int base = 1;int len = num.length();for(int i = len - 1; i >= 0; i--){if (num[i] == '1')dec_value += base;base = base * 2;}return dec_value;}


bool isPrime(ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
bool isPowerOfTwo(int n){if(n==0)return false;return (ceil(log2(n)) == floor(log2(n)));}
bool isPerfectSquare(ll x){if (x >= 0) {ll sr = sqrt(x);return (sr * sr == x);}return false;}


int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

 int t;
 cin>>t;

 while(t--){ 

 }
	 
return 0;	
}

