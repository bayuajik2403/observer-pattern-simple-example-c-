#include "../include/statusSubject.h"

//this funtion will notify registered observer if there is status change
void statusSubject::Notify(bool status){
    std::vector<Observer *>::iterator it;
    
        for (it = n_observer.begin(); it != n_observer.end(); ++it){  
            (*it)->status(status);  
        }
    }

//to register (subscribe)
void statusSubject::addStatusObserver(Observer *observer) {
    n_observer.push_back(observer);
}



