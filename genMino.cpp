#include <cstdlib>
#include "genMino.h"
#define NUM_MINO 3
#define MINO_I 0
#define MINO_J 1
#define MINO_Z 2

Mino* genMino()
{
	int mino_type;
	Mino* ptr;

	mino_type=random() % NUM_MINO;

	switch (mino_type)
	{
		case MINO_I:
			ptr=new MinoI;
			break;
		case MINO_J:
			ptr=new MinoJ;
			break;
		case MINO_Z:
			ptr=new MinoZ;
			break;
	}
	return ptr;
}
			
