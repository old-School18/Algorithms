
typedef long long ll;
ll integer_knapsack(ll w[], ll v[], ll n, ll W)
{
    ll dp[W + 1];
    memset(dp, 0, sizeof(dp));
    for (ll i = 0; i <= W; i++)
        for (ll j = 0; j < n; j++)
        {
            if (i >= w[j])
                dp[i] = max(dp[i], dp[i - w[j]] + v[j]);
        }
    return dp[W];
}
