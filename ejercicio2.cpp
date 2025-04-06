#include <iostream>
using namespace std;
int main()
{
    
string a;
getline(cin, a);
string word = "";
for (int i = 0; i<a.length() ; i++){

    if(a[i]!=' '){
    word+=a[i];
    }else if (a[i]==' '){
    cout<<"["<<word<<"]"<<endl;;
    word = ""; }
}
    return 0;
}
