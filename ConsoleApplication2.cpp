/*******************************
* Выполнил: Горбунов Роман     *
* Вариант: 4                   *
* Название: Циклы с ветвлением *
*******************************/
#include <iostream>
using namespace std;

int main() {
  //Для рассчётов использовались следующие значения: Re = 6.1, Ga = 0.9 и W со значениями (0.1, 0.2, 0.5, 0.75, 0.85)
  double Re, Ga, W, i;

  cout << "Reynolds number(Re): ";
  cin >> Re;
  Re = Re * pow(10.0, 4.0);

  cout << "Galileo number(Ga): ";
  cin >> Ga;
  Ga = Ga * pow(10.0, 5.0);

  double A, Pe;

  for (i = 1; i <= 5; i++) {
    if (i == 1) {
      W = 0.1;
    } else if (i == 2) {
      W = 0.2;
    } else if (i == 3) {
      W = 0.5;
    } else if (i == 4) {
      W = 0.75;
    } else if (i == 5) {
      W = 0.85;
    }

    A = W * pow(Re, 0.11);

    if (A < 1) {
      Pe = 4.75 * pow(A, 1.4) * pow(Ga, -0.17);
    } else {
      Pe = 2.25 * pow(10.0, -3) * pow(A, -3.3) * pow(Ga, 0.29);
    }

    cout << "\nStep " << i << "   " << "Dimensionless velocity: " << W;
    cout << "\nMagnitude of longitudinal mixing(Pe): " << Pe << "   " << A << " :(A)Work";
    
  }
  return 0;
}
