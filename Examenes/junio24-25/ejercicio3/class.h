#ifndef CLASS_H
#define CLASS_H

#include <iostream>

class Vector{

  public:

    Vector();
    Vector(double componente1, double componente2, double componente3);

    double Modulo() const;

    double GetComponente1() const;
    double GetComponente2() const;
    double GetComponente3() const;

    void SetComponente1(double componente1);
    void SetComponente2(double componente2);
    void SetComponente3(double componente3);

  private:

    double componente1_{};
    double componente2_{};
    double componente3_{};
};

Vector operator+(const Vector& vector1, const Vector& vector2);
double operator*(const Vector& vector1, const Vector& vector2);

std::ostream& operator<<(std::ostream& os, const Vector& vector);
std::istream& operator>>(std::istream& is, Vector& vector);

#endif