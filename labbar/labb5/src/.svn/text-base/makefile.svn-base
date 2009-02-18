all: uppg5.cpp Calculator.o Operand_Handler.o Operator_Handler.o Postfix.o
	g++ -o uppg5  uppg5.cpp Calculator.o Operand_Handler.o Operator_Handler.o Postfix.o

Calculator.o: Calculator.cpp Calculator.h
	g++ -c Calculator.cpp

Operand_Handler.o: Operand_Handler.cpp Operand_Handler.h Token_Handler.h
	g++ -c Operand_Handler.cpp

Operator_Handler.o: Operator_Handler.cpp Operator_Handler.h Token_Handler.h
	g++ -c Operator_Handler.cpp

Postfix.o: Postfix.cpp Postfix.h
	g++ -c Postfix.cpp

uppg5.cpp: uppg5.cpp
	g++ -c uppg5.cpp
