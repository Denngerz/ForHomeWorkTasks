#include "ForClass.h"
#include <iostream>

void ForClass::ForClass1(int k, int n) {
	for (int i = 0; i < n; i++) {
		std::cout << k << std::endl;
	}
}

void ForClass::ForClass2(int a, int b) {
	for (int i = b; i >= a; i--) {
		std::cout << i << std::endl;
	}
	std::cout << b - a + 1 << std::endl;
}

void ForClass::ForClass3(int a, int b) {
	for (int i = b - 1; i > a; i--) {
		std::cout << i << std::endl;
	}
	std::cout << b - a - 1 << std::endl;
}

void ForClass::ForClass4(float a) {
	for (int i = 1; i <= 10; i++) {
		std::cout << a * i << std::endl;
	}
}


void ForClass::ForClass5(float a) {
	for (float i = 1; i <= 10; i += 1) {
		float value = 0.1f * i;
		std::cout << a * value << std::endl;
	}
}

void ForClass::ForClass6(float a) {
	for (float i = 12; i <= 20; i += 2) {
		float value = 0.1f * i;
		std::cout << a * value << std::endl;
	}
}

int ForClass::ForClass7(int a, int b) {
	int sum = 0;

	for (int i = a; i <= b; i++) {
		sum += i;
	}
	return sum;
}


int ForClass::ForClass8(int a, int b) {
	int mult = 1;

	for (int i = a; i <= b; mult *= i++);
	return mult;
}

int ForClass::ForClass9(int a, int b) {
	int sum = 0;

	for (int i = a; i <= b; i++) {
		sum += i * i;
	}
	return sum;
}

float ForClass::ForClass10(int n) {
	float sum = 0;

	for (int i = 1; i <= n; i++) {
		sum += 1.0f / (i * 1.0f);
	}
	return sum;
}

int ForClass::ForClass11(int n) {
	int sum = 0;

	for (int i = n; i <= (2 * n); i++) {
		sum += i * i;
	}
	return sum;
}

float ForClass::ForClass13(int n) {
	float sum = 0;
	int sign = 1;

	for (int i = 1; i <= n; ++i) {
		sum += sign * (1 + i * 0.1f);
		sign = -sign;  
	}
	return sum;
}

void ForClass::ForClass14(int n) {
	int square = 0;

	for (int i = 1; i <= (2 * n - 1); i += 2) {
		square += i;
		std::cout << square << std::endl;
	}
}

void ForClass::ForClass16(float a, int n) {
	float power_of_a = 1;

	for (int i = 1; i <= n; ++i) {
		power_of_a *= a;
		std::cout << power_of_a << " ";
	}
}

float ForClass::ForClass17(float a, int n) {
	float sum = 0;
	float power_of_a = 1;

	for (int i = 0; i < n; i++) {
		sum += power_of_a;
		power_of_a *= a;
	}
	return sum;
} 

float ForClass::ForClass18(float a, int n) {
	float sum = 0;
	float power_of_a = 1;
	float sign = 1.0;

	for (int i = 0; i < n; i++) {
		sum += power_of_a * sign;
		power_of_a *= a;
		sign = -sign;
	}
	return sum;
}


float ForClass::ForClass19(int n) {
	float factorial = 1.0;

	for (int i = 1; i <= n; i++) {
		factorial *= (float)i;
	}
	return factorial;
}

float ForClass::ForClass20(int n) {
	float sum = 0;
	float factorial = 1.0f;

	for (int i = 1; i <= n; i++) {
		factorial *= (float)i;
		sum += factorial;
	}
	return sum;
} 

float ForClass::ForClass21(int n) {
	float sum = 0;
	float factorial = 1.0f;

	for (int i = 1; i <= n; i++) {
		factorial *= (float)i;
		sum += (1/factorial);
	}
	return sum;
}

float ForClass::ForClass22(float x, int n) {
	float sum = 0;
	float term = 1.0f;
	float factorial = 1.0f;

	for (int i = 1; i <= n; i++) {
		term *= x / i;
		sum += term;
	}
	return sum + 1;
}


float ForClass::ForClass24(float x, int n) {
	float sum = 0;
	float term = 1.0f;
	float factorial = 1.0f;
	float sign = -1.0;

	for (int i = 1; i <= n; i++) {
		term *= x / i;
		if (i % 2 == 0) {
			sum += sign * term;
			sign = -sign;
		}
	}
	return sum + 1;
}


float ForClass::ForClass26(float x, int n) {
	float sum = 0;
	int sign = 1;
	float term = x;

	for (int i = 1; i < n; i += 2) {
		sum += term / i;
		term *= x * x;
		sign = -sign;
	}

	return sum;
}


float ForClass::ForClass27(float x, int n) {
	float sum = x;
	float term = x;
	float denominator = 2;
	for (int i = 1; i <= n; ++i) {
		term *= (2 * i - 1) * x * x; 
		term /= denominator * (2 * i); 
		sum += term; 
		denominator *= (2 * i + 1);
	}
	return sum;
}


float ForClass::ForClass28(float x, int n) {
	double result = 1.0;
	double numerator = 1.0;
	double denominator = 2.0;
	double term = x;

	for (int i = 1; i <= n; ++i) {
		numerator *= (2 * i - 1);
		result += (i % 2 == 0 ? -1 : 1) * numerator * term / denominator;
		term *= x;
		denominator *= (2 * i);
	}

	return static_cast<float>(result);
}



void ForClass::ForClass29(int n, float a, float b) {
	float h = (b - a) / n;
	std::cout << h << std::endl;
	for (int i = 0; i <= n; i++) {
		std::cout << a + (h * i) << " ";
	}
}

void ForClass::ForClass30(int n, float a, float b) {
	float h = (b - a) / n;
	std::cout << h << std::endl;
	for (int i = 0; i <= n; i++) {
		std::cout << sin(a + (i * h)) << " ";
	}
}

void ForClass::ForClass31(int n) {
	float previos = 2;
	for (int i = 0; i <= n; i++) {
		previos = 2 + (1 / previos);
		std::cout << previos << std::endl;
	}
}

void ForClass::ForClass32(int n) {
	float previos = 1;
	int k = 1;
	for (int i = 0; i <= n; i++) {
		previos = (previos + 1) / k;
		k++;
		std::cout << previos << std::endl;
	}
}

void ForClass::ForClass33(int n) {
	float f1 = 1.0;
	float f2 = 1.0;
	std::cout << f1 << std::endl;
	std::cout << f2 << std::endl;
	float temp;
	for (int i = 0; i < n; i++) {
		temp = f1;
		f1 = f1 + f2;
		f2 = temp;
		std::cout << f1 << std::endl;
	}
}

void ForClass::ForClass36(int n, int k) {
	for (float i = 1.0; i <= n; i++) {
		std::cout << pow(i, k) << std::endl;
	}
}

void ForClass::ForClass37(int n) {
	for (int i = 1, j = 1; i <= n && j <= n; i++, j++) {
		std::cout << pow(i, j) << std::endl;
	}
}

void ForClass::ForClass38(int n) {
	for (int i = 1, j = n; i <= n && j >= 1; i++, j--) {
		std::cout << pow(i, j) << std::endl;
	}
}

void ForClass::ForClass39(int a, int b) {
	for (int i = a; i <= b; i++) {
		for (int j = 1; j <= i; j++) {
			std::cout << i << " ";
		}
		std::cout << "\n";
	}
}

void ForClass::ForClass40(int a, int b) {
	for (int i = a; i <= b; i++) {
		for (int j = 0; j <= i - a; j++) {
			std::cout << i << " ";
		}
		std::cout << "\n";
	}
}