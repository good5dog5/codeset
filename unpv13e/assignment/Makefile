include ../Make.defines

PROGS = np09s_hw1_cli np09s_hw1_serv

np09s_hw1_serv:	np09s_hw1_serv.o
		${CC} ${CFLAGS} -o $@ np09s_hw1_serv.o ${LIBS}
		
np09s_hw1_cli:	np09s_hw1_cli.o
		${CC} ${CFLAGS} -o $@ np09s_hw1_cli.o ${LIBS}
clean:
		rm -f ${PROGS} ${CLEANFILES}
