parser: scanner.l parser.y header.h
		bison -d parser.y
		flex -o scanner.lex.c scanner.l
		gcc -o $@ parser.tab.c scanner.lex.c parserfunc.c -lm 
clean: 
		rm -f parser parser.tab.h parser.tab.c scanner.lex.c
