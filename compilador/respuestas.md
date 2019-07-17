1)PRECOMPILACIÓN (PREPROCESADOR)
es obligatorio en C (no así en Fortran), maneja directivas # como los includes y macros, en este caso:
<calculator.h>

luego de ejecutar:
gcc -E calculator.c -o calculator.pp.c 
detengo la compilación en el preproceso y accedo al archivo (.pp.c) con la info que antes estaba totalmente oculta en el header y ahora está explícita.

2)COMPILACION1
es obligatorio en C y en Fortran.

luego de ejecutar:
gcc -S calculator.c -o calculator.asm.c 
detengo la compilación en esta parte , creando un archivo .asm.c con la info del código crípticamente escrita en assembler

3)COMPILACION2
es obligatorio en C y en Fortran.

luego de ejecutar:
gcc -c calculator.c -o calculator.o 
detenemos el proceso de compilación en esta parte, no podemos ver algo en un archivo como veníamos haciendo antes y finalmente se genera el archivo objeto (.o)que está en lenguaje máquina y ,si bien no lo podemos leer, podemos tratar de sacar información ejecutando 
nm calculator.o 
y obtenemos:

000000000000003e T add_numbers
                 U _GLOBAL_OFFSET_TABLE_
0000000000000000 T main
                 U printf

Donde podemos identificar los símbolos: T y U.
descriptores (T) e inputs (U)donde U es por Undifined

4)LINKEO
En este punto el objeto ya está en binario pero todavía no puede ejecutarse, para eso se usa el linker.

Ejecutando 
gcc -v calculator.c -o calculator.e
obtengo en consola un gaimatías de librerías de linux pero finalmente tengo el ejecutable que usualmente resulta de compilar sin ningún flag de detención:

calculator.e

Ahora hago otro nm calculator.e y aparecen muchos más simbolos
Puedo contestar la pregunta: ¿En que se diferencian los imbolos del objeto del ejecutable?





