#include<bits/stdc++.h>
#include<list>
#include<iterator>
#include<algorithm>
#include<cmath>
#include<string.h>
#include<vector>


#define longpro int64_t ;
#define AMAI ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define MAX 1000000

using namespace std ;

ll r, c, ans, dis[55][55] ;
char mat[55][55] ;


void dfs(ll i, ll j, ll distance)
{

    dis[i][j] = distance+1 ;

    ans = max(dis[i][j], ans) ;

    ll x, y ;

    x = i + 1 ;
    y = j ;
    if( (x >= 0 && y >= 0 && x < r && y < c)  && mat[x][y] == mat[i][j]+1   && dis[x][y] < dis[i][j]+1)
    {
        dfs(x, y, dis[i][j]);
    }

    x = i + 1 ;
    y = j + 1 ;
    if( (x >= 0 && y >= 0 && x < r && y < c)  && mat[x][y] == mat[i][j]+1   && dis[x][y] < dis[i][j]+1)
    {
        dfs(x, y, dis[i][j]);
    }

    x = i ;
    y = j + 1 ;
    if( (x >= 0 && y >= 0 && x < r && y < c)  && mat[x][y] == mat[i][j]+1   && dis[x][y] < dis[i][j]+1)
    {
        dfs(x, y, dis[i][j]);
    }

    x = i + 1 ;
    y = j - 1 ;
    if( (x >= 0 && y >= 0 && x < r && y < c)  && mat[x][y] == mat[i][j]+1   && dis[x][y] < dis[i][j]+1)
    {
        dfs(x, y, dis[i][j]);
    }

    x = i ;
    y = j - 1 ;
    if( (x >= 0 && y >= 0 && x < r && y < c)  && mat[x][y] == mat[i][j]+1   && dis[x][y] < dis[i][j]+1)
    {
        dfs(x, y, dis[i][j]);
    }

    x = i - 1 ;
    y = j - 1 ;
    if( (x >= 0 && y >= 0 && x < r && y < c)  && mat[x][y] == mat[i][j]+1   && dis[x][y] < dis[i][j]+1)
    {
        dfs(x, y, dis[i][j]);
    }

    x = i - 1 ;
    y = j  ;
    if( (x >= 0 && y >= 0 && x < r && y < c)  && mat[x][y] == mat[i][j]+1   && dis[x][y] < dis[i][j]+1)
    {
        dfs(x, y, dis[i][j]);
    }

    x = i - 1 ;
    y = j + 1 ;
    if( (x >= 0 && y >= 0 && x < r && y < c)  && mat[x][y] == mat[i][j]+1   && dis[x][y] < dis[i][j]+1)
    {
        dfs(x, y, dis[i][j]);
    }


}

int main()
{
    AMAI ;
    ll i, j ;
    for(ll T = 1 ; ; T++)
    {
        cin >>r >> c ;

        if(r == 0 && c == 0)
            break;

        for(i = 0 ; i < r ; i++)
        {
            cin >> mat[i] ;
            for(j = 0 ; j < c ; j++)
            {
                dis[i][j] = 0 ;
            }
        }

        for(i = 0 ; i < r ; i++)
        {
            for(j = 0 ; j < c ; j++)
            {
                if(mat[i][j] == 'A' && dis[i][j] == 0)
                {
                    dfs(i, j, 0);
                }
            }
        }

        ll mx = dis[0][0];
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
                if(mx < dis[i][j])
                    mx = dis[i][j];
        }
        cout << "Case " << T <<  ": "  <<  mx << endl;
    }

    return 0 ;
}

