#pragma once

#include <cmath>

namespace complex_numbers {

  class Complex {
    public:

      Complex(double real = 0.0, double imaginario = 0.0);

      double real() const;
      double imag() const;

      double ParteReal() const;
      double ParteImaginaria() const;

      double abs() const;
      Complex conj() const;
      Complex exp() const;

    private:
    
      double real_;
      double imaginario_;
  };

  Complex operator+(const Complex& complejo1, const Complex& complejo2);
  Complex operator-(const Complex& complejo1, const Complex& complejo2);
  Complex operator*(const Complex& complejo1, const Complex& complejo2);
  Complex operator/(const Complex& complejo1, const Complex& complejo2);

}  // namespace complex_numbers
