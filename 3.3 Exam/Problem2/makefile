# Variables for compilation
CXX = g++
CXXFLAGS = -g -std=c++11

main: Q3.o Q3main.o Employee.o
	$(CXX) $(CXXFLAGS) -o Q3.out Q3.o Q3main.o Employee

Q3.o:
	$(CXX) $(CXXFLAGS) -c Q3.cpp

Q3main.o:
	$(CXX) $(CXXFLAGS) -c Q3main.cpp

Employee.o:
	$(CXX) $(CXXFLAGS) -c Employee.cpp

clean:
	find . -type f -name '*.out' -delete
	find . -type f -name '*.o' -delete
	find . -type f -name 'core.*' -delete

