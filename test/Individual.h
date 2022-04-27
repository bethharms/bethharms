#pragma once
#include <string>

class Individual
{
    public:
    Individual(int l);

    Individual(std::string str);

    std::string getString();

    int getBit(int pos);

    void flipBit(int pos);

    int getMaxOnes();

    int getLength();

    protected:
    std::string binString;
    int length;
};