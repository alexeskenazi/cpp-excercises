CXX = g++
CXXFLAGS = -Wall -g


# Specify the target
all: main

# Specify the object files that the target depends on
# Also specify the object files needed to create the executable
main : main.o *.h
	$(CXX) $(CXXFLAGS) main.o -o main 

# Specify the object files and executables that are generated
# and need to be removed to re-compile the whole thing
clean:
	rm -f *.o main
