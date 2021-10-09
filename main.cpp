#include <iostream>
#include <chrono>
#include "include/sorting_library.h"
using namespace std;


int main() {

    //make some data to sort
    int data[500000];

    //sort array in random order
    for (int i = 0; i < 500000; i++){
        data[i] = rand() % 500000 + 0;
    }

//    //sort in ascending
//    for(int i = 0; i < 10000; i++){
//        data[i] = 10000 + i;
//    }


//    //sort in descending
//    for(int i = 0; i < 500000; i++){
//        data[i] = 500000 - i;
//    }

    std::cout << std::fixed << std::showpoint;
    std::cout.precision(9);
    print_version_number();
    //create a start and end time_point object
    std::chrono::time_point<std::chrono::high_resolution_clock> start, end;

//    //get the current time, run the algo, then get the current time again
//    start = std::chrono::high_resolution_clock::now();
//    mystery01(data, 50000);
//    end = std::chrono::high_resolution_clock::now();
//
//    //calculate the duration between start and end and print to the terminal
//    std::chrono::duration<double> time_in_seconds = end - start;
//    std::cout << std::fixed << "Duration of mystery 1: " << time_in_seconds.count() << std::endl;


//    //get the current time, run the algo, then get the current time again
//    start = std::chrono::high_resolution_clock::now();
//    mystery02(data, 100000);
//    end = std::chrono::high_resolution_clock::now();
//
//    //calculate the duration between start and end and print to the terminal
//    std::chrono::duration<double> time2_in_seconds = end - start;
//    std::cout << std::fixed << "Duration of mystery 2: " << time2_in_seconds.count() << std::endl;

//
    //get the current time, run the algo, then get the current time again
    start = std::chrono::high_resolution_clock::now();
    mystery03(data, 500000);
    end = std::chrono::high_resolution_clock::now();

    //calculate the duration between start and end and print to the terminal
    std::chrono::duration<double> time3_in_seconds = end - start;
    std::cout << std::fixed << "Duration of mystery 3: " << time3_in_seconds.count() << std::endl;
//
//
//    //get the current time, run the algo, then get the current time again
//    start = std::chrono::high_resolution_clock::now();
//    mystery04(data, 50000);
//    end = std::chrono::high_resolution_clock::now();
//
//    //calculate the duration between start and end and print to the terminal
//    std::chrono::duration<double> time4_in_seconds = end - start;
//    std::cout << std::fixed << "Duration of mystery 4: " << time4_in_seconds.count() << std::endl;



//    //get the current time, run the algo, then get the current time again
//    start = std::chrono::high_resolution_clock::now();
//    mystery05(data, 500000);
//    end = std::chrono::high_resolution_clock::now();
//
//    //calculate the duration between start and end and print to the terminal
//    std::chrono::duration<double> time5_in_seconds = end - start;
//    std::cout << std::fixed << "Duration of mystery 5: " << time5_in_seconds.count() << std::endl;

    return 0;
}
