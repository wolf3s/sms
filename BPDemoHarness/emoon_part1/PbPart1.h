#ifndef _PBPART1_H_
#define _PBPART1_H_

#include <tamtypes.h>
#include "PbMatrix.h"

void* PbPart1_DrawObject( PbMatrix* pCameraToScreen,PbMatrix* pWorlToCamera,
                          float* pAngles, void* pChain );

#endif//_PBPART1_H_

