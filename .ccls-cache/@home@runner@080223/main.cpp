#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(void) {
  int matrix[10][10]={ };
  srand(time(NULL));
  
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      *(*(matrix+i)+j) = rand() % 10;
      cout<<*(*(matrix+i)+j)<< " ";
    }
    cout<<endl;
  }
  
  cout << "Elements on the main diagonal: " << endl;
  for (int i = 0; i < 10; i++) {
    cout << *(*(matrix+i)+i) <<" ";
  }
  cout << endl;
  
  cout << "Elements on the secondary diagonal: " << endl;
  for (int i = 0; i < 10; i++) {
    cout << *(*(matrix+i)+(10-i-1)) << " ";
  }
  cout << endl;
  int evenCount = 0;
  int oddCount = 0;
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (*(*(matrix+i)+j) % 2 == 0) {
        evenCount++;
      } else {
        oddCount++;
      }
    }
  }
  
  cout << "Number of even elements: " << evenCount << endl;
  cout << "Number of odd elements: " << oddCount << endl;
  
  return 0;
}