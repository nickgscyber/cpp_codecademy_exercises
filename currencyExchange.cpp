#include <iostream>

using namespace std;

double pesos = 0;
double reais = 0;
double soles = 0;
double totalAmount = 0;

void convertMoney(double p, double r, double s, double& total) {
  total = (p * 0.00032) + (r * 0.27) + (s * 0.3);
}

int main() {

  // Pesos conversion rate: 0.00032
  // Reais conversion rate: 0.27
  // Soles conversion rate: 0.3
  cout << "Enter number of Colombian Pesos: ";
  cin >> pesos;
  cout << endl;
  cout << "Enter number of Brazilian Reais: ";
  cin >> reais;
  cout << endl; 
  cout << "Enter number of Peruvian Soles: ";
  cin >> soles;
  cout << endl; 

  convertMoney(pesos, reais, soles, totalAmount);

  cout << "US Dollars = $" << totalAmount << endl;
  
}