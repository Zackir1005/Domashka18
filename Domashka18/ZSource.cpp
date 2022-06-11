#include <iostream>
#include <ctime>
using namespace std;

//Задача 1
inline void z1_(double A, double B);
//Задача 2
void z2_(double A, double B, double C);
//Задача 3
template <typename T>
void MaxElement(const T* arr, T& max);
int main() {
	setlocale(LC_ALL, "Russian");
    //srand(time(NULL));
    int n = 0, m = 0, l = 0;
    //Задача 1
	z1_(n, m);

	//Задача 2
    z2_(n, m, l);

    //Задача 3
    int arr[6] = { 7, 6, 5, 4, 3, 9 };
    int max = 0;

    MaxElement(arr, max);

	return 0;
}

//Задача 1
inline void z1_(double A, double B) {
	cout << "Введите 2 числа:";
	cin >> A >> B;
	cout << "Среднее арифметическое = " << (A + B) / 2 << "\n\n";
}

//Задача 2
void z2_(double A, double B, double C) {
    cout << "Введите три числа: \n"; 
    cin >> A >> B >> C;
    if (A > B && A > C) {
        double max = A;
        cout << "Максимальное из 3 чисeл = " << max << "\n\n";
    }
    else
        if (B > A && B > C) {
            int max = B;
        cout << "Максимальное из 3 чисeл = " << max << "\n\n";
    }
        else
            if (C > B && C > A) {
                 int max = C;
                 cout << "Максимальное из 3 чисeл =  " << max << "\n\n";
             }
}

//Задача 3
template <typename T> 
void MaxElement(const T* arr, T& max) { 
    for (int i = 0; i < 6; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "Макс. элемент в массиве: " << max << endl;
}

