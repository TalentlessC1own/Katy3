#include "../Katy3/ISort.h"
#include "../Katy3/ISort.cpp"
#include "../Katy3/BubbleSort.h"
#include "../Katy3/BubbleSort.cpp"
#include "../Katy3/InsertionSort.h"
#include "../Katy3/InsertionSort.cpp"
#include "../Katy3/SelectionSort.h"
#include "../Katy3/SelectionSort.cpp"
#include "../Katy3/ShellSort.h"
#include "../Katy3/ShellSort.cpp"
#include "../Katy3/QuickSort.h"
#include "../Katy3/QuickSort.cpp"
#include "..\Katy3\DigitsSum.h"
#include "..\Katy3\DigitsSum.cpp"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	private:
		BubbleSort bubleSort;
		InsertionSort insertionSort;
		SelectionSort selectionSort;
		ShellSort shellSort;
		QuickSort quickSort;
		
		std::vector <DigitsSum> start = { DigitsSum(0,0,4),DigitsSum(1,0,3) ,DigitsSum(2,0,2) ,DigitsSum(3,0,1) };

		std::vector<int> result = { 4,3,2,1 };



	public:

		std::vector<int> Ñrutch(std::vector <DigitsSum> something)
		{
			std::vector<int> arr;
			for (int i = 0; i < result.size(); i++)
			{
				arr.push_back(something[i].GetValue());
			}
			return arr;
		}

		TEST_METHOD(BubleTest)
		{
			std::vector <DigitsSum> temp = start;
			bubleSort.Sort(temp, static_cast<int>(temp.size()));
			for (size_t i = 0; i < temp.size(); i++)
			{
				std::cout  << temp[i].GetValue();
			}
			Assert::IsTrue(Ñrutch(temp) == result);

		}

		TEST_METHOD(InsertionTest)
		{
			std::vector<DigitsSum> temp = start;
			insertionSort.Sort(temp, static_cast<int>(temp.size()));
			Assert::IsTrue(Ñrutch(temp) == result);

		}

		TEST_METHOD(SelectionTest)
		{
			std::vector <DigitsSum> temp = start;
			selectionSort.Sort(temp, static_cast<int>(temp.size()));
			Assert::IsTrue(Ñrutch(temp) == result);

		}

		TEST_METHOD(ShellTest)
		{
			std::vector <DigitsSum> temp = start;
			shellSort.Sort(temp, static_cast<int>(temp.size()));
			Assert::IsTrue(Ñrutch(temp) == result);

		}

		TEST_METHOD(QuickTest)
		{
			std::vector <DigitsSum> temp = start;
			quickSort.Sort(temp, static_cast<int>(temp.size()));
			Assert::IsTrue(Ñrutch(temp) == result);

		}
	};
}
