// PrimeFinderMultiThread.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <thread>


int main(int argc, char* argv[])
{
    int start, end;
    
    std::cout << "Prime-Finder (Using Multithreading!)\n";
    std::cout << "Enter your starting value:\n";
    std::cin >> start;
    std::cout << "Enter your ending value:\n";
    std::cin >> end;

    std::cout << "You want to find primes from " << start << " to " << end << ".\n";
    
    return 0;
}
