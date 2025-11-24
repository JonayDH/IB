# Nombre del ejecutable final
programa = reversing_list4

# Busca todos los .cc del directorio actual
codigos = $(wildcard *.cc)

# Genera la lista de objetos correspondientes (.o)
objetos = $(codigos:.cc=.o)

# Reglas del compilador
CXX = g++
CXXFLAGS = -std=c++17 -Wall 

# Compila el ejecutable
all: $(programa)
 
# Crea un ejecutable a partir de los .o
$(programa): $(objetos)
	$(CXX) $(CXXFLAGS) -o $@ $(objetos)

# Crea los .o a partir de los .cc
%.o: %.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Indica que el objetivo "clean y all" no son archivos:
.PHONY: clean all

# Borra los .o y los ejecutable en caso de ser necesario con make clean
clean:
	rm -f $(programa) $(objetos)
