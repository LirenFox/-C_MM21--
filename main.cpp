#include <iostream>

using namespace std;

int main()
{
    long long int n, ans=1;
    cin >> n;
    for(int i=1; i<=n; i++){
        ans = ans * i;
    }
    cout << ans << endl;
    return 0;
}
