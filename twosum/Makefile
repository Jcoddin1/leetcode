all:	twosum.cpp
	g++ -g -Wall -o twosum twosum.cpp

test:	twosum test1.txt
	./twosum

gdb:	twosum
	gdb twosum

clean:
	rm -R twosum *.dSYM
