class Solution
{
    public:
        using ll = long long int;
    ll lcm(ll a, ll b)
    {
        return (a *b) / (__gcd(a, b));
    }
    ll solve(ll a, ll b, ll c, ll mid)
    {
        return (mid / a) + (mid / b) + (mid / c) - (mid / lcm(a, b)) - (mid / lcm(a, c)) - (mid / lcm(b, c)) + (mid / (lcm(a, lcm(b, c))));
    }
    
    
    int nthUglyNumber(int n, int a, int b, int c)
    {
        ll start = min({ a,
            b,
            c });
        ll end = INT_MAX;
        ll ans;
        while (start <= end)
        {
            ll mid = start + (end - start) / 2;
            if (solve(a, b, c, mid) < n)
            {
                start = mid + 1;
            }
            else
            {
                ans = mid;
                end = mid - 1;
            }
        }
        return ans;
    }
};