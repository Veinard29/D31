#ifndef _VKSUBJECT_H_
#define _VKSUBJECT_H_
#include "VKObject.h"
class VKSubject : public VKObject
{
public:
  VKSubject(void);
  VKSubject(string _SubjectName);
  string ClassName(void);
  string Print(void);
  bool operator==(VKObject &object);
  string GetSubjectName(void);
  void SetSubjectName(string _SubjectName);
private:
  string SubjectName;
};

#endif 
