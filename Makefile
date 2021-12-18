cc = g++
exeFile = app
$(exeFile): main.o scorecard.o
	$(cc) main.o scorecard.o -o $(exeFile)
main.o: main.cpp
	$(cc) -c main.cpp
scorecard.o: scorecard.cpp
	$(cc) -c scorecard.cpp

clean:
	rm -f *.o app