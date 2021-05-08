.SUFFIXES:
.SUFFIXES: .o .cpp
#============================================================
TARGET	=  Problem1 Problem2 

C_SOURCES =  number_operations.cpp malloc.cpp
C_OBJS     = number_operations.o malloc.o 

CCX = g++
CXXFLAGS = -g -std=c++11  -Wall

#============================================================
all: $(TARGET)

.o:.cpp	$(MY_INCLUDES)
	$(CCX)  -c  $(CXXFLAGS) $<  

Problem1 :   number_operations.o
	$(CCX) $(CXXFLAGS)  $^ $(LIBDIRS)  -o $@

Problem2 :   malloc.o
	$(CCX) $(CXXFLAGS)  $^ $(LIBDIRS)  -o $@

# Implicit rules: $@ = target name, $< = first prerequisite name, $^ = name of all prerequisites
#============================================================


clean:
	rm -f $(TARGET) $(C_OBJS) core *~