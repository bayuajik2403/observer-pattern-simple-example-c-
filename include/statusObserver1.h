#ifndef Included_statusObserver1_H

#define Included_statusObserver1_H

#include "statusObserver1.h"
#include "statusSubject.h"
#include <iostream>
#include <string>

class statusObserver1: public Observer{

public:
    //this function override observer.h status
    void status(bool status) override;
   
};
#endif

