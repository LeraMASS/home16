#include <iostream>;
#include <ctime>
#include <cstdlib>
#include <algorithm>



int main() {
	setlocale(LC_ALL, "Russian");

	//Задача 1.
	int arithmetic = 0;
	int counter = 0;
	int arr[10]{ 12, 16, 13, 34, 10, 23, 14, 25, 17, 29 };
	int sum = 0;
	for (int i = 0; i < 10; i++) {
		sum += arr[i];
		arithmetic = sum / 10;
	}
	std::cout << "Среднее арифметическое: " << arithmetic << std::endl;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++)
			arithmetic >= arr[i];
		if (arr[i] > arithmetic)
			counter++;
	}
	std::cout << "Кол-во элементов: " << counter << std::endl;

	// Задача 2.
	const int rows = 5;
	const int cols = 5;
	const int rows1 = 5;
	const int cols1 = 5;
	int arr[rows][cols]{
		{ 1, 3, 4,  9, 10 },
		{ 5, 6, 4,  6, 10 },
		{ 2, 7, 15, 4, 23 },
		{ 9, 4, 6,  19, 0 },
		{ 7, 1, 18, 12, 3 }
	};

	int arr1[rows1][cols1]{
		{ 2, 8,  4,  9, 2 },
		{ 2, 4,  5,  3, 7 },
		{ 4, 7,  12, 6, 2 },
		{ 5, 10, 11, 7, 0 },
		{ 14, 3, 18, 0, 12}
	};
	int arr2[5][5];
	std::cout << "Первый массив:\n";
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			std::cout << arr[i][j] << '\t';
		}
		std::cout << std::endl;
	}
	std::cout << "Второй массив:\n";
	for (int i = 0; i < rows1; i++) {
		for (int j = 0; j < cols1; j++) {
			std::cout << arr1[i][j] << '\t';
		}
		std::cout << std::endl;
	}
	std::cout << "Сумма двух массивов:\n";
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			arr2[i][j] = arr[i][j] + arr1[i][j];
			std::cout << arr2[i][j] << "\t";
		}
		std::cout << std::endl;
	}



	// Задача 3.
	const int size = 6;
	int  n;
	std::cout << "Введите число -> ";
	std::cin >> n;
	std::cout << "Ваше число:\n";
	int s = (n / 100000) % 10;
	int s1 = (n / 10000) % 10;
	int s2 = (n / 1000) % 10;
	int s3 = (n / 100) % 10;
	int s4 = (n / 10) % 10;
	int s5 = n % 10;

	int arr3[size]{  };

	if (n > 99999 && n < 1000000) {
		for (int i = 0; i < size; i++) {
			std::swap(arr3[i], s5);
			std::swap(arr3[i], s4);
			std::swap(arr3[i], s3);
			std::swap(arr3[i], s2);
			std::swap(arr3[i], s1);
			std::swap(arr3[i], s);

			std::cout << arr3[i] << '\t';
		}
		std::cout << '\n';
	}
	else
		std::cout << "Не верно";


	return 0;
}