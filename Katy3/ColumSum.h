#pragma once
class ColumSum
{
private:
	int value;
	int index;
public:
	ColumSum(int _value, int _index)
		:value(_value),index(_index)
	{}

	int GetValue();

	int GetIndex();
};

