
CXXFLAGS = -std=c++11 -Wall

main.out: main.cpp other.o
	g++ ${CXXFLAGS} main.cpp other.o -o main.out

other.o: other.cpp
	g++ ${CXXFLAGS} -c other.cpp -o other.o

clean:
	rm main.out other.o
