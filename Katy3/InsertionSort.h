#pragma once
#include "ISort.h"

class InsertionSort : public  ISort
{
public:
	

	void PrintCounters() override;

	void Sort(std::vector<ColumSum>& arr, int size) override;

};

