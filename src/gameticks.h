// gameticks.h

#include "MTypes.h"

MTicks MTickCount( void );
void InitGameTickCount( void );
void FreezeGameTickCount( void );
void UnfreezeGameTickCount( void );
unsigned int  GameTickCount( void );
