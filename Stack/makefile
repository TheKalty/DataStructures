test: test.o Stack.h BasicNode.h
	g++ test.o -o test

test.o: test.cpp Stack.h BasicNode.h
	g++ -c test.cpp

clean:
	rm -f *.o
	rm test
