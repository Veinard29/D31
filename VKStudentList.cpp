#include "VKStudentList.h"
VKStudentList *VKStudentList::GetExcellentStudents(void)
{
  VKStudentList *e = new VKStudentList();

  if (head == 0)
    return e;
  while (head->GetPreviousObject() != 0)
    head = head->GetPreviousObject();

  VKListObject *tmp = head;
  while (tmp != 0)
  {
    VKStudent *s = dynamic_cast<VKStudent*>(tmp->GetObject());
    if (s->IsExcellent())
    {
      e->Add(new VKStudent(s->GetName(), s->GetSex(), s->GetAge()));
    }
    tmp = tmp->GetNextObject();
  }
  return e;
}
VKStudentList *VKStudentList::GetBadStudents(void)
{
  VKStudentList *e = new VKStudentList();

  if (head == 0)
    return e;
  while (head->GetPreviousObject() != 0)
    head = head->GetPreviousObject();
  VKListObject *tmp = head;
  while (tmp != 0)
  {
    VKStudent *s = dynamic_cast<VKStudent*>(tmp->GetObject());
    if (s->IsBad())
    {
      e->Add(new VKStudent(s->GetName(), s->GetSex(), s->GetAge()));
    }
    tmp = tmp->GetNextObject();
  }
  return e;
}
float VKStudentList::Average(void)
{
  float avg = 0.0;
  unsigned int count = 0;
  if (head == 0)
    return avg;
  while (head->GetPreviousObject() != 0)
    head = head->GetPreviousObject();
  VKListObject *tmp = head;
  while (tmp != 0)
  {
    avg += dynamic_cast<VKStudent*>(tmp->GetObject())->GetMarks()->Average();
    count++;
    tmp = tmp->GetNextObject();
  }
  return avg / count;
}
float VKStudentList::Average(VKSubject &subject)
{
  float avg = 0.0;
  unsigned int count = 0;
  if (head == 0)
    return avg;
  while (head->GetPreviousObject() != 0)
    head = head->GetPreviousObject();
  VKListObject *tmp = head;
  while (tmp != 0)
  {
    float a = dynamic_cast<VKStudent*>(tmp->GetObject())->GetMarks()->Average(subject);
    if (a > 0)
    {
      avg += a;
      count++;
    }
  }
  return avg / count;
}
