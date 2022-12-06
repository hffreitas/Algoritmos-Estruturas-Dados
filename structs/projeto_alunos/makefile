
run: main
	./main
main: aluno.o turma.o main.c
	gcc -o main aluno.o turma.o main.c

aluno.o: aluno.c
	gcc -o aluno.o aluno.c -c 

turma.o: turma.c
	gcc -o turma.o turma.c -c 
clean: 
	rm aluno.o main