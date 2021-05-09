.SUFFIXES:
.SUFFIXES: .o .cpp
#============================================================
TARGET	=  Problem1 Problem2 Problem3 Problem4 Problem5 Problem6 Problem7 

C_SOURCES =  Problem1.cpp Problem2.cpp Problem3.cpp Problem4.cpp 
C_OBJS     = Problem1.o Problem2.o Problem3.o Problem4.o 
MY_INCLUDES = Problem1.h Problem2.h Problem3.h 

CCX = g++
CXXFLAGS = -g -std=c++11  -Wall

#============================================================
all: $(TARGET)

.o:.cpp	$(MY_INCLUDES)
	$(CCX)  -c  $(CXXFLAGS) $<  

Problem1 :   Problem1.o
	$(CCX) $(CXXFLAGS)  $^ $(LIBDIRS)  -o $@

Problem2 :   Problem2.o
	$(CCX) $(CXXFLAGS)  $^ $(LIBDIRS)  -o $@

Problem3 :   Problem3.o
	$(CCX) $(CXXFLAGS)  $^ $(LIBDIRS)  -o $@

Problem4 :   Problem4.o
	$(CCX) $(CXXFLAGS)  $^ $(LIBDIRS)  -o $@


# Implicit rules: $@ = target name, $< = first prerequisite name, $^ = name of all prerequisites
#============================================================


clean:
	rm -f $(TARGET) $(C_OBJS) core *~