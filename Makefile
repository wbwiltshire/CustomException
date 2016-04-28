CC=g++
CFLAGS=-c -Wall -g
#CFLAGS=-c -Wall
CPPFLAGS=
LDFLAGS=
SOURCES=main.cpp main.h
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=customException

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) -o $@ $(LDFLAGS)
	chmod 755 $(EXECUTABLE)

.cpp.o:
	$(CC) $(CFLAGS) $(CPPFLAGS) $< -o $@

clean:
	rm -f customException
	rm -f *.o
