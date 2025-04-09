#include <iostream>
using namespace std;
int main()
{
   int a;
   cout<<"introduce un numero positivo mayor o igual que 0, el maximo es 14"<<endl;
   cin>>a;
   if(a<0 || a>14){
       cout<<"ingrese un numero valido"<<endl;
   } else {
       int b = 1;
       for(int i = 1; i<=a; i++){
           b*=i;
           
       }cout<<b<<endl;
   }
}
