CC= g++ #Compiler
CFLAGS= -c -Wall -Wextra #Compile Flags (For all errors and warnings)

TARGET = employee #Target is where you name your executable command

all: $(TARGET) #Default target to build program

#Links all object files to make executable
$(TARGET): main.o Employee.o Officer.o Supervisor.o
	$(CC) -o $(TARGET) main.o Employee.o Officer.o Supervisor.o

#Compiles main.cpp and makes main.o
main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

#Compiles Employee.cpp and makes Employee.o
Employee.o: Employee.cpp
	$(CC) $(CFLAGS) Employee.cpp

#Compiles Officer.cpp and makes Officer.o
Officer.o: Officer.cpp
	$(CC) $(CFLAGS) Officer.cpp

#Compiles Supervisor.cpp and makes Supervisor.o
Supervisor.o: Supervisor.cpp
	$(CC) $(CFLAGS) Supervisor.cpp

#Cleans .o, ~, and executable command from main directory: (make clean)
clean:
	rm -f *.o *~ $(TARGET)
