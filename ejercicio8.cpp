#include <iostream>
using namespace std;
int main()
{
string a;
getline(cin, a);
string b = "";
string c = "";
int count = 0;
for(int i = 0; i<a.length(); i++){
    if(a[i]==' '){;  
    } else 
    { b += a[i];
      count++;  
    }
}
for (int k = count -1; k>=0; k--){
    c += b[k];
}
if (b==c){
    cout<<"yes";
} else {
        cout<<"no";
}
    return 0;
}
