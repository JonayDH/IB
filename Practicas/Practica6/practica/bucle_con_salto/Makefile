# Introducir el nombre del archivo sin el .cc
programa = bucle_con_salto

# Reglas del compilador
CXX = g++ 
CXXFLAGS = -std=c++17 -Wall 
 
# Crea un ejecutable a partir de un .o
$(programa): $(programa).o
	$(CXX) $(CXXFLAGS) -o $(programa) $(programa).o

# Crea un .o a partir de un .cc
$(programa).o: $(programa).cc
	$(CXX) $(CXXFLAGS) -c $(programa).cc -o $(programa).o

# Indica que el objetivo "clean" no es un archivo:
.PHONY: clean

# Borra los .o y los ejecutable en caso de ser necesario con make clean
clean:
	rm -f $(programa).o $(programa)

