EXECUTABLE  = havel_hakimi


# designate which compiler to use
CXX         = g++

# list of sources used in project
SOURCES     = $(wildcard *.cpp)
# list of objects used in project
OBJECTS     = $(SOURCES:%.cpp=%.o)

#Default Flags
CXXFLAGS = -std=c++1z

$(EXECUTABLE): $(OBJECTS)




# rule for creating objects
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $*.cpp

# make clean - remove .o files, executables
clean:
	rm -f $(OBJECTS) $(EXECUTABLE)
	rm -Rf *.dSYM



# ADD DEPENDENCIES
havel_hakimi.o: main.cpp havel_hakimi.cpp havel_hakimi.h 

.PHONY: clean
