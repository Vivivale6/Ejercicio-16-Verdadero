grafica.pdf : sobres.txt  grafica.py
	python grafica.py
sobres.txt : album
	./album > sobres.txt
album: album.cpp
	c++ album.cpp -o album
