#include <iostream>

using namespace std;

int main() {
  int n = 0;
  int max = 0;
  int min = 0;
  int *vet;
  vet =new int[ 99 ];
  
  cout << "Digite quantas teclas serão informadas: "; 
  cin >> n;

  for (int i = n ; i > 0; i--)
  {
    cout << "-> ";
    cin >> vet[i]; 
      
      if (i == 0)    
      max = min = vet[i];

      else {
        if (vet[i] > max) max = vet[i];
        if (vet[i] < min) min = vet[i];
            }

  }

  for (int i = n ; i > 0; i--)
  {
    cout << vet[i] << "," ;
  }
  
  cout << endl;
  cout << "Max= " << max << ",min= " << min << ";";

  return 0;
}