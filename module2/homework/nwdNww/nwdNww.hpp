#pragma once

int NWD(int lhs, int rhs)
{
	if (lhs == 0 && rhs == 0)
	{
		return 0;
	}

	if (lhs < 0 )
	{
		lhs *= -1;
	}

	if (rhs < 0)
	{
		rhs *= -1;
	}

	while (rhs != 0)
	{
		int temp = rhs;
		rhs = lhs % rhs;
		lhs = temp;
	}

	return lhs;
}

int NWW(int lhs, int rhs)
{
	if (lhs == 0 || rhs == 0)
		return 0;

	if (lhs < 0 )
	{
		lhs *= -1;
	}

	if (rhs < 0)
	{
		rhs *= -1;
	}

	return (lhs * rhs) / NWD(lhs, rhs);
}

