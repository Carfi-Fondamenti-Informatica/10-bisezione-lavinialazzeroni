#include <iostream>
#include <cmath>
using namespace std;
float
f (float y){
  return (y * y * cos (y)) + 1;
}
bool condizione (float a, float b)
{
  if (f (a) * f (b) >= 0)
    return true;
  else
    return false;
} 
void stampa (float x){
cout << int (x * 10000)/10000.0 << endl;
}
int main() {
    float a,b,x,err;
    do{
        cout<<"inserire estremi"<<endl;
        cin>>a>>b;
    }
    while (condizione (a,b));
    do {
        x = (a+b)/2;
        if (f(x) == 0)
        break;
        else{
            if (!condizione (a, x))
            b = x;
        else
            a = x;
            err = abs((b - a) / 2);
        }
    }
    while(err>=1e-6);
    stampa(x);
    return 0;
}
