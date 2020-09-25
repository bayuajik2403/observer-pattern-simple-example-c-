#ifndef Included_statusSubject_H
#define Included_statusSubject_H
#include "Subject.h"
#include <iostream>
#include <vector>   

class statusSubject: public Subject {
private:
    std::vector<Observer *> n_observer;
public:
    //to notify if there is status change
    void Notify(bool status);
    
    //this will register an observer so it will be notified when there is status change
    void addStatusObserver(Observer *observer) override;
};

#endif


