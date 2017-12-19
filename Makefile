#this is a script to help you compile stuff easier without writing for ever.
CXX=g++ #compiler
CXX_FLAGS=-Wall -pedantic -std=c++14 #They are nice, I dunno what it means.
SRC=main.cpp stats.hpp import.hpp database.hpp #the files that we are gonna compile.

all:
		$(CXX) $(CXX_FLAGS) $(SRC) -o stats # -o changes the name of the binary to stats. (indent : 8)