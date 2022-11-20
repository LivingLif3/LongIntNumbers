#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

class LongInt {
public:
    int sign;
    vector <int> digits;
public:
    LongInt();
    LongInt(const LongInt& x);
    LongInt(const string& value);

    bool operator>(const LongInt& x) const;
    bool operator<(const LongInt& x) const;
    bool operator>=(const LongInt& x) const;
    bool operator<=(const LongInt& x) const;
    bool operator==(const LongInt& x) const;
    bool operator!=(const LongInt& x) const;

    LongInt& operator=(const LongInt& x);

    LongInt operator*(const LongInt& x) const;
    LongInt operator*=(const LongInt& x);
    LongInt operator/(const LongInt& x) const;
    LongInt operator/=(const LongInt& x);
    LongInt operator+(const LongInt& x) const;
    LongInt operator+=(const LongInt& x);
    LongInt operator-(const LongInt& x) const;
    LongInt operator-=(const LongInt& x);

    //LongInt inverse() const;
};

#endif