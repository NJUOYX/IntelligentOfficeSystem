CC = gcc
CFLAGS = -I ./include/ ../debug/
LIBS = 
CFILES = $(shell find -name "*c")
OBJS = $(CFILES:.c=.o)

exc:$(OBJS):
	$(CC) $^ -o $@

clean:
	rm $(OBJS) exc 
