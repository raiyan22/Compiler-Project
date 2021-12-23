
@echo off
del run
del m.tab.h
del m.tab.c
del lex.yy.c
cls
bison -d m.y
flex m.l 
gcc lex.yy.c m.tab.c -o run
run