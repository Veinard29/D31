#ifndef _VKGROUP_H_
#define _VKGROUP_H_
#include "VKObject.h"
#include "VKStudentList.h"
class VKGroup : public VKObject
{
public:
  VKGroup(void);
  VKGroup(string _Name, VKStudentList *_students);
  virtual ~VKGroup(void);
  string ClassName(void);
  string Print(void);
  string GetName(void);
  void SetName(string _Name);
  VKStudentList *GetStudents(void);
  VKStudentList *GetExcellentStudents(void);
  VKStudentList *GetBadStudents(void);
  float Average(void);
  float Average(VKSubject &subject);
  void Clear();
  void AddStudent(VKStudent *student);
  void RemoveStudent(VKStudent *student);
  VKGroup &operator+(VKStudent *student);
  bool operator==(VKObject &object);
private:
  string Name;
  VKStudentList *students;
};

#endif 
