vpath %.h include  #vpath 指定搜索路径
vpath %.c sub add
vpath %.c unit_test

objects = sub.o test_sub.o
test: test_main.c $(objects)
    gcc -I include $^ -o test -lcheck

all: $(objects)
$(objects): %.o: %.c
    gcc -c -I include $< -o $@

.PHONY: clean
clean:
    rm *.o test

