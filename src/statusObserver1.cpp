#include "../include/statusObserver1.h"

using namespace std;

//this function will be called when there is status change
void statusObserver1::status(bool status){
    if (status == false) {
        //you can do anything here
        cout<<"-statusObserver1 got status false, so I will say goodbye"<<endl;
       
    } else {
        //you can do anything here
        cout<<"-statusObserver1 got status true, so I will say hello"<<endl;
        
    }
}