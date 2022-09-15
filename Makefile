CFILES = src/main.o src/menu.o
CCRUD = src/crud/create.o src/crud/read.o src/crud/update.o src/crud/delete.o
CSESSION = src/session/menu-logged.o src/session/login.o src/session/singup.o src/session/erase.o
CUSER = src/user/modify-user.o src/user/see-balance.o
CINIT = src/init/init.o

CFLAGS = -lsqlite3

all: app

app: headers/header.h $(CFILES) $(CSESSION) $(CCRUD) $(CUSER) $(CINIT)
	gcc -o ex $(CFILES) $(CSESSION) $(CCRUD) $(CUSER) $(CINIT) $(CFLAGS)

src/%.o: src/%.c headers/header.h
	gcc $(CFLAGS) -c $< -o $@
src/crud/%.o: src/crud/%.c
	gcc $(CFLAGS) -c $< -o $@
src/session/%.o: src/session/%.c
	gcc $(CFLAGS) -c $< -o $@
src/user/%.o: src/user/%.c
	gcc $(CFLAGS) -c $< -o $@
src/init/%.o: src/init/%.c
	gcc $(CFLAGS) -c $< -o $@

clean: 
	rm ex $(CFILES) $(CSESSION) $(CCRUD) $(CUSER) $(CINIT) 
