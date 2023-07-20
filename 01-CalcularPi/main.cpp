#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
double pif;
double pic(){
    double temp,p=0,pi=3.14159265359;
    double diferencia =fabs((p*4)-pi);
    if (diferencia>0.00000000000000000000000000059){
        for (int i=0; i < diferencia*10000000; i++){
            temp=pow((-1),i)/(2*i+1);
            p+=temp;
        }
    }
    pif=p*4;
return pif;
}
int main(){
    cout<<"pi es igual a "<<setprecision(11)<<fixed<<pic()<<endl;
    return 0;
}
