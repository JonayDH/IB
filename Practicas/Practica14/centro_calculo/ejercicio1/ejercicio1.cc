/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file ejercicio1.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Dic 18 2025
  * @brief Programa centro de cálculo
  * @bug There are no known bugs
  * @see https://github.com/IB-2025-2026/p14-oop2-JonayDH/blob/main/README.md
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

class Miembros {

  public:

    friend class Empleados;
    friend class Alumnos;

    Miembros(const std::string& nombre, const std::string& apellidos, const std::string& dni, int codigo_postal, int edad, const std::string& fecha_nacimiento) :
            nombre_(nombre), apellidos_(apellidos), dni_(dni), codigo_postal_(codigo_postal), edad_(edad), fecha_nacimiento_(fecha_nacimiento) {};
  
  private:

    std::string nombre_;
    std::string apellidos_;
    std::string dni_;
    int codigo_postal_;
    int edad_;
    std::string fecha_nacimiento_;

};

class Empleados : public Miembros {

  public:

    friend class PDI;
    friend class PAS;

    Empleados(const std::string& nombre, const std::string& apellidos, const std::string& dni, int codigo_postal, int edad, const std::string& fecha_nacimiento, const std::string& titulacion, const std::string& centro, const std::string& fecha_alta,
          int codigo_empleado, const std::string& iban, const std::string& correo) : Miembros(nombre, apellidos, dni, codigo_postal, edad, fecha_nacimiento),
          titulacion_(titulacion), centro_(centro), fecha_alta_(fecha_alta), codigo_empleado_(codigo_empleado), iban_(iban), correo_(correo) {};

  private:

    std::string titulacion_;
    std::string centro_;
    std::string fecha_alta_;
    int codigo_empleado_;
    std::string iban_;
    std::string correo_;
};

class PDI : public Empleados {

  public:

    PDI(const std::string& nombre, const std::string& apellidos, const std::string& dni, int codigo_postal, int edad, const std::string& fecha_nacimiento, const std::string& titulacion, const std::string& centro, const std::string& fecha_alta,
          int codigo_empleado, const std::string& iban, const std::string& correo, const std::string categoria, int numero_asignaturas, int total_creditos ) : Empleados(nombre, apellidos, dni, codigo_postal, edad, fecha_nacimiento, titulacion, centro, fecha_alta, codigo_empleado, iban, correo),
          categoria_(categoria), numero_asignaturas_(numero_asignaturas), total_creditos_(total_creditos) {};

    void creditos_impartidos() {

      std::cout << "Número de créditos impartidos: " << total_creditos_;
    }

  private:

    std::string categoria_;
    int numero_asignaturas_;
    int total_creditos_;

};

class PAS : public Empleados {

  public:

    PAS(const std::string& nombre, const std::string& apellidos, const std::string& dni, int codigo_postal, int edad, const std::string& fecha_nacimiento, const std::string& titulacion, const std::string& centro, const std::string& fecha_alta,
          int codigo_empleado, const std::string& iban, const std::string& correo, const std::string categoria, int numero_asignaturas, int total_creditos ) : Empleados(nombre, apellidos, dni, codigo_postal, edad, fecha_nacimiento, titulacion, centro, fecha_alta, codigo_empleado, iban, correo),
          categoria_(categoria) {};  

  private:

    std::string categoria_;


};

class Alumnos : public Miembros {

  public:

    Alumnos(const std::string& nombre, const std::string& apellidos, const std::string& dni, int codigo_postal, int edad, const std::string& fecha_nacimiento, int numero_expediente, const std::string& estudios,
        int creditos_aprobados, int creditos_cursando, const std::string& correo) :
        Miembros(nombre, apellidos, dni, codigo_postal, edad, fecha_nacimiento), numero_expediente_(numero_expediente), estudios_(estudios), creditos_aprobados_(creditos_aprobados), 
        creditos_cursando_(creditos_cursando), correo_(correo) {};

    void CreditosMatriculados() {

      std::cout << "Número de créditos matriculados: " << creditos_cursando_;
    }
        
  private:

    int numero_expediente_;
    std::string estudios_;
    int creditos_aprobados_;
    int creditos_cursando_;
    std::string correo_;
};

class Funcionarios : public PDI {

  public:

    Funcionarios(const std::string& nombre, const std::string& apellidos, const std::string& dni, int codigo_postal, int edad, const std::string& fecha_nacimiento, const std::string& titulacion, const std::string& centro, const std::string& fecha_alta,
          int codigo_empleado, const std::string& iban, const std::string& correo, const std::string& categoria, int numero_asignaturas, int total_creditos, const std::string& fecha_antiguedad ) : PDI(nombre, apellidos, dni, codigo_postal, edad, fecha_nacimiento, titulacion, centro, fecha_alta, codigo_empleado, iban, correo, categoria, numero_asignaturas, total_creditos), fecha_antiguedad_(fecha_antiguedad){};

  private:

    std::string fecha_antiguedad_;
};

class PersonalContratado : public PDI {

  public:

    PersonalContratado(const std::string& nombre, const std::string& apellidos, const std::string& dni, int codigo_postal, int edad, const std::string& fecha_nacimiento, const std::string& titulacion, const std::string& centro, const std::string& fecha_alta,
          int codigo_empleado, const std::string& iban, const std::string& correo, const std::string& categoria, int numero_asignaturas, int total_creditos, const std::string& tipo_contrato ) : PDI(nombre, apellidos, dni, codigo_postal, edad, fecha_nacimiento, titulacion, centro, fecha_alta, codigo_empleado, iban, correo, categoria, numero_asignaturas, total_creditos), tipo_contrato_(tipo_contrato){};

  private:

    std::string tipo_contrato_;
};

class PersonalTiempoCompleto : public PersonalContratado {

  public:

    PersonalTiempoCompleto(const std::string& nombre, const std::string& apellidos, const std::string& dni, int codigo_postal, int edad, const std::string& fecha_nacimiento, const std::string& titulacion, const std::string& centro, const std::string& fecha_alta,
          int codigo_empleado, const std::string& iban, const std::string& correo, const std::string& categoria, int numero_asignaturas, int total_creditos, const std::string& tipo_contrato ) : PersonalContratado(nombre, apellidos, dni, codigo_postal, edad, fecha_nacimiento, titulacion, centro, fecha_alta, codigo_empleado, iban, correo, categoria, numero_asignaturas, total_creditos, tipo_contrato){};


};

class PersonalTiempoParcial : public PersonalContratado {

  public:

    PersonalTiempoParcial(const std::string& nombre, const std::string& apellidos, const std::string& dni, int codigo_postal, int edad, const std::string& fecha_nacimiento, const std::string& titulacion, const std::string& centro, const std::string& fecha_alta,
          int codigo_empleado, const std::string& iban, const std::string& correo, const std::string& categoria, int numero_asignaturas, int total_creditos, const std::string& tipo_contrato ) : PersonalContratado(nombre, apellidos, dni, codigo_postal, edad, fecha_nacimiento, titulacion, centro, fecha_alta, codigo_empleado, iban, correo, categoria, numero_asignaturas, total_creditos, tipo_contrato){};

};

int main() {

  Empleados pepe("Pepe", "Julian", "123456F", 12, 50, "12/10/1970", "Ingeniero Informático", "Facultad de Física", "01/02/24", 1234, "AB123", "pepito@ull.edu.es");
}