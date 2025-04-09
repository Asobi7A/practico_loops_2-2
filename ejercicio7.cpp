#include <iostream>
using namespace std;
int main()
{
int n; 
cin>>n;
double num = 1;
double ans = 0;
int sign = 1;
for (int i = 1 ; i<n; i++){
    ans += sign * (num/i);
    sign *= -1;
}
double ans2 = 1;
for (int k = 0; k<=n; k++){
    ans2*=-1;
}cout<<ans + (ans2/n)<<endl;

    return 0;
}
