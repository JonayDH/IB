# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica
#
# @author Javier Hdez. Aceituno
# @date Oct 12, 2025
# @brief A Makefile example for simple C++ programs

CXX = g++                    # The C++ compiler command
CXXFLAGS = -std=c++17 -Wall  # The C++ compiler options (C++17, use all warnings)
LDFLAGS =                    # The linker options (if any)

# The 'all' target builds all of the programs handled by the makefile:
all: digits

digits: digits.o 
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

# Indicate that the 'all' and 'clean' targets are not actual files:
.PHONY: all clean

# The following rule is effectively built into make and
# therefore would not need to be explicitly specified:
digits.o: digits.cc
	$(CXX) $(CXXFLAGS) -c $<

# The 'clean' target removes all executable files and object files produced
# by the build process. We can use it for additional housekeeping purposes:
clean :
	rm -f *.o digits *~ a.out
