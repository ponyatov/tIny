#ifndef _H_HPP
#define _H_HPP

#include <cstdlib>
#include <iostream>

using namespace std;

struct Sym {
	string tag,val;
	Sym(string);
	virtual string dump(int depth=0);
};

extern int yylex();
extern int yylineno;
extern char* yytext;
#define TOC(C,X) { yylval.o = new C(yytext); return X; }
extern int yyparse();
extern void yyerror(string);
#include "ypp.tab.hpp"

#endif // _H_HPP
