# Variables for compilation
CXX = g++
CXXFLAGS = -g -std=c++11

main: Q5.o 
	$(CXX) $(CXXFLAGS) -o Q5.out Q5.o

Q5.o:
	$(CXX) $(CXXFLAGS) -c Q5.cpp
clean:
	find . -type f -name '*.out' -delete
	find . -type f -name '*.o' -delete
	find . -type f -name 'core.*' -delete
