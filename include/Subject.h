#ifndef Included_Subject_H
#define Included_Subject_H

#include "Observer.h"
#include <iostream>
#include <vector>

class Subject{
public:
    
    virtual void addStatusObserver(Observer *observer) = 0;
    
    virtual void Notify(bool status) = 0;    
};

#endif
