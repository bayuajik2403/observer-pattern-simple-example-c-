#include "../include/Observer.h"
#include "../include/statusObserver1.h"
#include "../include/statusObserver2.h"
#include "../include/statusObserver3.h"
#include "../include/statusSubject.h"
#include <iostream>
#include <string>


int main(int argc, char const *argv[])
{
    
    statusSubject a;
    statusObserver1 *b = new statusObserver1;
    statusObserver2 *c = new statusObserver2;
    statusObserver3 *d = new statusObserver3;
    
    // add status oberver, so it will be notified when there is status change
    a.addStatusObserver(b);
    a.addStatusObserver(c);
    a.addStatusObserver(d);

    // to notify a status change
    a.Notify(true);
    return 0;
}