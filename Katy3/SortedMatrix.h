#pragma once
#include <iostream>
#include <vector>
#include "ISort.h"
#include "GetColum.h"
#include "ColumSum.h"



class SortedMatrix
{
private:
	int numberOfLines;
	int numberOfColums;
	std::vector<std::vector<int>> matrix;
	std::vector<std::vector<int>> matrixLines;
	std::vector<std::vector<int>> SortEvenColums(std::vector<std::vector<int>> matrix, std::shared_ptr<ISort> sort, std::vector<ColumSum> columsSums);
	std::vector<ColumSum> columsSums;

	std::vector<ColumSum> GetColumSum(std::vector<std::vector<int>> matrix);
	
	
public:
	SortedMatrix( std::vector<std::vector <int>> matrixValue,std::shared_ptr<ISort> sort)
	{
		numberOfLines = static_cast<int>(matrixValue.size());
		numberOfColums =static_cast<int>(matrixValue[0].size());
		columsSums = GetColumSum(matrixValue);
		matrix = SortEvenColums(matrixValue, sort, columsSums);
		
	}
	int GetNumberOflines();
	int GEtNumberOfColums();
	std::vector<std::vector<int>> GetMatrix();


	void Show();
};

