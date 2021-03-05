# Variables for compilation
CXX = g++
CXXFLAGS = -g -std=c++11

main: Problem3.o
	$(CXX) $(CXXFLAGS) -o Problem3.out Problem3.o 

Problem3.o:
	$(CXX) -c Problem3.cpp

clean:
	find . -type f -name '*.out' -delete
	find . -type f -name '*.o' -delete
	find . -type f -name 'core.*' -delete

