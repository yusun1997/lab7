#include "Mino.h"
Mino::Mino(int mri):max_ri(mri){};
Mino& Mino::turn()
{
	rotate_index = (rotate_index>=max_ri)?0:rotate_index+1;
	try
	{
		throw 3.0;
	}
	catch (double)
	{
		cout << "exception caught" <<endl;
	}
	return *this;
}
