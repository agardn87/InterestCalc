GXX=gcc
GFLAGS=-Wall
BUILDTARGETS=part-b-problem-1

clean: 
	rm $(BUILDTARGETS)

part-b-problem-1: part-b-problem-1.c
	$(GXX) $(GFLAGS) part-b-problem-1.c -o part-b-problem-1
