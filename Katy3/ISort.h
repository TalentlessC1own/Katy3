#pragma once
#include <string>
#include <iostream>
#include "Names.h"
#include <vector>
#include "DigitsSum.h"

class ISort
{
protected:
	int comparisonCounter = 0;
	int swapCounter = 0;

public:
	int GetComprasionCounter();

	int GetSwapCountrt();

	virtual void PrintCounters();

	virtual void Sort(std::vector<DigitsSum>& arr, int size) = 0;

	virtual ~ISort() = default;

};

