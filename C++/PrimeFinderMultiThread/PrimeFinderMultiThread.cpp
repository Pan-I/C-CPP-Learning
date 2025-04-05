// PrimeFinderMultiThread.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <thread>

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

void printPrimes(int start, int end)
{
    int printTally = 0;
    
    for (int i = start; i <= end; ++i)
    {
        if (isPrime(i))
        {
            printTally++;
            if (printTally == 1)
            {
                std::cout << i;
            }
            else if ((printTally-1) % 10 == 0)
            {
                std::cout << "\n" << i;
            }
            else
            {
                std::cout << "," << i;
            }
        }
    }
    std::cout << "!\n";
}

int main(int argc, char* argv[])
{
    int start, end;
    
    std::cout << "Prime-Finder (Using Multithreading!)\n";
    std::cout << "Enter your starting value:\n";
    std::cin >> start;
    if (std::cin.fail())
    {
        std::cerr << "Invalid Input! \n Restart program and only enter integers.\n";
        return 0;
    }
    std::cout << "Enter your ending value:\n";
    std::cin >> end;
    if (std::cin.fail())
    {
        std::cerr << "Invalid Input! \n Restart program and only enter integers.\n";
        return 0;
    }

    std::cout << "\n You want to find primes from " << start << " to " << end << ".\n";
    
    std::cout << "    Prime numbers in this range...\n";
    printPrimes(start, end);
    
    return 0;
}
