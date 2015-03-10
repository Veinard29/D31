#ifndef _VKSTUDENT_H_
#define _VKSTUDENT_H_
#include "VKObject.h"
#include "VKMarkList.h"
class VKStudent : public VKObject
{
public:
  VKStudent(void);
  VKStudent(string _Name, bool _Sex, unsigned int _Age, VKMarkList *_marks = 0);
  ~VKStudent(void);
  string ClassName(void);
  string Print(void);
  bool operator==(VKObject &object);
  string GetName(void);
  void SetName(string _Name);
  bool GetSex(void);
  void SetSex(bool _Sex);
  unsigned int GetAge(void);
  void SetAge(unsigned int _Age);
  VKMarkList *GetMarks(void);
  bool IsExcellent(void);
  bool IsBad(void);
  void AddMark(VKMark *mark);
private:
  string Name;
  bool Sex;
  unsigned int Age;
  VKMarkList *marks;
};

#endif 
