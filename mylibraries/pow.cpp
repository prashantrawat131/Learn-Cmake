#include <iostream>
#include "pow.h"

using namespace std;

int mypow(int base, int exp)
{
    int result = 1;
    for (int i = 0; i < exp; i++)
    {
        result *= base;
    }
    return result;
}