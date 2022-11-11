#include "SortedMatrix.h"

std::vector<std::vector<int>> SortedMatrix::SortEvenColums(std::vector<std::vector<int>> matrixValue, std::shared_ptr<ISort> sort, std::vector<ColumSum> columsSumses)
{
	sort->Sort(columsSumses,static_cast<int>(columsSumses.size()));
	int indexC = 0;
	for (int i = 1; i <= numberOfColums/2; i += 2)
	{
		for (int j = 0; j < numberOfLines; j++)
			std::swap(matrixValue[j][i], matrixValue[j][columsSumses[indexC].GetIndex()]);
		indexC++;
	}

	return matrixValue;
}

std::vector<ColumSum> SortedMatrix::GetColumSum(std::vector<std::vector<int>> matrixValue)
{
	int sum = 0;
	std::vector<ColumSum> tmp;
	for (int i = 1; i < numberOfColums; i+=2)
	{
		sum = 0;
		for (int j = 0; j < numberOfLines; j++)
		{
			sum += matrixValue[j][i];
		}
		tmp.emplace_back(ColumSum(sum, i));
	}
	return tmp;
}


int SortedMatrix::GetNumberOflines()
{
	return numberOfLines;
}

int SortedMatrix::GEtNumberOfColums()
{
	return numberOfColums;
}

std::vector<std::vector<int>> SortedMatrix::GetMatrix()
{
	return matrix;
}

void SortedMatrix::Show()
{
	
	std::cout <<  std::endl;
	for (int i = 0; i < numberOfLines; i++)
	{
		for (int j = 0; j < numberOfColums; j++)
		{
			std::cout << matrix[i][j] << "\t";
		}
		std::cout << std::endl;
	}
	std::cout << "\n\n" << std::endl;
	
	std::cout << "\n\n" << std::endl;
}
