#ifndef STATS_HPP_ //header guard : prevents double header inclusion.
#define STATS_HPP_ //define this name if not defined.

#include "import.hpp" //"" is for local file 
#include "database.hpp" //"" is for local file 
#include <iostream>

class Stats  // Class has a first caps letter
{
    public:
        Stats()
        {
            std::cout<<"Start of the Stats object!"<<std::endl;
            i_=0; //initialize
        }
        Stats(int i)
        {
            i_=i;
        }

        void set(int i)
        {
            i_=i; 
        }

        int get() // we defined the whole get function in the header (no semicolon needed).
        {
            return i_;
        }

    private:
        int i_; // So the underline is for the private variable, to let people know.        
}; // classes have ; at the end

#endif // end of STATS_HPP_