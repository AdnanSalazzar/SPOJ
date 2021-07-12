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

    ll T , num ,i ,sum;

    cin >> T ;
    string a ;

    while(T--)
    {
        cin >> a ;
        ll sum = 0 ;

        for(i = 0 ; i < a.size() ; i++)
        {
            sum += (a[i] - '0');
        }
         cout << sum << endl;
    }



return 0 ;
}

