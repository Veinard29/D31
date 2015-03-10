#ifndef _VKMARKLIST_H_
#define _VKMARKLIST_H_
#include "VKList.h"
#include "VKMark.h"
class VKMarkList : public VKList
{
public:
  unsigned int MinMark(void);
  unsigned int MaxMark(void);
  float Average(void);
  float Average(VKSubject &subject);
};

#endif 
