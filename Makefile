cc = g++
exeFile = app
$(exeFile): main.o
	$(cc) main.o -o $(exeFile)
main.o: main.cpp
	$(cc) -c main.cpp
scoreboard.o: scoreboard.cpp
	$(cc) -c scoreboard.cpp

clean:
	rm -f *.o app