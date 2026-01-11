#include <iostream>
#include <vector>

double Potencia(const double numero, const int exponente);
double Evaluar(const std::vector<double>& coeficientes, const int evaluacion);

int main(int argc, char* argv[]) {

  std::vector<double> coeficientes{};
  double evaluacion{};
  double numero_actual{};

  for(int i{1}; i < argc; i++) {

    numero_actual = std::stod(argv[i]);

    coeficientes.push_back(numero_actual);
  }

  std::cout << "Valor de evaluación: ";
  std::cin >> evaluacion;
  std::cout << std::endl;

  std::cout <<"f(" << evaluacion << ") = " << Evaluar(coeficientes, evaluacion) << std::endl;

  return 0;
}

double Potencia(const double numero, const int exponente) {

  double resultado{1};

  if(exponente == 0) {

    return 1;
  }

  for(int i{}; i < exponente; i++) {

    resultado *= numero;
  }

  return resultado;
}

double Evaluar(const std::vector<double>& coeficientes, const int evaluacion) {

  double resultado{};

  for(int i{}; i < static_cast<int>(coeficientes.size()); i++) {

    resultado += (coeficientes[i] * Potencia(evaluacion, i));
  }

  return resultado;
}
