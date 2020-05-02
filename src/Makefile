CC=gcc
CXX=g++
CCFLAGS=-I../include -I./include
CXXFLAGS=-I../include -I./include -std=c++14
NVCC=nvcc


all: decepticon-1

decepticon-1: decepticon-1.cu
	mkdir -p bin
	$(NVCC) $(CXXFLAGS) $^ -o ./bin/$@
clean:
	rm -rf bin
  