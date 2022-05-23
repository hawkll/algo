#include <iostream>
using namespace std;

int main(){
    long long N;
    cin >> N;
    long long A[N];
    for(auto i=0; i<N; i++) cin >> A[i];
    long long a=0, b=0, c=0, d=0;
    
    for(auto i=0; i<N; i++){
        if(A[i]==100)a++;
        else if(A[i]==200)b++;
        else if(A[i]==300)c++;
        else if(A[i]==400)d++;
    }
    long long flag;
    flag = a*d + b*c;
    cout << flag << endl;

}