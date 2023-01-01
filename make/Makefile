CC = clang
CFLAGS = -g -O2 -Wall -Wextra

SRCS = list.c main.c
OBJS = $(SRCS:.c=.o)
BIN = list-example

all: $(BIN)

.PHONY: clean all

$(OBJS): %.o:%.c
	$(CC) $(CFLAGS) $< -c -o $@

$(BIN): $(OBJS)
	$(CC) $(OBJS) -o $(BIN) $(LDLIBS)

clean:
	rm -f $(OBJS) $(BIN)