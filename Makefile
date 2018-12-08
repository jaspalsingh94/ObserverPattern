########################################
##
## Makefile
## LINUX compilation
##
##############################################


#FLAGS
C++FLAG = -g -std=c++11 -Wall 

#MATH_LIBS = -lm
EXEC_DIR=.

.cpp.o:
	g++ $(C++FLAG) $(INCLUDES) -c $< -o $@

#Including
INCLUDES=  -I.

#-->All libraries (without LEDA)
LIBS_ALL =  -L/usr/lib -L/usr/local/lib

#Subject.o Observer.o
Cpp_OBJ1= main.cpp Concrete_Subject.o Concrete_Observer.o 
PROGRAM_1=MAIN
$(PROGRAM_1): $(Cpp_OBJ1)
	g++ $(C++FLAG) -o $(EXEC_DIR)/$@ $(Cpp_OBJ1) $(INCLUDES) $(LIBS_ALL) $(LDFLAGS)

Cpp_OBJ2= Tests.cpp Concrete_Subject.o Concrete_Observer.o 
PROGRAM_2=TESTS
$(PROGRAM_2): $(Cpp_OBJ2)
	g++ $(C++FLAG) -o $(EXEC_DIR)/$@ $(Cpp_OBJ2) $(INCLUDES) $(LIBS_ALL) $(LDFLAGS)

#Second Program
# Cpp_OBJ2= p2.o image.o DisjSets.o
# PROGRAM_2=p2
# $(PROGRAM_2): $(Cpp_OBJ2)
# 	g++ $(C++FLAG) -o $(EXEC_DIR)/$@ $(Cpp_OBJ2) $(INCLUDES) $(LIBS_ALL)


all:
	make $(PROGRAM_1) $(PROGRAM_2)


clean:
	(rm -f *.o;)

(:
