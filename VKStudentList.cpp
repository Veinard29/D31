#include "VKStudentList.h"

string VKStudentList::GetClassName()
{
  return "VKStudentList";
}

VKStudentList VKStudentList::GetExcellentStudents()
{
  VKStudentList e;

  for (list<VKStudent>::iterator s = students.begin(); s != students.end(); ++s)
  {
    if (s->IsExcellent())
    {
      e.students.push_back(VKStudent(s->GetName(), s->GetSex(), s->GetAge()));
    }
  }
  return e;
}
VKStudentList VKStudentList::GetBadStudents()
{
  VKStudentList e;

  for (list<VKStudent>::iterator s = students.begin(); s != students.end(); ++s)
  {
    if (s->IsBad())
    {
      e.students.push_back(VKStudent(s->GetName(), s->GetSex(), s->GetAge()));
    }
  }
  return e;
}
float VKStudentList::Average()
{
  float avg = 0.0;
  unsigned int count = 0;
  for (list<VKStudent>::iterator s = students.begin(); s != students.end(); ++s)
  {
    avg += s->GetMarks().Average();
    count++;
  }
  return avg / count;
}
float VKStudentList::Average(const VKSubject& subject)
{
  float avg = 0.0;
  unsigned int count = 0;

  for (list<VKStudent>::iterator s = students.begin(); s != students.end(); ++s)
  {
    float a = s->GetMarks().Average(subject);
    if (a > 0)
    {
      avg += a;
      count++;
    }
  }
  return avg / count;
}

string VKStudentList::Print()
{
  stringstream result;
  for (list<VKStudent>::iterator s = students.begin(); s != students.end(); ++s)
  {
    result << s->Print() << endl;
  }
  return result.str();
}
void VKStudentList::Clear()
{
  students.clear();
}
void VKStudentList::Add(const VKStudent& student)
{
  students.push_back(student);
}
void VKStudentList::Remove(const VKStudent& student)
{
  students.remove(student);
}
