#include <iostream>
using namespace std;

int main(){
    char s[4];
    for(int i=0; i<4; i++)cin >> s[i];
    char ss[4];
    for(int i=0; i<4; i++){
        if(i==0){
            ss[i]='0';
        }
        else{
            if(s[i-1]=='0')ss[i]='0';
            else if(s[i-1]=='1')ss[i]='1';
        }
    }
    for(int i=0; i<4; i++)cout << ss[i];
    cout << endl;

}