
all: com_a

COM_A_OBJS=com_a.o gh_lib.o

com_a: ${COM_A_OBJS} gh_lib.h
	gcc ${COM_A_OBJS} -o com_a

clean:
	rm *.o
	rm com_a
