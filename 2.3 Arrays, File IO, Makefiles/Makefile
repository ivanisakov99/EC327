GCC = g++

OBJS = hello_world.o main.o

default: HelloWorld

HelloWorld: $(OBJS)
	$(GCC) -o HelloWorld $(OBJS)

hello_world.o: hello_world.cpp hello_world.h
	$(GCC) -c hello_world.cpp -o hello_world.o

main.o: main.cpp hello_world.h
	$(GCC) -c main.cpp -o main.o

clean: 
	rm $(OBJS) HelloWorld