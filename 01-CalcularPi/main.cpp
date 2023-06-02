#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
main(){
    double a,c=0;
    for (int i=0; i < 999990; i++){

        a=pow((-1),i)/(2*i+1);
        c=a+c;
    }

    cout<<"pi es igual a "<<setprecision(6)<<fixed<<c*4<<endl;

    return 0;
}
