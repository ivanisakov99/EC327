# Variables for compilation
CXX = g++
CXXFLAGS = -g -std=c++11

main: Problem2.o Q3main.o
	$(CXX) $(CXXFLAGS) -o Problem2.out Problem2.o Problem2_main.o

Problem2.o:
	$(CXX) $(CXXFLAGS) -c Problem2v.cpp

Problem2_main.o:
	$(CXX) $(CXXFLAGS) -c Problem2_main.cpp

clean:
	find . -type f -name '*.out' -delete
	find . -type f -name '*.o' -delete
	find . -type f -name 'core.*' -delete

