#include <iostream>
#include <ctime>
using namespace std;

//������ 1
inline void z1_(double A, double B);
//������ 2
void z2_(double A, double B, double C);
//������ 3
template <typename T>
void MaxElement(const T* arr, T& max);
int main() {
	setlocale(LC_ALL, "Russian");
    //srand(time(NULL));
    int n = 0, m = 0, l = 0;
    //������ 1
	z1_(n, m);

	//������ 2
    z2_(n, m, l);

    //������ 3
    int arr[6] = { 7, 6, 5, 4, 3, 9 };
    int max = 0;

    MaxElement(arr, max);

	return 0;
}

//������ 1
inline void z1_(double A, double B) {
	cout << "������� 2 �����:";
	cin >> A >> B;
	cout << "������� �������������� = " << (A + B) / 2 << "\n\n";
}

//������ 2
void z2_(double A, double B, double C) {
    cout << "������� ��� �����: \n"; 
    cin >> A >> B >> C;
    if (A > B && A > C) {
        double max = A;
        cout << "������������ �� 3 ���e� = " << max << "\n\n";
    }
    else
        if (B > A && B > C) {
            int max = B;
        cout << "������������ �� 3 ���e� = " << max << "\n\n";
    }
        else
            if (C > B && C > A) {
                 int max = C;
                 cout << "������������ �� 3 ���e� =  " << max << "\n\n";
             }
}

//������ 3
template <typename T> 
void MaxElement(const T* arr, T& max) { 
    for (int i = 0; i < 6; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "����. ������� � �������: " << max << endl;
}

