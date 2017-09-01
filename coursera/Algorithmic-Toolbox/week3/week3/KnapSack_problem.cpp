// KnapSack_problem.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include<stdio.h>
#include<iostream>
#include <vector>
#include<algorithm>
#include<stdlib.h>
using namespace std;
using std::vector;

double get_optimal_value(int capacity, vector<int> weights, vector<int> values) {
	double value = 0.0;
	int n = weights.size();

	vector<float> v_per_w(n);
	for (int i = 0; i < n; i++)
	{
		v_per_w[i] = (float)((float)values[i] / (float)weights[i]);
		//cout << v_per_w[i] << endl;
	}
	 
	int capacity_remaining = capacity;
	double V = 0;
	vector<float>::iterator it;
	int index;
	for (int i = 0; i < n; i++)
	{
		if (capacity_remaining == 0) {
			return value = V;
		}
			
		else
		{

			it = find(v_per_w.begin(),v_per_w.end(),*max_element(v_per_w.rbegin(),v_per_w.rend()));
			index = distance(v_per_w.begin(), it);
			if (capacity_remaining > weights[index])
			{
				V = V + values[index];
				capacity_remaining = capacity_remaining - weights[index];
			}
			else
			{
				V = V + (capacity_remaining * v_per_w[index]);
				capacity_remaining = 0;
			}
		}

		v_per_w.erase(v_per_w.begin() + index);
		values.erase(values.begin() + index);
		weights.erase(weights.begin() + index);
		value = V;
	}



	return value;
}

int main() {
	int n;
	int capacity;
	std::cin >> n >> capacity;
	vector<int> values(n);
	vector<int> weights(n);
	for (int i = 0; i < n; i++) {
		std::cin >> values[i] >> weights[i];
	}

	double optimal_value = get_optimal_value(capacity, weights, values);


	std::cout.precision(10);
	std::cout << optimal_value << std::endl;

	return 0;
}