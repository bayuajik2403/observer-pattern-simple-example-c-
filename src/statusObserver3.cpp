#include "../include/statusObserver3.h"

using namespace std;

//this function will be called when there is status change
void statusObserver3::status(bool status){
    int n = 100;
    int m = 200;
    if (status == false) {
        //you can do anything here
        cout<<"---statusObserver3 got status false, so I will do a math. 100 + 200 is: "<<n+m<<endl;
    } else {
        //you can do anything here
        cout<<"---statusObserver3 got status true, so I will do do a math. 200 - 100 is: "<<m-n<<endl;
        
    }
}