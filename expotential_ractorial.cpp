#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans;
    cin>>n;
    for (int i = 1; i < n; i++)
    {
    ans= pow(n,n-i);
    cout<<ans<<endl;
    }
    // for (int i = 1; i <2; i++)
    // {
    
    //  cout<<ans<<endl;
    // }

    return 0;
}
