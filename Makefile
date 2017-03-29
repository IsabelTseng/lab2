main6: ELO.o main.o
	g++ -o ELO main.o ELO.o

ELO.o: ELO.cpp ELO.h
	g++ -c ELO.cpp

main6.o: main.cpp ELO.h
	g++ -c main.cpp

clean:
	rm *.o
