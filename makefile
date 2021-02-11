driver: driver.o word_finder.o
	g++ -o driver driver.o word_analyzer.o

driver.o: driver.cpp word_analyzer.h
	g++ -c driver.cpp
	
word_analyzer.o: word_analyzer.cpp word_analyzer.h
	g++ -c word_analyzer.cpp
	
clean:
	rm *.o a.out
