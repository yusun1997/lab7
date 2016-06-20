lab7:tetris.o genMino.o MinoJ.o MinoI.o MinoZ.o Mino.o
	g++ -o lab7 tetris.o genMino.o MinoJ.o MinoI.o MinoZ.o Mino.o
genMino.o:genMino.cpp genMino.h
	g++ -c genMino.cpp
tetris.o:tetris.cpp genMino.h
	g++ -c tetris.cpp
MinoJ.o:MinoJ.cpp MinoJ.h
	g++ -c MinoJ.cpp
MinoI.o:MinoI.cpp MinoI.h
	g++ -c MinoI.cpp
MinoZ.o:MinoZ.cpp MinoZ.h
	g++ -c MinoZ.cpp
Mino.o:Mino.cpp Mino.h
	g++ -c Mino.cpp
	
