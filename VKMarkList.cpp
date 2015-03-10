#include "VKMarkList.h"
unsigned int VKMarkList::MinMark(void)
{
  unsigned int min = INT_MAX;
  if (head == 0)
    return min;
  while (head->GetPreviousObject() != 0)
    head = head->GetPreviousObject();
  VKListObject *tmp = head;
  while (tmp != 0)
  {
    unsigned int mark = dynamic_cast<VKMark*>(tmp->GetObject())->GetMark();
    if (mark < min)
      min = mark;
    tmp = tmp->GetNextObject();
  }
  return min;
}
unsigned int VKMarkList::MaxMark(void)
{
  unsigned int max = 0;
  if (head == 0)
    return max;
  while (head->GetPreviousObject() != 0)
    head = head->GetPreviousObject();
  VKListObject *tmp = head;
  while (tmp != 0)
  {
    unsigned int mark = dynamic_cast<VKMark*>(tmp->GetObject())->GetMark();
    if (mark > max)
      max = mark;
    tmp = tmp->GetNextObject();
  }
  return max;
}
float VKMarkList::Average(void)
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
    unsigned int mark = dynamic_cast<VKMark*>(tmp->GetObject())->GetMark();
    avg += mark;
    count++;
    tmp = tmp->GetNextObject();
  }

  return avg / count;
}
float VKMarkList::Average(VKSubject &subject)
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
    VKMark *mark = dynamic_cast<VKMark*>(tmp->GetObject());
    if (mark->GetSubject() == subject)
    {
      avg += mark->GetMark();
      count++;
    }
    tmp = tmp->GetNextObject();
  }
  return avg / count;
}
