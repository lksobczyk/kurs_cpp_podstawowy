#pragma once

int NWD(int lhs, int rhs)
{
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
	return (lhs * rhs) / NWD(lhs, rhs);
}
