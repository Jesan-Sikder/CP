#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    float sum=0;
    int j;
    cin>>j;
    float arr[j];
    for ( i = 1; i <= j; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<sum<<endl;
    return 0;
}