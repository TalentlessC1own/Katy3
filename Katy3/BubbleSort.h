#pragma once
#include "ISort.h"

class BubbleSort : public ISort
{
public:


	void PrintCounters() override;

	void Sort(std::vector<ColumSum>& arr, int size) override;


};
