#include <iostream>
#include <chrono>
#include <vector>

using namespace std;

int main() {
    // Tamaños de las matrices a evaluar
    vector<int> sizes = { 10, 20, 30, 40, 50, 10 };

    for (int N : sizes){
        // Crear matrices A, B y C de tamaño N x N
        vector<vector<double>> A(N, vector<double>(N, 1.0)); // Inicializar matriz A con todos los valores a 1
        vector<vector<double>> B(N, vector<double>(N, 1.0)); // Inicializar matriz B con todos los valores a 1
        vector<vector<double>> C(N, vector<double>(N, 0.0)); // Inicializar matriz C con todos los valores a 0

        // Medir el tiempo de ejecución
        auto start = chrono::high_resolution_clock::now();

        for (int i = 0; i < N; i++){
            for (int j = 0; j < N; j++){
                C[i][j] = 0; // Inicializamos C[i][j]
                for (int k = 0; k < N; k++){
                    C[i][j] += A[i][k] * B[k][j];
                }
            }
        }

        auto end = chrono::high_resolution_clock::now();
        auto duration = chrono::duration_cast<chrono::microseconds>(end - start).count();

        // Mostrar el tiempo de ejecución
        cout << "Tiempo para matrices de " << N << "x" << N << " : " << duration << " microsegundos" << endl;
    }
    // El último caso es para comprobar que este trabajando correctamente
    return 0;
}
