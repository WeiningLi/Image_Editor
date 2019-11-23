CXX = g++-5
CXXFLAGS = -g -std=c++14 -no-pie -Wall -MMD -Werror=vla
EXEC = editor
OBJECTS = main.o ppm.o image.o exception.o basic.o decorator.o rotate.o flip.o sepia.o
DEPENDS = ${OBJECTS:.o=.d}

${EXEC}: ${OBJECTS}
	${CXX} ${CXXFLAGS} ${OBJECTS} -o ${EXEC}

-include ${DEPENDS}

.PHONY: clean

clean:
	rm ${OBJECTS} ${EXEC} ${DEPENDS}

