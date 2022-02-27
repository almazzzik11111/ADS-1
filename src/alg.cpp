// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"

bool checkPrime(uint64_t value) 
    {
        for (int i = 2; i <= sqrt(value); i++) 
        {
            if (value % i == 0) 
            {
                return false;
            }
        }
        return true;
    }
 
    uint64_t nPrime(uint64_t n) 
    {
        uint64_t answer = 2; // First simple number
        for (int i = 0; i < n; )
        {
            if (checkPrime(answer) == true)
            {
                i++;
                answer++;
            }
            else
            {
                answer++;
            }
        }
        return answer - 1; // Magic number
    }
 
    uint64_t nextPrime(uint64_t value) 
    {
        if (value == 0)
        {
            return 1;
        }
        else if (value == 1)
        {
            return 2;
        }
        for (uint64_t i = value+1; i <= pow(value, 2); i++)
        {
            if (checkPrime(i) == true)
            {
                return i;
            }
        }
    }
 
    uint64_t sumPrime(uint64_t hbound) 
    {
        uint64_t sum = 0;
        for (uint64_t i = 2; i < hbound; i++)
        {
            if (checkPrime(i) == true)
            {
                sum += i;
            }
        }
        return sum;
    }
