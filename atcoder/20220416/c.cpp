#include <iostream>
using namespace std;

int main(){
    int n,m,k;
    cin >> n >> m >> k;
    double flag=0,all=1;
    int retu[n]=1,i,j;
    

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            retu[n]++;
            for(int k=0; k<n; k++){
                all*=retu[k];
            }
        }

    }

}