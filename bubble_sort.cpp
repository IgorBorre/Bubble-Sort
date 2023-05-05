#include <iostream>

void imprime(int* arr, int n) {
	for (int i = 0; i < n; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
}

void ordena(int* arr, int n) {
	int temp;
	
	for(int i = 0; i < n - 1; i++){
		for(int j = 0; j < n - i - 1; j++){
			if(arr[j] > arr[j + 1]){
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main() {

	int notas[] = {5, 3, 4, 10, 8, 7, 9};

	imprime(notas, 7);
	ordena(notas, 7);
	imprime(notas, 7);

	return 0;
}