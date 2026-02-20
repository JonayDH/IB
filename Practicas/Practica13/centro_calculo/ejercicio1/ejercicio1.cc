/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file ejercicio1.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Dic 12 2025
  * @brief Descripción de lo que hace el programa  
  * @bug There are no known bugs
  * @see https://github.com/IB-2025-2026/p13-oop-JonayDH
  *
  * This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License 
  * as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
  *
  * This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of 
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
  *
  * You should have received a copy of the GNU General Public License along with this program. If not, see <https://www.gnu.org/licenses/>. 
  */

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

enum class Posicion { 

  Alero, 
  Pivot, 
  Base, 
  Escolta, 

};

std::string PosicionAString(Posicion posicion) {

  switch (posicion) {

    case Posicion::Base:

      return "Base";
      break;

    case Posicion::Alero: 
    
      return "Alero";
      break;

    case Posicion::Escolta: 
    
      return "Escolta";
      break;

    case Posicion::Pivot: 
    
      return "Pivot";
      break;
  }

  return "Desconocido";
}

class Persona {

 public:

  Persona(const std::string& nombre, int edad, const std::string& dni) : nombre_(nombre), edad_(edad), dni_(dni) {}

  void PrintDatos() const {
    
    std::cout << nombre_ << ", " << edad_ << "años, " << dni_;
  }

  std::string GetNombre() const { 
    
    return nombre_; 
  }

  int GetEdad() const { 

    return edad_; 
  }

  std::string GetDni() const { 
    
    return dni_; 
  }

 private:

  std::string nombre_;
  int edad_;
  std::string dni_;
};

class Jugador : public Persona {

 public:

  Jugador(const std::string& nombre, int edad, const std::string& dni, double altura, double peso, Posicion posicion) : Persona(nombre, edad, dni), altura_(altura), peso_(peso), posicion_(posicion) {}

  double GetAltura() const {

    return altura_; 
  }

  double GetPeso() const {

    return peso_; 
  }

  Posicion GetPosicion() const {

    return posicion_; 
  }

  void PrintDatos() const {

    std::cout << GetNombre() << " " << GetEdad() << " años, " << GetDni() << ", " << PosicionAString(posicion_) << ", " << altura_ << "m, " << peso_ << "kg";
  }

 private:

  double altura_;
  double peso_;
  Posicion posicion_;
};

class Entrenador : public Persona {

 public:

  Entrenador(const std::string& nombre, int edad, const std::string& dni, const std::string& licencia, const std::string& fecha_inicio, const std::string& fecha_fin) : Persona(nombre, edad, dni), licencia_(licencia), fecha_inicio_(fecha_inicio), fecha_fin_(fecha_fin) {}

  void PrintDatos() const {

    std::cout << GetNombre() << " " << GetEdad() << "años, " << GetDni() << ", " << licencia_ << ", " << fecha_inicio_ << "-" << fecha_fin_;
  }

 private:
 
  std::string licencia_;
  std::string fecha_inicio_;
  std::string fecha_fin_;
};

class Ayudante : public Persona {

 public:

  Ayudante(const std::string& nombre, int edad, const std::string& dni, const std::string& fecha_inicio, const std::string& fecha_fin) : Persona(nombre, edad, dni), fecha_inicio_(fecha_inicio), fecha_fin_(fecha_fin) {}

  void PrintDatos() const {

    std::cout << GetNombre() << " " << GetEdad() << " años" << ", " << GetDni() << ", " << fecha_inicio_ << "-" << fecha_fin_;
  }

 private:

  std::string fecha_inicio_;
  std::string fecha_fin_;
};

class Equipo_Baloncesto {

 public:

  Equipo_Baloncesto(const std::string& nombre, const std::string& ciudad) : nombre_(nombre), ciudad_(ciudad) {}
  ~Equipo_Baloncesto() {}

  void AgregarJugador(const Jugador& jugador) { 
    
    jugadores_.push_back(jugador); 
  }

  void AgregarEntrenador(const Entrenador& entrenador) { 
    
    entrenadores_.push_back(entrenador); 
  }

  void AgregarAyudante(const Ayudante& ayudante) { 
    
    ayudantes_.push_back(ayudante); 
  }

  double AlturaMedia() const {

    double suma{};
    int jugadores = static_cast<int>(jugadores_.size());

    for (int i = 0; i < jugadores; ++i) {

      suma += jugadores_[i].GetAltura();
    }

    return suma / jugadores;
  }

  double PesoMedio() const {

    double suma{};
    int jugadores = static_cast<int>(jugadores_.size());
    for (int i = 0; i < jugadores; ++i) {

      suma += jugadores_[i].GetPeso();
    }
    return suma / jugadores;
  }

 private:
  std::string nombre_;
  std::string ciudad_;
  std::vector<Jugador> jugadores_;
  std::vector<Entrenador> entrenadores_;
  std::vector<Ayudante> ayudantes_;
};

int main() {

  Equipo_Baloncesto Partizan("Partizan", "Sevilla");

  Partizan.AgregarJugador(Jugador("Robert", 27, "12345678X", 1.96, 85, Posicion::Escolta));
  Partizan.AgregarJugador(Jugador("Marcos", 28, "12345678X", 1.92, 88, Posicion::Base));
  Partizan.AgregarJugador(Jugador("Ivan", 30, "12345678X", 1.98, 92, Posicion::Alero));
  Partizan.AgregarJugador(Jugador("Paco", 18, "12345678X", 2.00, 90, Posicion::Alero));
  Partizan.AgregarJugador(Jugador("Gonzalo", 24, "12345678X", 2.05, 100, Posicion::Pivot));
  Partizan.AgregarJugador(Jugador("Robert", 67, "12345678X", 1.96, 85, Posicion::Escolta));
  Partizan.AgregarJugador(Jugador("Marcos", 28, "12345678X", 1.92, 88, Posicion::Base));
  Partizan.AgregarJugador(Jugador("Ivan", 30, "12345678X", 1.98, 92, Posicion::Alero));
  Partizan.AgregarJugador(Jugador("Paco", 29, "12345678X", 2.00, 90, Posicion::Alero));
  Partizan.AgregarJugador(Jugador("Gonzalo", 24, "12345678X", 2.05, 100, Posicion::Pivot));
  Partizan.AgregarJugador(Jugador("Robert", 17, "12345678X", 1.96, 85, Posicion::Escolta));
  Partizan.AgregarJugador(Jugador("Marcos", 28, "12345678X", 1.92, 88, Posicion::Base));
  Partizan.AgregarEntrenador(Entrenador("Pepe", 56, "12345678X", "123", "2024", "2026"));
  Partizan.AgregarEntrenador(Entrenador("Pepo", 30, "12345678X", "123", "2024", "2026"));
  Partizan.AgregarEntrenador(Entrenador("Pepa", 50, "12345678X", "123", "2024", "2026"));
  Partizan.AgregarAyudante(Ayudante("Julio", 40, "12345678X", "2024", "2026"));
  Partizan.AgregarAyudante(Ayudante("Julia", 46, "12345678X", "2024", "2026"));
  Partizan.AgregarAyudante(Ayudante("Junio", 79, "12345678X", "2024", "2026"));

  std::cout << "Datos de Partizan: " << std::endl << std::endl;
  std::cout << "Peso Medio: " << std::setprecision(4) << Partizan.PesoMedio() << "kg" << std::endl;
  std::cout << "Altura Media: " << std::setprecision(3) << Partizan.AlturaMedia() << "m" << std::endl << std::endl;

  Equipo_Baloncesto Pireos("Pireos", "Madrid");

  Pireos.AgregarJugador(Jugador("Robert2", 27, "12345678X", 2.36, 55, Posicion::Escolta));
  Pireos.AgregarJugador(Jugador("Marcos2", 28, "12345678X", 1.92, 78, Posicion::Base));
  Pireos.AgregarJugador(Jugador("Ivan2", 30, "12345678X", 1.98, 62, Posicion::Alero));
  Pireos.AgregarJugador(Jugador("Paco2", 18, "12345678X", 1.60, 80, Posicion::Alero));
  Pireos.AgregarJugador(Jugador("Gonzalo2", 24, "12345678X", 1.25, 60, Posicion::Pivot));
  Pireos.AgregarJugador(Jugador("Robert2", 67, "12345678X", 1.56, 55, Posicion::Escolta));
  Pireos.AgregarJugador(Jugador("Marcos2", 28, "12345678X", 1.32, 70, Posicion::Base));
  Pireos.AgregarJugador(Jugador("Ivan2", 30, "12345678X", 1.58, 52, Posicion::Alero));
  Pireos.AgregarJugador(Jugador("Paco2", 29, "12345678X", 1.70, 50, Posicion::Alero));
  Pireos.AgregarJugador(Jugador("Gonzalo2", 24, "12345678X", 1.45, 80, Posicion::Pivot));
  Pireos.AgregarJugador(Jugador("Robert2", 17, "12345678X", 1.26, 65, Posicion::Escolta));
  Pireos.AgregarJugador(Jugador("Marcos2", 28, "12345678X", 1.72, 72, Posicion::Base));
  Pireos.AgregarEntrenador(Entrenador("Pepe2", 56, "12345678X", "123", "10/2/2024", "31/12/2026"));
  Pireos.AgregarEntrenador(Entrenador("Pepo2", 30, "12345678X", "123", "10/2/2024", "31/12/2026"));
  Pireos.AgregarEntrenador(Entrenador("Pepa2", 50, "12345678X", "123", "10/2/2024", "31/12/2026"));
  Pireos.AgregarAyudante(Ayudante("Julio2", 40, "12345678X", "10/2/2024", "31/12/2026"));
  Pireos.AgregarAyudante(Ayudante("Julia2", 46, "12345678X", "10/2/2024", "31/12/2026"));
  Pireos.AgregarAyudante(Ayudante("Junio2", 79, "12345678X", "10/2/2024", "31/12/2026"));

  std::cout << "Datos de Pireos: " << std::endl << std::endl;
  std::cout << "Peso Medio: " << std::setprecision(4) << Pireos.PesoMedio() << "kg" << std::endl;
  std::cout << "Altura Media: " << std::setprecision(3) << Pireos.AlturaMedia() << "m" << std::endl;

  return 0;
}
