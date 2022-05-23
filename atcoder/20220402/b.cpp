#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    double A, B, C;
    cin >> A >> B;
    C = hypot(A,  B);
    cout<< C << endl;

    double x,y;

    x = A/C; // 1:x = A:C;
    y = B/C;

    cout << fixed << setprecision(12)<< x << " " << y << endl;

}