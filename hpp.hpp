#ifndef _H_HPP
#define _H_HPP

#include <iostream>
#include <cstdlib>

using namespace std;

struct Sym {							// === [sym]bol
	string tag,val;						// tag (class, type) and item value
	Sym(string T,string V);				// <tag:value>	constructor
	Sym(string V);						// <sym:V>		contructor
	virtual string dump(int depth=0);	// dump element
};

extern int yylex();
extern int yylineno;
extern char* yytext;
#define TOC(C,X) { yylval.o = new C(yytext); return X; }
extern int yyparse();
extern void yyerror(string);
#include "ypp.tab.hpp"

#endif // _H_HPP
