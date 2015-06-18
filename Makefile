SHELL = /bin/sh
CC=g++
CFLAGS=-Wall -g -std=c++11
RM=rm -f
INCDIR=include
SRCS = main.cpp base.cpp animal.cpp
OBJS = $(SRCS:.cpp=.o)
TARGETEXE = gol

all : $(TARGETEXE)

# $@ is the variable that matches the target name
$(TARGETEXE) : $(OBJS)
	$(CC) -o $@ $(OBJS) $(CFLAGS)

# % is a pattern matcher that matches all filenames without extensions
%.o : %.cpp
	$(CC) -g -o $@ -c $<

.PHONY : clean
clean:
	-$(RM) $(OBJS) $(TARGETEXE)

hello :
	@echo "Hello"

base.o main.o : base.h
animal.o main.o : animal.h
animal.o main.o : main.h
