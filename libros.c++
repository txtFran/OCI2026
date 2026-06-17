//Libros Prestados
//Descripción
//La biblioteca de un colegio registra diariamente la cantidad de libros prestados a los estudiantes. El director desea analizar la actividad reciente de la biblioteca para detectar los días más concurridos.
//Para ello, observa grupos consecutivos de K días y, para cada grupo, necesita conocer la mayor cantidad de préstamos realizados en un solo día.
//Dado el registro de préstamos de los últimos N días, determina el valor máximo para cada grupo consecutivo de K días.
 
//Entrada
//La primera línea contiene dos enteros N y K, que representan la cantidad de días registrados y el tamaño del grupo de análisis.
//La segunda línea contiene N enteros, donde el i-ésimo número representa la cantidad de libros prestados en el día i.
//Input
//8 3
//12 15 10 8 20 18 25 22
 
//Salida
//Imprima los valores máximos encontrados en cada grupo consecutivo de K días.
//Output
//15 15 20 20 25 25


#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, K;

    // Leer cantidad de días y tamaño de la ventana
    cin >> N >> K;

    vector<int> prestamos(N);

    // Leer los préstamos de cada día
    for (int i = 0; i < N; i++) {
        cin >> prestamos[i];
    }

    // Recorrer todas las ventanas posibles
    for (int i = 0; i <= N - K; i++) {

        // Suponer que el primer elemento es el máximo
        int maximo = prestamos[i];

        // Buscar el mayor dentro de la ventana
        for (int j = i; j < i + K; j++) {
            if (prestamos[j] > maximo) {
                maximo = prestamos[j];
            }
        }

        // Imprimir el máximo encontrado
        cout << maximo;

        // Evitar espacio extra al final
        if (i < N - K)
            cout << " ";
    }

    return 0;
}