#include <stdio.h>
#include <stdlib.h>

int numbers[25];

#define ARRAY_SIZE(_a) sizeof(_a) / sizeof(_a[0])

static void sirala(int arr[], int n)
{
	for (int i = 0; i < n; i++) {
		for (int j = 0 ; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

static void doldur(int arr[], int n)
{
    //yaz_beni;
}

static void yazdir(int arr[], int n)
{
    //yaz_beni;
}

int main(void)
{
	doldur(numbers, ARRAY_SIZE(numbers));
	yazdir(numbers, ARRAY_SIZE(numbers));
	sirala(numbers, ARRAY_SIZE(numbers));
	yazdir(numbers, ARRAY_SIZE(numbers));
	return 0;
}

