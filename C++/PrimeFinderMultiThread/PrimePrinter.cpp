#include "PrimePrinter.h"

#include <iostream>

#include "PrimeChecker.h"

void prime_printer::print_primes(const int start, const int end)
{
    int print_tally = 0;
    
    for (int i = start; i <= end; ++i){
        if (prime_checker::is_prime(i)){
            print_tally++;
            if (print_tally == 1){
                std::cout << i;
            }
            else if ((print_tally-1) % 10 == 0){
                std::cout << "\n" << i;
            }
            else{
                std::cout << "," << i;
            }
        }
    }
    std::cout << "!\n";
}
