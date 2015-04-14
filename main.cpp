#include <iostream>
#include <assert.h>

using namespace std;

#include "safeArray.h"

int main()
{
    SafeArray a(100);

    a.set(0,100);
    a.set(99,200);
    a.set(30,300);

    a.set(-1,400);
    a.set(100,500);

    int data;

    bool result;
    data=a.get(100,&result);
    assert(data==500);
    assert(result);

    return 0;
}
