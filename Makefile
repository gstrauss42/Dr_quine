all:
	gcc -o Colleen Colleen.c
	gcc -o Grace Grace.c
	gcc -o Sully Sully.c

clean:
	rm Colleen
	rm Grace
	rm Sully
	rm Sully_*
	rm Grace_kid.c
