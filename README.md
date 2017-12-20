# ¡Acepta el reto!

Aquí están mis soluciones a varios problemas de [Acepta el Reto](https://www.aceptaelreto.com). Para aquellos retos en los que tenga más de una solución, la aquí subida será la que mejor puntuación me haya dado (en principio).

El objetivo sería intentar encontrar el fallo en tu código para poder corregirlo, *(de cualquier forma, no voy a ser yo quien te juzgue si copias descaradamente ;)*

Del mismo modo, si encuentras mi fallo en uno de los que no haya conseguido resolver, la ayuda siempre es de agradecer.

Lista de ejercicios subidos:
------
Reto | Veredicto
--- | :---:
[100 - Constante de Kaprekar:](https://www.aceptaelreto.com/problem/statement.php?id=100) | Accepted 
[109 - Liga de pádel:](https://www.aceptaelreto.com/problem/statement.php?id=109) | Accepted
[115 - Número de Kaprekar:](https://www.aceptaelreto.com/problem/statement.php?id=115) | Accepted
[116 - ¡Hola Mundo!:](https://www.aceptaelreto.com/problem/statement.php?id=116) | Accepted
[127 - Una, dola, tela, catola... :](https://www.aceptaelreto.com/problem/statement.php?id=127) | Accepted
[129 - Marcadores de 7 segmentos:](https://www.aceptaelreto.com/problem/statement.php?id=129) | **Memory limit exceeded**
[140 - Suma de dígitos:](https://www.aceptaelreto.com/problem/statement.php?id=140) | Accepted
[141 - Paréntesis balanceados:](https://www.aceptaelreto.com/problem/statement.php?id=141) | Accepted
[143 - Tortitas:](https://www.aceptaelreto.com/problem/statement.php?id=143) | Accepted
[145 - El tren del amor:](https://www.aceptaelreto.com/problem/statement.php?id=145) | Accepted
[146 - Números afortunados:](https://www.aceptaelreto.com/problem/statement.php?id=146) | Accepted
[152 - Va de modas... :](https://www.aceptaelreto.com/problem/statement.php?id=152) | Accepted
[161 - Cálculo de la Mediana:](https://www.aceptaelreto.com/problem/statement.php?id=161) | Accepted
[182 - Persistencia multiplicativa de los números:](https://www.aceptaelreto.com/problem/statement.php?id=182) | Accepted
[195 - Saltos de trampolín:](https://www.aceptaelreto.com/problem/statement.php?id=195) | Accepted
[198 - Evaluando expresiones:](https://www.aceptaelreto.com/problem/statement.php?id=198) | Accepted
[214 - Abdicación de un Rey:](https://www.aceptaelreto.com/problem/statement.php?id=214) | Accepted
[236 - Los orígenes del ajedrez:](https://www.aceptaelreto.com/problem/statement.php?id=236) | Accepted
[238 - Repartiendo el botín:](https://www.aceptaelreto.com/problem/statement.php?id=238) | Accepted
[263 - El cuadrado de Rubik:](https://www.aceptaelreto.com/problem/statement.php?id=263) | Accepted
[266 - Copistas daltónicos:](https://www.aceptaelreto.com/problem/statement.php?id=266) | **Memory limit exceeded**
[268 - Desarrollos en las bicicletas:](https://www.aceptaelreto.com/problem/statement.php?id=268) | Accepted
[270 - Me pilló el toro:](https://www.aceptaelreto.com/problem/statement.php?id=270) | Accepted
[284 - La tienda de la esquina:](https://www.aceptaelreto.com/problem/statement.php?id=284) | Accepted
[291 - Referencias cruzadas:](https://www.aceptaelreto.com/problem/statement.php?id=291) | Accepted
[310 - Altura de un árbol general:](https://www.aceptaelreto.com/problem/statement.php?id=310) | Accepted
[317 - El código de la T.I.A.:](https://www.aceptaelreto.com/problem/statement.php?id=317) | **Wrong answer**
[337 - La abuela María:](https://www.aceptaelreto.com/problem/statement.php?id=337) | Accepted
[347 - Haciendo pajaritas de papel:](https://www.aceptaelreto.com/problem/statement.php?id=347) | Accepted
[349 - Jan el olvidado:](https://www.aceptaelreto.com/problem/statement.php?id=349) | Accepted
[353 - El cazatesoros:](https://www.aceptaelreto.com/problem/statement.php?id=353) | **Time limit exceeded**
[397 - ¿Es múltiplo de 3?:](https://www.aceptaelreto.com/problem/statement.php?id=397) | Accepted

**NOTA: todos los códigos están compilados con GCC. Algunos son viejos y dan pena, otros siguen el estándar de C++11.**

Si os dieran problemas al compilar, os dejo los aliases que suelo utilizar en *bash*, generalmente uso *e++11*:
```bash
# Añadidlo a vuestro .bashrc o similar
export CFLAGS='-Wall -Wextra -pedantic -g'
export CCFLAGS="${CFLAGS} -Wold-style-cast -Woverloaded-virtual"
alias g++11='\g++ -g -std=c++11'
alias w++11='\g++ ${CFLAGS} -std=c++11'
alias e++11='\g++ ${CCFLAGS} -Weffc++ -Werror -std=c++11'
alias g++14='\g++ -g -std=c++14'
alias w++14='\g++ ${CFLAGS} -std=c++14'
alias e++14='\g++ ${CCFLAGS} -Weffc++ -Werror -std=c++14'
``` 