#include "hpp.hpp"

#define YYERR "\n\n"<<yylineno<<":"<<msg<<"["<<yytext<<"]\n\n"
void yyerror(string msg) { cout<<YYERR; cerr<<YYERR; exit(-1); }

int main(int argc, char *argv[]) {
	for (int i=0;i<argc;i++)
		cout << "argv[ " << i << " ] = " << argv[i] << endl; cout << endl;
	return yyparse();
}

Sym::Sym(string T, string V) { tag=T; val=V; }
Sym::Sym(string V):Sym("sym",V){}
string Sym::dump(int depth) { return "<"+tag+":"+val+">"; }
