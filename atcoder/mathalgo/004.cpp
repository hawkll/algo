#include <iostream>
using namespace std;
 
int main(){
    int a[3];
    int flag=1;
    for(int i=0; i<3; i++){
        cin >> a[i];
        flag*=a[i];
    }
    cout << flag << endl;
}