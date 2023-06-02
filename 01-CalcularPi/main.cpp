#include<iostream>
#include<iomanip>
#include<math.h>
double temp,p=0;
using namespace std;
double pic(){
    for (int i=0; i < 999990; i++){
    temp=pow((-1),i)/(2*i+1);
    p=temp+p;
    }
    return p*4;
    }
main(){
    cout<<"pi es igual a "<<setprecision(6)<<fixed<<pic()<<endl;
    return 0;
}
