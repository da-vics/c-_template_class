#ifndef MYARRAY_H
#define MYARRAY_H
#include<iostream>
using namespace std;

template<class T>
class myarray
{
private:
    int arr_siz;
    T* ptr;

public:
    myarray() : arr_siz(0), ptr(nullptr) {};
    myarray(int);
    T& operator[] (int);
    T& egin();
    T& endd();
    ~myarray();
};

///...............................


template<class T>
myarray<T>::myarray(int x)
{
    try
    {
        if (x > 0)
        {
            this->arr_siz = x;
            ptr = new T[x];

            for (int i = 0;i < arr_siz;++i) {
                ptr[i] = 0;
            }

        }
        else throw runtime_error("array size must be greater than zero!");
    }

    catch (runtime_error e)
    {
        cout << e.what() << endl;
    }
}

template<class T>
T& myarray<T>::operator[](int n)
{
    try
    {
        if (n >= arr_siz || n < 0) throw runtime_error("out of bounds!");

    }

    catch (runtime_error e)
    {
        cout << e.what() << endl;
    }

    return ptr[n];
}


template<class T>
T& myarray<T>::egin()
{
    try
    {
        if (arr_siz == 0) throw runtime_error("no elements");

    }

    catch (runtime_error e)
    {
        cout << e.what() << endl;
    }
    return ptr[0];
}

template<class T>
T& myarray<T>::endd()
{
    try
    {
        if (arr_siz == 0) throw runtime_error("no elements");

    } ///end of try

    catch (runtime_error e)
    {
        cout << e.what() << endl;
    }

    return ptr[arr_siz];
}

template<class T>
myarray<T>::~myarray()
{
    if (arr_siz > 0) { delete[] ptr; }
}

///................................................
class iterate
{
protected:
	int* pt;

public:
	iterate() : pt(nullptr) {};

	void operator=(int& pr);
	int& operator*()const;
	void operator++();
	bool operator!=(int& pr) const;

	friend ostream& operator<<(ostream& strm, const iterate& obj);
};


#endif // MYARRAY_H_INCLUDED
