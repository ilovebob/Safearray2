#include "safeArray.h"

SafeArray::SafeArray(int size):size(size)
{
    data=new int[size];
}

SafeArray::~SafeArray()
{
    delete[] data;
}

void SafeArray::set(int index,int value){
    if(index<0 || index>=size)
        return;
    data[index]=value;
}

int SafeArray::get(int index,bool* result){
    if(index<0 || index>=size){
        *result=false;
        return 0;
    }
    *result=true;
    return data[index];
}
