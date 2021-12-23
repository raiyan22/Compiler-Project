%{
	#include "m.tab.h"
	#include <string.h>
	#include <stdlib.h>
	int yyparse();
	int yylex();
	int yyerror();
%}

letter [a-zA-Z]
digit [0-9]
special [$_@]
newline [\n]
space [ \t]

%option yylineno

%%

"!import"{space}+{letter}+{digit}*"!"\n 	{ /*header*/ printf("header file found\n");}
"#".*\n 				{ /*This is comment*/ }
"//"[^$]*"//" 			{ /*multi line comment*/ }
"," 		 			{ return COMMA;}
";"			 			{ return SEMICOLON;}
"run" 					{ return RUN;}
{digit}+ 				{ yylval.value = atoi(yytext); return NUMBER;}
"int" 					{ return INT;}
"double" 				{ return DOUBLE;}
"char" 					{ return CHAR;}

"sv<<" 					{ return PRINTVAR;}
"ss<<" 					{ return PRINTSTR;}
"nl" 					{ return PRINTLN;}
"sf<<"					{ return PRINTFUNC;}

"function"{space}+{letter}+ 		{ return UDFUNCTION;}

"{" 			{return BB;}
"}" 			{return BE;}
"(" 			{return PB;}
")" 			{return PE;}
"=" 			{return ASSIGN;}
"+" 			{return PLUS;}
"-" 			{return MINUS;}
"*" 			{return MULTIPLY;}
"/" 			{return DIVIDE;}
"%" 			{return MOD;}
"<" 			{return LESSTHAN;}
">" 			{return GREATERTHAN;}
"<=" 			{return LESSEQUAL;}
">=" 			{return GREATEREQUAL;}
"===" 			{return EQUAL;}
"!==" 			{return NOTEQUAL;}

"MAX"  			{return MAXNUMBER;}
"MIN"  			{return MINNUMBER;}
"And" 			{return COMPARE;}
"and" 			{return COMPAREREVERSE;}
"REVSTR" 		{return REVERSE;}
"SORT" 			{return SORT;}
"FACT"			{return FACT;}
"ODDEVEN"		{return ODDEVEN;}
"SUMDIGIT"		{return SUMDIGIT;}
"REVNUM"		{return REVNUM;}
"sin" 			{return SINFUNC;}
"cos" 			{return COSFUNC;}
"tan" 			{return TANFUNC;}
"log10"			{return LOG10FUNC;}
"log" 			{return LOGFUNC;}
"gcd" 			{return GCDFUNC;}
"lcm" 			{return LCMFUNC;}
"^" 			{return POWERFUNC;}

"if"			{return IF;}
"else"			{return ELSE;}
"elseif"		{return ELSEIF;}

"for"			{return FOR;}
"->"			{return TO;}
":"				{return COLON;}

"switch"		{return SWITCH;}
"default"		{return DEFAULT;}

"\""(.)*"\"" 	{strcpy(yylval.text,yytext);return STR; /* \ is the esc seq */}
({letter}|{digit}|{special})+ 		{ strcpy(yylval.text,yytext); return ID;}
{space}|{newline} 	{}
. 				{printf("ERROR ON LINE %d : \n Invalid Token \n", yylineno);}


%%
int yywrap() {return 1;}
int main(){
	yyin = freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	yyparse();
}