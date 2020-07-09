#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
    float  t=0;
    for(int i=0; i<=1000; i++){
        t=t+((float)pow(-1,i)/(2*i+1));
    }
    
    cout<<(float)t;
    
    return 0;
}
