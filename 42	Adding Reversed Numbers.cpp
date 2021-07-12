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

ll rev(ll num )
{
    int ans = 0;

    while(num > 0)
    {
        ans = (ans * 10) + (num % 10) ;
        num = num / 10 ;
    }

    return ans ;
}

int main()
{
    AMAI ;

    ll T , a , b ;
    cin >> T ;
    while(T--)
    {
        cin >> a >> b ;

        a = rev(a);
        //printf("a = %lld\n" , a);

        b = rev(b);
        //printf("b = %lld\n" , b);

        a = a + b ;

        a = rev(a);

        cout << a << endl ;

    }



return 0 ;
}

