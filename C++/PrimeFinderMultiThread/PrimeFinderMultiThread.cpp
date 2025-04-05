// PrimeFinderMultiThread.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <thread>
#include <vector>

#include "PrimePrinter.h"
#include "PrimeChecker.h"

int main(int argc, char* argv[])
{
    int start, end, numThreads = 4;
    
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

    // Determine range chunks
    int rangeSize = (end - start + 1) / numThreads;
    std::vector<int> chunkStart(numThreads), chunkEnd(numThreads);

    for (int i = 0; i < numThreads; ++i) {
        chunkStart[i] = start + i * rangeSize;
        chunkEnd[i] = (i == numThreads - 1) ? end : (chunkStart[i] + rangeSize - 1);

        std::cout << "Chunk " << i + 1 << ": " << chunkStart[i] << " to " << chunkEnd[i] << "\n";
    }
    //

    std::cout << "\nYou want to find primes from " << start << " to " << end << ".\n";
    
    std::cout << "    Prime numbers in this range...\n";
    prime_printer::print_primes(start, end);
    
    return 0;
}
