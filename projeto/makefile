CC=g++
CFLAGS=-c -Wall
ICFLAGS=-I/opt/systemc/include
LDFLAGS=-L/opt/systemc/lib-linux64
SYSCFLAGS=-lsystemc
SOURCES=main.cpp module.cpp testbanch.cpp banco_registradores.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=projeto

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(ICFLAGS) $(OBJECTS) -o $@ $(SYSCFLAGS)

.cpp.o:
	$(CC) $(CFLAGS) $(ICFLAGS) $< -o $@ $(SYSCFLAGS)

clean:
	rm *.o $(EXECUTABLE)
