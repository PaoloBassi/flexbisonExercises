parser: scanner.l parser.y header.h
		bison -d parser.y
		flex -o scanner.lex.c scanner.l
		cc -o $@ parser.tab.c scanner.lex.c parserfunc.c 
