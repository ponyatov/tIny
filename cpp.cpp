#include "hpp.hpp"

#define YYERR "\n\n"<<yylineno<<":"<<msg<<"["<<yytext<<"]\n\n"
void yyerror(string msg) { cout<<YYERR; cerr<<YYERR; exit(-1); }

int main(int argc, char *argv[]) {
	for (int i=0;i<argc;i++)
		cout << "argv[ " << i << " ] = " << argv[i] << endl;
	return yyparse();
}

Sym::Sym(string V) { val=V; }
string Sym::dump(int depth) { return "<"+val+">"; }
