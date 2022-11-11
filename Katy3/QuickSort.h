#pragma once
#include "ISort.h"
#include <iostream>

class QuickSort : public ISort
{
public:
	void PrintCounters() override;

	void Sort(std::vector<ColumSum>& arr, int size) override;
	void Quicksort(std::vector<ColumSum>& arr, int start, int end);

	int Partition(std::vector<ColumSum>& arr, int start, int end);
};

