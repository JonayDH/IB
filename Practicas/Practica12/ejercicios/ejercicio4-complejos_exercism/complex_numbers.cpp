#include "complex_numbers.h"

#include <cmath>

namespace complex_numbers {

  /**
    * @brief Constructor de la clase Complex.
    *
    * @param real Parte real del número complejo.
    * @param imaginario Parte imaginaria del número complejo.
    */

  Complex::Complex(double real, double imaginario) : real_(real), imaginario_(imaginario) {}
 
  /**
    * @brief Obtiene la parte real del número complejo.
    * 
    * @return Parte real.
    */

  double Complex::real() const { 

    return real_; 
  }

  /**
    * @brief Obtiene la parte imaginaria del número complejo.
    * 
    * @return Parte imaginaria.
    */

  double Complex::imag() const { 

    return imaginario_; 
  }

  /**
    * @brief Calcula el valor absoluto (módulo) del número complejo.
    *
    * @return Módulo del número complejo.
    */

  double Complex::abs() const {

    return std::sqrt(real_ * real_ + imaginario_ * imaginario_);
  }

  /**
    * @brief Devuelve el conjugado del número complejo.
    *
    * @return Número complejo conjugado.
    */

  Complex Complex::conj() const {

    return Complex(real_, -imaginario_);
  }

  /**
    * @brief Calcula la exponencial compleja del número.
    *
    * @return número complejo.
    */

  Complex Complex::exp() const {

    double e_real = std::exp(real_);

    return Complex(e_real * std::cos(imaginario_), e_real * std::sin(imaginario_));
  }

  /**
    * @brief Sobrecarga del operador + para sumar numeros complejos
    *  
    * @return numero complejo sumado
    */

  Complex operator+(const Complex& complejo1, const Complex& complejo2) {

    return Complex(complejo1.real() + complejo2.real(), complejo1.imag() + complejo2.imag());
  }

  /**
    * @brief Sobrecarga del operador - para restar numeros complejos
    *  
    * @return numero complejo restado
    */

  Complex operator-(const Complex& complejo1, const Complex& complejo2) {

    return Complex(complejo1.real() - complejo2.real(), complejo1.imag() - complejo2.imag());
  }

  /**
    * @brief Sobrecarga del operador * para multiplicar numeros complejos
    *  
    * @return numero complejo multiplicado
    */ 

  Complex operator*(const Complex& complejo1, const Complex& complejo2) {

    double real_nuevo{complejo1.real() * complejo2.real() - complejo1.imag() * complejo2.imag()};

    double imaginario_nuevo{complejo1.real() * complejo2.imag() + complejo1.imag() * complejo2.real()};

    return Complex(real_nuevo, imaginario_nuevo);
  }

  /**
    * @brief Sobrecarga del operador / para dividir numeros complejos
    *  
    * @return numero complejo dividido
    */

  Complex operator/(const Complex& complejo1, const Complex& complejo2) {

    double denom{complejo2.real() * complejo2.real() + complejo2.imag() * complejo2.imag()};

    double real_nuevo{(complejo1.real() * complejo2.real() + complejo1.imag() * complejo2.imag()) / denom};

    double imaginario_nuevo{(complejo1.imag() * complejo2.real() - complejo1.real() * complejo2.imag()) / denom};

    return Complex(real_nuevo, imaginario_nuevo);
  }

}  // namespace complex_numbers
