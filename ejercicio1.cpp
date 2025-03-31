#include <iostream>
using namespace std;
int main()
{
string a;
int ans=0;
getline(cin, a);
for(int num = 0; num < a.length(); num++){
    if(a[num]==' '){
        ans==ans+0;
        cout<<ans<<endl;
    } else if (a[num]!=' '){
    ans++;
    }} cout<<ans<<endl;
    return 0;
}
