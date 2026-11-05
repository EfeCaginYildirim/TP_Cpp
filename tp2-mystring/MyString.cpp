/*
// Created by Efe Cagin Yildirim on 05/11/2026.
*/

#include "MyString.h"
#include <iostream>
#include <cstring>
#include <cctype>
#include <algorithm>   // for_each
#include <cctype>      // toupper



MyString::MyString() : _data(new char[1]), _length(0) { // constructor ""
    _data[0] = '\0';
    LOGME("MyString::MyString()");
}
MyString::MyString (const char *s) : _data(nullptr), _length(0) { // from C string
    if (s != nullptr) {
        _length = strlen(s);
    }
    _data = new char[_length + 1];
    if (s != nullptr) {
        strcpy(_data, s);
    } else {
        _data[0] = '\0';
    }
    LOGME("MyString::MyString(const char *s)");
}

MyString::MyString (const MyString &c) : _data(new char[c._length + 1]), _length(c._length) {// copy constructor
    strcpy(_data, c._data);
    LOGME("MyString::MyString(const MyString &c)");
}
MyString::~MyString() {
    delete[] _data;
    LOGME("MyString::~MyString()");
};                              // destructor
/*
MyString& MyString::operator=(const MyString &s) {
    delete[] _data;
    _length = s._length;
    _data = new char[_length + 1];
    strcpy(_data, s._data);
    return *this;
}
*/

MyString& MyString::operator=(const MyString &s) {  // copy operator
    LOGME("MyString::operator=(const MyString &s) : " << s._data);
    if (this != &s) {
        char *newData = new char[s._length + 1];
        strcpy(newData, s._data);
        delete[] _data;
        _data = newData;
        _length = s._length;
    }
    return *this;
}
/*
char& MyString::operator[](int i) {
    return _data[i];
}

const char& MyString::operator[](int i) const {
    return _data[i];
}
*/
std::ostream& operator<<(std::ostream &os, const MyString &s) {
    os << s._data;
    return os;
}

bool operator==(const MyString &s1, const MyString &s2) { return strcmp(s1._data, s2._data) == 0; }
bool operator<(const MyString &s1, const MyString &s2)  { return strcmp(s1._data, s2._data) < 0; }
bool operator>(const MyString &s1, const MyString &s2)  { return strcmp(s1._data, s2._data) > 0; }
bool operator<=(const MyString &s1, const MyString &s2) { return strcmp(s1._data, s2._data) <= 0; }
bool operator>=(const MyString &s1, const MyString &s2) { return strcmp(s1._data, s2._data) >= 0; }
MyString operator+(const MyString &s1, const MyString &s2) {
    MyString result;
    delete[] result._data;
    result._length = s1._length + s2._length;
    result._data = new char[result._length + 1];
    strcpy(result._data, s1._data);
    strcat(result._data, s2._data);
    return result;
}

MyString& MyString::toUpper() {
    for (int i = 0; i < _length; ++i)
        _data[i] = toupper(_data[i]);
    return *this;
}
#include <stdexcept>   // std::out_of_range

char& MyString::operator[](int i) {
    if (i < 0 || i >= _length) {
        throw std::out_of_range("MyString::operator[] : index out of range");
    }
    return _data[i];
}

const char& MyString::operator[](int i) const {
    if (i < 0 || i >= _length) {
        throw std::out_of_range("MyString::operator[] : index out of range");
    }
    return _data[i];
}