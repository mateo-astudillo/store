OBJS = src/main.o src/menu.o \
 src/crud/create.o src/crud/read.o src/crud/update.o src/crud/delete.o \
 src/session/menu-logged.o src/session/login.o src/session/singup.o src/session/erase.o \
 src/user/modify-user.o src/user/see-balance.o \
 src/init/init.o

CFLAGS = -lsqlite3

all: app

app: headers/header.h $(OBJS)
	gcc -o ex $(OBJS) $(CFLAGS)

src/%.o: src/%.c 
	gcc -c -o $@ $<
src/crud/%.o: src/crud/%.c
	gcc -c -o $@ $<
src/session/%.o: src/session/%.c
	gcc -c -o $@ $<
src/user/%.o: src/user/%.c
	gcc -c -o $@ $<
src/init/%.o: src/init/%.c
	gcc -c -o $@ $<

clean: 
	rm ex $(CFILES) $(CSESSION) $(CCRUD) $(CUSER) $(CINIT) 
