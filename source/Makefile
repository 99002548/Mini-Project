BUILD = build
TEST_SRC = source
TEST_OUTPUT = $(BUILD)/all.out
all: all.out 
all.out : cricket.o ipl.o insightsofipl.o  ipltest.o ioptest.o
	g++ $^ -o $@ -lgtest -lgtest_main -lpthread
ioptest.o: ioptest.cpp  cricket.h ipl.h insightsofipl.h
	g++ $< -c
ipltest.o: ipltest.cpp  cricket.h ipl.h 
	g++ $< -c	
insightsofipl.o : insightsofipl.cpp insightsofipl.h ipl.h cricket.h
	g++ $< -c
ipl.o : ipl.cpp ipl.h cricket.h
	g++ $< -c    
cricket.o : cricket.cpp cricket.h
	g++ $< -c
clean:
	rm -rf *.o *.out


test:$(BUILD)
	gcc $(TEST_SRC) -o $(TEST_OUTPUT) -lcunit
	./$(TEST_OUTPUT)
	
	
	

