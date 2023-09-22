pi.out: pi.c
	gcc -o pi.out pi.c

clean:
	rm -f ./*.out