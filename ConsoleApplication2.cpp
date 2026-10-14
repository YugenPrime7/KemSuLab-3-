/*******************************
* Выполнил: Горбунов Роман     *
* Вариант: 4                   *
* Название: Циклы с ветвлением *
*******************************/
#include <iostream>
using namespace std;

int main()
{
  //Для рассчётов использовались следующие значения: Re = 6.1, Ga = 0.9 и W со значениями (0.1, 0.2, 0.5, 0.75, 0.85)
  double Re, Ga, W;

  cout << "Dimensionless speed(W): ";
  cin >> W;

  cout << "Reynolds number(Re): ";
  cin >> Re;
  Re = Re * pow(10.0, 4.0);

  cout << "Galileo number(Ga): ";
  cin >> Ga;
  Ga = Ga * pow(10.0, 5.0);

  double A, Pe;

  A = W * pow(Re, 0.11);

  if (A < 1) {
    Pe = 4.75 * pow(A, 1.4) * pow(Ga, -0.17);
  } else {
    Pe = 2.25 * pow(10.0, -3) * pow(A, -3.3) * pow(Ga, 0.29);
  }
  cout << "\nMagnitude of longitudinal mixing(Pe): " << Pe << "   " << A << " :(A)Work";
}
