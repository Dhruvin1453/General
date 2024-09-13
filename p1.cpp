#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int unit,totalcharge,charge;
    cout<<"Enter  Unit :";
    cin>>unit;
    
    if(unit<=100){
       charge=unit*0.6;
    }
    else if(unit<=300){
        charge=(100*0.6)+((unit-100)*0.8);
    }
    else{
      charge=(100*0.6)+(200*0.8)+((unit-300)*0.9);
    }

    if (charge<50){
        charge=50;
    }
    
    if (charge > 300){
        charge*=1.15;
    }
    
    cout<<"Your Charge:"<<charge;
    return 0;
}
