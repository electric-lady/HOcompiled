Creo .o haciendo:

>>make visibility.o 

en el directorio donde está el source code
 luego, ejecutando:

>>nm visibility.o

obtengo 

0000000000000000 t add_abs
                 U _GLOBAL_OFFSET_TABLE_
000000000000002a T main
                 U printf
0000000000000000 r val1
0000000000000004 R val2
0000000000000000 d val3
0000000000000004 D val4


con los símbolos: t, U, T, U, r, R, d y D.
