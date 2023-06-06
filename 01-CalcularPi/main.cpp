#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
double pif;

double pic(){
    double temp,p=0,pi=3.14159265359;
    int iteracion=1,verdad=0;
    do{
        double diferencia=fabs(p-pi);
        if (diferencia<=0.00000040359){
        verdad=1;
        }
        else{
            iteracion+=111110;
            p=0;
            for (int i=0; i < iteracion; i++){
                temp=pow((-1),i)/(2*i+1);
                p+=temp;
            }
        p*=4;
        }
    } while (verdad<0.5);
    
pif=p;
return pif;}

main(){
    cout<<"pi es igual a "<<setprecision(6)<<fixed<<pic()<<endl;
    return 0;
}
