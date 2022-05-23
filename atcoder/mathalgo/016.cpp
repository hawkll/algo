#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    long long a[N];
    for(int i=0; i<N; i++) cin >> a[i];
    long long flag = a[0];
    
    for(int i=1; i<N; i++){
        while(flag>=1 && a[i]>=1){
        if(flag>a[i])flag=flag%a[i];
        else a[i]=a[i]%flag;
    }
    if(flag==0)flag=a[i];
    }
    cout << flag << endl;

    

}