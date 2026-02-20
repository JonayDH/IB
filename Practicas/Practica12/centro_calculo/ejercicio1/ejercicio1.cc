/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file ejercicio1.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Dic 5 2025
  * @brief Ejercicio 1 centro de cálculo
  * @bug There are no known bugs
  * @see https://github.com/IB-2025-2026/p12-intro-oop-JonayDH
  *
  * This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License 
  * as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
  *
  * This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of 
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
  *
  * You should have received a copy of the GNU General Public License along with this program. If not, see <https://www.gnu.org/licenses/>. 
  */

  /// @brief Muestra el propósito del programa por pantalla

#include <iostream>
#include <string>

class Vehiculo {

  public:

    Vehiculo(std::string& fecha_alquiler, Usuarios& duenyo, bool esta_alquilado) : fecha_alquiler_(fecha_alquiler), duenyo_(duenyo), esta_alquilado_(false) {};

    double CalcularPrecio() {

        return 0.0;
    }

    void Alquilado() {

      esta_alquilado_ = true;
    }

    void NoAlquilado() {

      esta_alquilado_ = false;
    }

    void ObtenerFecha() {

        std::cout << "Fecha de alquiler: " << fecha_alquiler_ << std::endl;
    }

  private:

    std::string fecha_alquiler_;
    Usuarios duenyo_;
    bool esta_alquilado_;
};

class Coche : public Vehiculo {

  public:

    Coche(std::string& fecha_alquiler, Usuarios& duenyo, bool esta_alquilado, double coste_diario, int num_dias) : Vehiculo(fecha_alquiler, duenyo, esta_alquilado), coste_diario_(coste_diario), num_dias_(num_dias) {}

    double CalcularPrecio() {

      return coste_diario_ * num_dias_;
    }

  private:
    double coste_diario_;
    int num_dias_;
};

class Motocicleta : public Vehiculo {

  public:

    Motocicleta(std::string& fecha_alquiler, Usuarios& duenyo, bool esta_alquilado, double coste_hora, int num_horas) : Vehiculo(fecha_alquiler, duenyo, esta_alquilado), coste_hora_(coste_hora), num_horas_(num_horas) {}

    double CalcularPrecio() {

      return coste_hora_ * num_horas_;
    }

  private:

    double coste_hora_;
    int num_horas_;
};

class Bicicleta : public Vehiculo {

  public:

    Bicicleta(std::string& fecha_alquiler, Usuarios& duenyo, bool esta_alquilado, double coste_hora, int num_horas) : Vehiculo(fecha_alquiler, duenyo, esta_alquilado), coste_hora_(coste_hora), num_horas_(num_horas) {}

    double CalcularPrecio() {

      return coste_hora_ * num_horas_;
    }

  private:

    double coste_hora_;
    int num_horas_;
};

class Caravana : public Vehiculo {

  public:

    Caravana(std::string& fecha_alquiler, Usuarios& duenyo, bool esta_alquilado, double coste_semanal, int num_semanas) : Vehiculo(fecha_alquiler, duenyo, esta_alquilado), coste_semanal_(coste_semanal), num_semanas_(num_semanas) {}

    double CalcularPrecio() {

        return coste_semanal_ * num_semanas_;
    }

  private:

    double coste_semanal_;
    int num_semanas_;
};

class Barco : public Vehiculo {

  public:

    Barco(std::string& fecha_alquiler, Usuarios& duenyo, bool esta_alquilado, double coste_semanal, int num_semanas) : Vehiculo(fecha_alquiler, duenyo, esta_alquilado), coste_semanal_(coste_semanal), num_semanas_(num_semanas) {}

    double CalcularPrecio() {

      return coste_semanal_ * num_semanas_;
    }

  private:

    double coste_semanal_;
    int num_semanas_;
};

class Usuarios {

  public:

    Usuarios (std::string& nombre) : nombre_(nombre) {};

    void PrintNombre() {

      std::cout << nombre_;
    }

  private:

    std::string nombre_;
};

class Clientes : public Usuarios {

  public:

    Clientes (std::string& nombre) : Usuarios(nombre) {};

};

class Administradores : public Usuarios {

  public:

    Administradores (std::string& nombre) : Usuarios(nombre) {};

};

class Operadores: public Usuarios {

  public:

    Operadores (std::string& nombre) : Usuarios(nombre) {};

};

class Agencias: public Usuarios{

  public:

    Agencias (std::string& nombre) : Usuarios(nombre) {};

};

int main() {

  std::string nombre1{"Javier"};
  std::string fecha1{"12/11/25"};

  Clientes javier(nombre1);
  Coche coche1(fecha1, javier, false, 10, 20);

  coche1.ObtenerFecha();
}