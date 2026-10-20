SRCS = main.c math.c
OBJS = $(SRCS:.c=.o)

program: $(OBJS)
	gcc -o $@ $^

%.o: %.c
	gcc -c $^ -o $@

clean: 
	rm *.o program
.PHONY: clean