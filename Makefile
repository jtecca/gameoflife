SHELL = /bin/sh
CC=g++
CFLAGS=-Wall -g -v -std=c++0x
RM=rm -f
INCDIR=include
OBJS = main.o base.o
TARGETEXE = main

all : $(TARGETEXE)

# $@ is the variable that matches the target name
$(TARGETEXE) : $(OBJS)
	$(CC) -o $@ $(OBJS) $(CFLAGS)

# % is a pattern matcher that matches all filenames without extensions
%.o : %.cpp
	$(CC) -g -o $@ -c $<

base.o main.o : base.h

.PHONY: clean
clean :
	$(RM) $(OBJS)
	$(RM) $(TARGETEXE)
