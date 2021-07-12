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

    ll i , n , k , s , boxes = 0 ;

    cin >> n >> k >> s ;

    ll a[n];

    for(i = 0 ; i < n ; i++)
    {
        cin >> a[i];
    }

    sort( a , a+ n );

    ll needed = k * s ;

    for(i = n-1 ; i >= 0 ; i--)
    {
        if(needed > 0)
        {
            boxes++ ;
            needed -= a[i];
        }
        else break ;
    }

    cout << boxes <<endl;
return 0 ;
}

