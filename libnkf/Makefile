TARGET := libnkf.a
SRCS := libnkf.c
OBJS := ${SRCS:.c=.o}
#CC_DBG := -g
CC_OPT :=
CC_INC :=
CFLAGS := ${CC_OPT} ${CC_DBG} ${CC_INC}

all: ${TARGET}

${TARGET}: ${OBJS}
	ar ruv $@ $?
	ranlib $@

clean:
	rm -f ${TARGET}
	rm -f ${OBJS}

install:
	sudo cp ${TARGET} /usr/local/lib/
	sudo cp libnkf.h /usr/local/include/

