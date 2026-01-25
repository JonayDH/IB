#include "class.h"
#include <cmath>

Vector::Vector() : componente1_{0}, componente2_{0}, componente3_{0} {}

Vector::Vector(const double componente1, const double componente2, const double componente3) : componente1_{componente1}, componente2_{componente2}, componente3_{componente3} {}

double Vector::Modulo() const {

  return (std::sqrt((componente1_ * componente1_ + componente2_ * componente2_ + componente3_ * componente3_)));
}

double Vector::GetComponente1() const {

  return componente1_;
}

double Vector::GetComponente2() const {

  return componente2_;
}

double Vector::GetComponente3() const {

  return componente3_;
}

void Vector::SetComponente1(const double componente1) {

  componente1_ = componente1;
}

void Vector::SetComponente2(const double componente2) {

  componente2_ = componente2;
}

void Vector::SetComponente3(const double componente3) {

  componente3_ = componente3;
}

Vector operator+(const Vector& vector1, const Vector& vector2) {

  Vector resultado{};

  resultado.SetComponente1(vector1.GetComponente1() + vector2.GetComponente1());
  resultado.SetComponente2(vector1.GetComponente2() + vector2.GetComponente2());
  resultado.SetComponente3(vector1.GetComponente3() + vector2.GetComponente3());

  return resultado;
}

double operator*(const Vector& vector1, const Vector& vector2) {

  return vector1.GetComponente1() * vector2.GetComponente1() + vector1.GetComponente2() * vector2.GetComponente2() + vector1.GetComponente3() * vector2.GetComponente3();
}

std::ostream& operator<<(std::ostream& os, const Vector& vector) {

  os << "(" << vector.GetComponente1() << ", " << vector.GetComponente2() << ", " << vector.GetComponente3() << ")";

  return os;
}

std::istream& operator>>(std::istream& is, Vector& vector) {

  char parentesis1{'('};
  char parentesis2{')'};
  char coma{','};

  double componente1{};
  double componente2{};
  double componente3{};

  is >> parentesis1 >> componente1 >> coma >> componente2 >> coma >> componente3 >> parentesis2;

  vector.SetComponente1(componente1);
  vector.SetComponente2(componente2);
  vector.SetComponente3(componente3);

  return is;
}