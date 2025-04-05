// PrimeFinderMultiThread.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <thread>

#include "PrimePrinter.h"

int main(int argc, char* argv[])
{
    int start, end;
    
    std::cout << "Prime-Finder (Using Multithreading!)\n";
    std::cout << "Enter your starting value:\n";
    std::cin >> start;
    if (std::cin.fail()){
        std::cerr << "Invalid Input! \n Restart program and only enter integers.\n";
        return 0;
    }
    std::cout << "Enter your ending value:\n";
    std::cin >> end;
    if (std::cin.fail()){
        std::cerr << "Invalid Input! \n Restart program and only enter integers.\n";
        return 0;
    }

    std::cout << "\n You want to find primes from " << start << " to " << end << ".\n";
    
    std::cout << "    Prime numbers in this range...\n";
    prime_printer::print_primes(start, end);
    
    return 0;
}
