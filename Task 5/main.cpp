#include <iostream>
#include <map>
#include <vector>

#include "fun_algo.h"





int main()
{

    //Declaring Preference Tables as Maps
    std::map<int,std::vector<int>> A_prefs {{1,{1,2,4,3}},
                                            {2,{3,1,4,2}},
                                            {3,{3,2,4,1}},
                                            {4,{2,1,3,4}}

    };

    std::map<int,std::vector<int>> B_prefs {{1,{3,2,4,1}},
                                            {2,{2,1,3,4}},
                                            {3,{2,4,1,3}},
                                            {4,{3,1,4,2}}

    };

    //Runs Fundamental Algorithm
    fun_algo(A_prefs,B_prefs,true);


    return 0;
    }
