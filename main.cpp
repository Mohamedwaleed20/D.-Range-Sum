#include <iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
    long long t;
    cin >> t;
    while(t--)
    {
        long long l ,r;
        cin >> l >> r;
        long long sum = 0 ;
        long long mn = min(l,r);
        long long mx = max(l,r);
        mn--;
        long long res1 = (mn*(mn+1))/ 2;
         long long res2 = (mx*(mx+1))/ 2;
         long long result = res2 -res1 ;
         cout << result << endl ;
    }

    return 0;
}
