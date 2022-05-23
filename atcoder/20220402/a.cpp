#include <iostream>
using namespace std;

int main(){
    int x[3], y[3];
    
    for(int i=0; i<3; i++){
        cin >> x[i] >> y[i];
    }
    int flagx, flagy;
    flagx = x[0];
    flagy = y[0];

    
        if(flagx!=x[1] && x[1]!=x[2]) flagx = x[1];
        else if(flagx!=x[2] && x[2]!=x[1]) flagx = x[2];
        if(flagy!=y[1] && y[1]!=y[2]) flagy = y[1];
        else if(flagy!=y[2] && y[2]!=y[1]) flagy = y[2];
    
    cout << flagx << " " << flagy << endl;
}