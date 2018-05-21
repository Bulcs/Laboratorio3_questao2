banco: main.o cabecalho.o conta.o procedimentos.o
	g++ -o banco -Wall -pedantic -O0 -g -std=c++11 main.cpp cabecalho.cpp conta.cpp procedimentos.cpp

main.o: main.cpp cabecalho.cpp cabecalho.h conta.h procedimentos.h
	g++ -o banco -Wall -pedantic -O0 -g -std=c++11 -c main.cpp

cabecalho.o: cabecalho.cpp cabecalho.h procedimentos.h conta.h
	g++ -o banco -Wall -pedantic -O0 -g -std=c++11 -c cabecalho.cpp

procedimentos.o: procedimentos.cpp cabecalho.h conta.h procedimentos.h
	g++ -o banco -Wall -pedantic -O0 -g -std=c++11 -c procedimentos.cpp

conta.o: conta.cpp conta.h
	g++ -o banco -Wall -pedantic -O0 -g -std=c++11 -c conta.cpp

clean:
	rm*.o banco