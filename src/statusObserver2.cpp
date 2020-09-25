#include "../include/statusObserver2.h"
#include <string>

using namespace std;

void statusObserver2::functionTrue(){
    cout<<"$$ bool status is true so this function called from statusObserver2"<<endl;
}

void statusObserver2::functionFalse(){
    cout<<"$$ bool status is false so this function called from statusObserver2"<<endl;
}

//this function will be called when there is status change
void statusObserver2::status(bool status){
    if (status == false) {
        //you can do anything here
        cout<<"--statusObserver2 got status false, so I will call a function"<<endl;
        functionFalse();
    } else {
        //you can do anything here
        cout<<"--statusObserver2 got status true, so I will call a function"<<endl;
        functionTrue();
    }
}