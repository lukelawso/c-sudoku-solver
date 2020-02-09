CXX = g++
CXXFLAGS = -std=c++14 -Wall -MMD -g 
EXEC = Sudoku.exe
OBJECTS = main.o board.o graphics.o textdisplay.o
DEPENDS = ${OBJECTS:.o=.d}

${EXEC}: ${OBJECTS}
	${CXX} ${CXXFLAGS} ${OBJECTS} -o ${EXEC}

-include ${DEPENDS}

.phony: clean

clean:
	rm ${OBJECTS} ${EXEC} ${DEPENDS}
