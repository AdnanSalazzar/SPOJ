#include<bits/stdc++.h>
#include<list>
#include<iterator>
#include<algorithm>
#include<cmath>
#include<string.h>
#include<vector>
#include<time.h>

#define longpro int64_t ;
#define AMAI ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

using namespace std ;

int main()
{
    AMAI ;

    ll n ,i  ,j , k ;
    cin >> n ;
    ll ans = n ;


    for(i = 2 ; i <= n ; i++)
    {
        for(j = i ; j <= n ;j++)
        {
            if(i * j <= n) ans++ ;
            else
            {
                break ;
            }
        }
    }



    cout << ans << endl;



return 0 ;
}

