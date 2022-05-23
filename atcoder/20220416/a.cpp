#include <iostream>
using namespace std;

int main(){
    char S[9];
    int i,j,k;
    char flag[10]={'0', '1', '2','3','4','5','6','7','8','9'};
    for(i=0; i<9; i++){
        cin >> S[i];
        cout << S[i];
        for(j=0; j<10; j++){
            if(S[i]!=flag[j])k=i;
            else if(S[i]==flag[j])y=flag[i];

            if(x!=y)z=x;
        }
    }
    cout << endl;
    char flag[10]={'0', '1', '2','3','4','5','6','7','8','9'};
    int j;
    char x,y,z;
    for(i=0; i<9; i++){
        for(j=0; j<10; j++){
            if(S[i]!=flag[j])x=flag[j];
            else if(S[i]==flag[j])y=flag[i];

            if(x!=y)z=x;
        }
        cout << z << y << endl;

    }
    cout << x << endl;

}