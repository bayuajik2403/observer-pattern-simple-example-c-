#ifndef Included_statusObserver2_H

#define Included_statusObserver2_H

#include "Observer.h"
#include "statusSubject.h"
#include <iostream>
#include <string>

class statusObserver2: public Observer{

public:
    void status(bool status) override;
    void functionTrue();
    void functionFalse();
   
};
#endif

