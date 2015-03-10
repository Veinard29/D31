#ifndef _VKMARK_H_
#define _VKMARK_H_
#include "VKObject.h"
#include "VKSubject.h"
class VKMark : public VKObject
{
public:
  VKMark(void);
  VKMark(VKSubject _subject, unsigned int _mark);
  string ClassName(void);
  string Print(void);
  bool operator==(VKObject &object);
  VKSubject GetSubject(void);
  void SetSubject(VKSubject _subject);
  unsigned int GetMark(void);
  void SetMark(unsigned int _mark);
private:
  VKSubject subject;
  unsigned int mark;
};

#endif 
