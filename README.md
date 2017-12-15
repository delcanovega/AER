# ¡Acepta el reto!

Aquí están mis soluciones a varios problemas de [Acepta el Reto](https://www.aceptaelreto.com). Para aquellos retos en los que tenga más de una solución, la aquí subida será la que mejor puntuación me haya dado (en principio).

El objetivo sería intentar encontrar el fallo en tu código para poder corregirlo, *(de cualquier forma, no voy a ser yo quien te juzgue si copias descaradamente ;)*

Del mismo modo, si encuentras mi fallo en uno de los que no haya conseguido resolver, la ayuda siempre es de agradecer.

Lista de ejercicios subidos:
------
* **[100 - Constante de Kaprekar:](https://www.aceptaelreto.com/problem/statement.php?id=100)** Accepted. 
* **[109 - Liga de pádel:](https://www.aceptaelreto.com/problem/statement.php?id=109)** Accepted. 
* **[115 - Número de Kaprekar:](https://www.aceptaelreto.com/problem/statement.php?id=115)** Accepted. 
* **[116 - ¡Hola Mundo!:](https://www.aceptaelreto.com/problem/statement.php?id=116)** Accepted. 
* **[127 - Una, dola, tela, catola... :](https://www.aceptaelreto.com/problem/statement.php?id=127)** Accepted. 
* **[129 - Marcadores de 7 segmentos:](https://www.aceptaelreto.com/problem/statement.php?id=129)** Memory limit exceded. 
* **[140 - Suma de dígitos:](https://www.aceptaelreto.com/problem/statement.php?id=140)** Accepted.
* **[141 - Paréntesis balanceados:](https://www.aceptaelreto.com/problem/statement.php?id=141)** Accepted.
* **[143 - Tortitas:](https://www.aceptaelreto.com/problem/statement.php?id=143)** Accepted.
* **[145 - El tren del amor:](https://www.aceptaelreto.com/problem/statement.php?id=145)** Accepted.
* **[146 - Números afortunados:](https://www.aceptaelreto.com/problem/statement.php?id=146)** Accepted.
* **[152 - Va de modas... :](https://www.aceptaelreto.com/problem/statement.php?id=152)** Accepted.
* **[161 - Cálculo de la Mediana:](https://www.aceptaelreto.com/problem/statement.php?id=161)** Accepted.
* **[182 - Persistencia multiplicativa de los números:](https://www.aceptaelreto.com/problem/statement.php?id=182)** Accepted.
* *Quedan más por subir...* 

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