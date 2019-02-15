#include <iostream>
#include "CharacterTest.h"
#include <conio.h>
//#include "SorterTest.h"
#include <vector>

using namespace std;

int main()
{
	CharacterTest t;

	//SorterTest x;

	_getch();
}

//template <class T>
//class Sorter
//{
//public:
//
//	vector<T> v;
//
//	Sorter(vector<T>);
//
//	void swap(T*, T*);
//	void bubbleSort(T arr[], T n);
//
//	void sort();
//
//};
//
//template <class T>
//Sorter<T>::Sorter(vector<T> x)
//{
//	this->v = x;
//}
//
//template<class T>
//void Sorter<T>::swap(T *xp, T *yp) {
//
//	T temp = *xp;      
//	*xp = *yp;      
//	*yp = temp;
//
//}
//
//template <class T>
//void Sorter<T>::bubbleSort(T arr[], T n)
//{
//	int i, j;
//	for (i = 0; i < n-1; i++)
//	{
//		for (j = 0; j < n - i - 1; j++)
//		{
//			if(arr[j] > arr[j + 1)
//				swap(&arr[j], &arr[j + 1]);
//		}
//	}
//}
//
//template <class T>
//void Sorter<T>::sort()
//{
//	bubbleSort(v, T n);
//}