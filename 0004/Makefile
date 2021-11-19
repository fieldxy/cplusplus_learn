main: main.o grade.o student_info.o median.o
	g++ -o main main.o grade.o student_info.o median.o

main.o: main.cpp student_info.h grade.h
	g++ -c main.cpp

grade.o : grade.cpp grade.h
	g++ -c grade.cpp
median.o : median.cpp median.o
	g++ -c median.cpp

.PHONY : clean
clean :
	-rm -rf main *.o
