// Declarations for a calculator

// Inteface to the lexer 
extern int yylineno; // from the lexer
void yyerror(char *s, ...);

// nodes in the AST
struct ast{
    int nodetype;
    struct ast *l;
    struct ast *r;
};

struct numval{
    int nodetype;   // type K for constant
    double number;
};

// build an AST
struct ast *newast(int nodetype, struct ast *l, struct ast *r);
struct ast *newnum(double d);

// evaluate an AST
double eval(struct ast *);

// delete and free an AST
void treefree(struct ast *);
