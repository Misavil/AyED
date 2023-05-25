#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
main(){
    double c=0;
    int i=0;

    //while(a=0){}
    for (double a=0; c =3,141592; i++){
        a=pow((-1),i)/(2*i+1);
        c=a+c;
    }       
        cout<<"usando la Serie de Leibniz da "<<setprecision(8)<<fixed<<c<<" equivalente a pi/4"<<endl;
        cout<<"pi es igual a "<<c*4<<endl;

    return 0;
}