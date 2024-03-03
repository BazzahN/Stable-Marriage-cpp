#include <iostream>
#include <map>
#include <vector>
#include <list>
#include <string>

#include "fun_algo.h"
#include "utils.h" //Used to read in .txt files in comma seperated format




int main(int argc, char* argv[])
{


    //Turns inputted arguments (type string)into a vector

    std::vector<std::string> args(argc - 1);
    for(int i = 0; i < argc - 1; i++)
    {
      args[i] = std::string(argv[i+1]);
    }

    //extracts file names from vector

    std::string fnameA {args[0]};
    std::string fnameB {args[1]};

	
    //Convers preference tables in files to maps
    std::map<int,std::vector<int>> A_prefs = file_rw_pref_dict(fnameA);
    std::map<int,std::vector<int>> B_prefs = file_rw_pref_dict(fnameB);




    fun_algo(A_prefs,B_prefs,true);

    
    return 0;
    }
