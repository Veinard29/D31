#ifndef _VKSTUDENTLIST_H_
#define _VKSRUDENTLIST_H_
#include "VKList.h"
#include "VKSubject.h"
#include "VKStudent.h"
class VKStudentList : public VKList
{
public:
  VKStudentList *GetExcellentStudents(void);
  VKStudentList *GetBadStudents(void);
  float Average(void);
  float Average(VKSubject &subject);
};

#endif 
