#include <iostream>
#include <map>
#include <vector>
#include <list>
#include <string>
#include <chrono> //Used for taking time measurments


#include "fun_algo.h"
#include "utils.h"



//using namespace std::chrono;
int main(int argc, char* argv[])
{


    //Turns inputted strings into a vector
    std::vector<std::string> args(argc - 1);
    for(int i = 0; i < argc - 1; i++)
    {
      args[i] = std::string(argv[i+1]);
    }

    //extracts file names from vector

    std::string fnameA {args[0]};
    std::string fnameB {args[1]};
    int repeats {std::stoi(args[2])};
    double Avg_of_repeats = 0;


    for(int i = 0; i < 4; i++)
    {


        std::map<int,std::vector<int>> A_prefs = file_rw_pref_dict(fnameA+ "_" + std::to_string(i) + ".csv");
        std::map<int,std::vector<int>> B_prefs = file_rw_pref_dict(fnameB+ "_" + std::to_string(i) + ".csv");



        //Repeats fundamental Algorithm. Amount given by user input

        auto start = std::chrono::high_resolution_clock::now();
        for(int j =0; j < repeats; j++)
        {

            fun_algo(A_prefs,B_prefs,false);

        }
        auto end = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();

        double averageRuntime = static_cast<double>(duration) / repeats;
        Avg_of_repeats = averageRuntime + Avg_of_repeats;


    }

    std::cout << "Average runtime from 4 tables: " << Avg_of_repeats/4 << " microseconds" << std::endl;



    return 0;
    }