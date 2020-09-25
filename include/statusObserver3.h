#ifndef Included_statusObserver3_H

#define Included_statusObserver3_H

#include "statusObserver3.h"
#include "statusSubject.h"
#include <iostream>
#include <string>

class statusObserver3: public Observer{

public:
    void status(bool status) override;
   
};
#endif

