# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica
#
# @author Javier Hdez. Aceituno
# @date 20 oct 2025
# @brief A Makefile example for FibonacciSum program
# 

CXX = g++
CXXFLAGS = -std=c++17 -Wall

all: fibonacci_sum

fibonacci_sum: fibonacci_sum.o fibonacci_main.o
	$(CXX) $(CXXFLAGS) -o $@ $^

.PHONY: all clean

clean :
	rm -rf *.o fibonacci_sum ../doc a.out
