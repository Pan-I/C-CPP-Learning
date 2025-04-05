#include "PrimeChecker.h"

bool prime_checker::is_prime(const int number)
{
    if (number <= 1) return false;
    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) return false;
    }
    return true; 
}