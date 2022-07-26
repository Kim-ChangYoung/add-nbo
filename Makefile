all: add-nbo

add-nbo: add-nbo.o
	gcc -o add-nbo add-nbo.cpp

add-nbo.o: add-nbo.cpp
	g++ -c -o add-nbo.o add-nbo.cpp

clean:
	rm -f add-nbo
	rm -f *.o
