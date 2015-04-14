#ifndef SAFEARRAY_H
#define SAFEARRAY_H


class SafeArray
{
    public:
        SafeArray(int size);
        ~SafeArray();

        void set(int index,int value);
        int get(int index,bool* result);
    protected:
    private:
        int size;
        int* data;
};

#endif // SAFEARRAY_H
