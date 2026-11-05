/*
// Created by Efe Cagin Yildirim on 05/11/2026.
*/

#ifndef TP2_MYSTRING_MYSTRING_H
#define TP2_MYSTRING_MYSTRING_H

#include <iostream>
#include <algorithm>   // for_each
#include <cctype>      // toupper

#ifdef MYLOG
#define LOGME(x) std::cout << x << std::endl;
#else
#define LOGME(x)
#endif

class MyString {
    private:
    char *_data;
    int _length;
    public:
    int getLength() const;
    MyString ();                                // constructor ""
    MyString (const char *s);                   // from C string
    MyString (const MyString &c);               // copy constructor
    ~ MyString ();                              // destructor
    MyString & operator=(const MyString & s);   // copy operator

    friend std::ostream& operator<<(std::ostream &os, const MyString &s);
    char& operator[](int i);               // non const read+write
    const char& operator[](int i) const;   // const read only

    friend bool operator==(const MyString &s1, const MyString &s2);
    friend bool operator<(const MyString &s1, const MyString &s2);
    friend bool operator>(const MyString &s1, const MyString &s2);
    friend bool operator<=(const MyString &s1, const MyString &s2);
    friend bool operator>=(const MyString &s1, const MyString &s2);
    friend MyString operator+(const MyString &s1, const MyString &s2);

    MyString& toUpper();

    typedef char* iterator;
    iterator begin() { return _data; }
    iterator end()   { return &_data[_length]; }
    
    typedef char const* const_iterator;
    const_iterator begin() const { return _data; }
    const_iterator end()   const { return &_data[_length]; }
};

inline int MyString::getLength() const { return _length;}

#endif //TP2_MYSTRING_MYSTRING_H
