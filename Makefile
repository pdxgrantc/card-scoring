cc = g++
exeFile = app
$(exeFile): main.o scorecard.o cell.o
	$(cc) main.o scorecard.o cell.o -o $(exeFile)
main.o: main.cpp
	$(cc) -c main.cpp
scorecard.o: scorecard.cpp
	$(cc) -c scorecard.cpp
cell.o: cell.cpp
	$(cc) -c cell.cpp

clean:
	rm -f *.o app