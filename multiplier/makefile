CC=g++
CFLAGS=-c -Wall
ICFLAGS=-I/opt/systemc/include
LDFLAGS=-L/opt/systemc/lib-linux64
SYSCFLAGS=-lsystemc
SOURCES=main.cpp mult.cpp testbanch.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=multiplier

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(ICFLAGS) $(OBJECTS) -o $@ $(SYSCFLAGS)

.cpp.o:
	$(CC) $(CFLAGS) $(ICFLAGS) $< -o $@ $(SYSCFLAGS)

clean:
	rm *.o $(EXECUTABLE)
