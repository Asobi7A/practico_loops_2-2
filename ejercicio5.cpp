#include <iostream>
using namespace std;
int main()
{
    int n, dia;
cin>>dia>>n;
int enter = 1 ;

for (int i = 1 ; i<dia; i++){
    cout<<"    ";
    enter++;
if (enter == 7){
    cout<<endl;
    enter = 1;}

}
for (int y = 1; y <= n; y++){
    if (y<10){
    cout<<" "<<y<<"  ";
    enter++;
    if (enter == 7){
    cout<<endl;
    enter = 1;
    }
}else {
    cout<<y<<"  ";
    enter++;
    if (enter == 7){
    cout<<endl;
    enter = 1;
}
    
} }
    return 0;
}
