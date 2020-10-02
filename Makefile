all: all.out 
all.out : cricket.o ipl.o iop.o  ipltest.o
	g++ $^ -o $@ -lgtest -lgtest_main -lpthread
ipltest.o: ipltest.cpp cricket.h ipl.h iop.h
	g++ $< -c
iop.o : iop.cpp iop.h ipl.h cricket.h
	g++ $< -c
ipl.o : ipl.cpp ipl.h cricket.h
	g++ $< -c    
cricket.o : cricket.cpp cricket.h
	g++ $< -c
clean:
	rm -rf *.o *.out
