# Variables for compilation
CXX = g++
CXXFLAGS = -g -std=c++11

main: Problem1.o Problem1_main.o
	$(CXX) $(CXXFLAGS) -o Problem1.out Problem1.o Problem1_main.o

Problem1.o:
	$(CXX) $(CXXFLAGS) -c Problem1.cpp

Problem1_main.o:
	$(CXX) $(CXXFLAGS) -c Problem1.cpp

clean:
	find . -type f -name '*.out' -delete
	find . -type f -name '*.o' -delete
	find . -type f -name 'core.*' -delete


