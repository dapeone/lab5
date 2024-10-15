#include <iostream>
using namespace std;

void printName(int name) {
  cout << name << endl;
}

int main(){
  setlocale (LC_ALL, "RUS");
  
  int m, n, quantity = 0, i, F[m], G[n];
  
  cout << "введите количество элементов в массиве F   ";
  cin >> m;
  cout <<"введите количество элементов в массиве G   ";
  cin >> n;
  
  for (i=0; i<m; i+=1) {
    cout << "введите " << i + 1 << " элемент в массиве F   ";
    cin >> F[i];
  }

  for (i=0; i<n; i+=1) {
    cout << "введите " << i + 1 << " элемент в массиве G   ";
    cin >> G[i];
  }

  for (i=0; i<m; i+=1) {
    if (F[i]!=0) {
        quantity += 1;
    }
  }
  
  cout << "количество ненулевых элементов массива F   ";
  printName (quantity);
  
  quantity = 0;
  for (i=0; i<n; i+=1) {
    if (G[i]!=0) {
        quantity += 1;
    }
  }
  
  cout << "количество ненулевых элементов массива G   ";
  printName (quantity);
}
