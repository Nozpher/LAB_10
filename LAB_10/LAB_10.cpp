#include <iostream>

using namespace std;

int main()
{

    int a, b, nc, b2;
    cout << "How large massive u need? - Two numbers: ";
    cin >> a >> b;
    
    int* bm = new int[a];
    for (int i = 0; i < a; i++) {
        bm[i] = rand() % 100;
    }
    
    int** Din_mas = new int* [a];   // создаем 
    for (int i = 0; i < a; i++) {          // двумерный
        Din_mas[i] = new int[b]; // массив 
    }

    b2 = b + 1;

    int** dm2 = new int* [a];   // создаем 
    for (int i = 0; i < a; i++) {          // двумерный
        dm2[i] = new int[b2]; // массив 
    }

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            Din_mas[i][j] = rand() % 10;
            dm2[i][j] = Din_mas[i][j];
        }
    }

    cout << "Where u need add new column?";
    cin >> nc;

   
    for (int i = 0; i < a; i++) {
        dm2[i][nc - 1] = bm[i];
    }

    for (int i = 0; i < a; i++) {
        for (int j = nc-1; j < b; j++) {
            
            dm2[i][j + 1] = Din_mas[i][j];

        } 
    }
       
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b+1; j++) {
            cout << dm2[i][j] << "\t";
        }
        cout << "\n";
    }
    
    for (int i = 0; i < a; i++)
    {
        delete[] dm2[i];
    }
    
    delete[] dm2;
    for (int i = 0; i < a; i++) {
        delete[] Din_mas[i];
    }
    
    delete[] Din_mas;
}
