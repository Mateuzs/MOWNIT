CC=gcc
GSL_HOME=

CFLAGS=-I$(GSL_HOME)/include
LDFLAGS=-L$(GSL_HOME)/lib -lgsl -lgslcblas -lm 

all: dokladnosc

dokladnosc: dokladnosc.o
	$(CC) $(LDFLAGS) -o $@ $^

clean:
	rm -f *.o