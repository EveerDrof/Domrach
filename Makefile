binary:main.o lib.a
	g++ -o binary main.o -L. lib.a
main.o:main.cpp
	g++ -c main.cpp
lib.a: source1.o source2.o source3.o
	ar cr lib.a source1.o source2.o source3.o
source3.o:source3.cpp
	g++ -c source3.cpp
source2.o:source2.cpp
	g++ -c source2.cpp
source1.o:source1.cpp
	g++ -c source1.cpp
clean:
	rm -f *.o *.a binary