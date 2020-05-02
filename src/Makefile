CC=gcc
CXX=g++
CCFLAGS=-I../include -I./include
CXXFLAGS=-I../include -I./include -std=c++14


all: decepticon-1

decepticon-1: decepticon-1.cpp
	mkdir -p bin
	$(CXX) $(CXXFLAGS) $^ -o ./bin/$@
clean:
	rm -rf bin
  