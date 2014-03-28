// Implementacja problemu maksymalnej podtablicy przy z³o¿onoœci O(N)
#include <climits>
#include "max_subarray.h"

param max_subarray(int *tab, int size) // funkcja zwracaj¹ca parametry maksymalnej podtablicy : wielkoœæ, rozmiar itd. 
{
	param results; 
	int best_sum = INT_MIN;
	int best_temp = 0;
	int right_best = 0;
	int left_best = 0;
	int left_temp = 0;


	for (int i = 0; i < size; i++) // pêtla, która idzie po naszej ca³ej tablicy. 
	{
		best_temp += tab[i]; 
		if (best_temp < 0)
		{
			best_temp = 0;
			left_temp = i+1;

		}
		if (best_temp >= best_sum)
		{
			best_sum = best_temp;
			left_best = left_temp;
			right_best = i;

		}
	
	}



}