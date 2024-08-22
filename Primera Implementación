#include <iostream>
#include <chrono>
using namespace std;
const int MAX = 100;

int main(){
    double A[MAX][MAX], x[MAX], y[MAX];
	for (int a = 0; a < MAX; a++){
		x[a] = a;
		y[a] = a;
		for (int b = 0; b < MAX; b++){
			A[a][b] = a;
		}
	}
	auto inicio = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < MAX; i++){
		for (int j = 0;j<MAX; j++) {
			y[i] += A[i][j] * x[j];
		}
	}
	auto fin = std::chrono::high_resolution_clock::now();
	auto duracion = fin - inicio;

	cout << "Tiempo transcurrido:" << std::endl;
	cout << "Microsegundos: " << std::chrono::duration_cast<std::chrono::microseconds>(duracion).count() << std::endl;
	
	inicio = std::chrono::high_resolution_clock::now();
	for (int j = 0; j < MAX; j++) {
		for (int i = 0; i < MAX; i++) {
			y[i] += A[i][j] * x[j];
		}
	}
	fin = std::chrono::high_resolution_clock::now();
	duracion = fin - inicio;

	cout << "Tiempo transcurrido:" << std::endl;
	cout << "Microsegundos: " << std::chrono::duration_cast<std::chrono::microseconds>(duracion).count() << std::endl;
	return 0;
}
