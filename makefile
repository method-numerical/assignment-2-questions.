
result: b.out
	./b.out

b.out: t.out
	gcc use_makefile.c -o b.out

t.out: square_arrays.c
	gcc -c square_arrays.c -o t.out
