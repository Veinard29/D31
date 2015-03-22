#include "VKList.h"
VKList::VKList(void)
{
  head = 0;
}
VKList::VKList(VKObject *object)
{
  head = new VKListObject(object);
}
VKList::~VKList(void)
{
  Clear();
}
string VKList::Print(void)
{
  if (head == 0)
    return "";
  while (head->GetPreviousObject() != 0)
    head = head->GetPreviousObject();
  VKListObject *tmp = head;
  stringstream result;
  while (tmp != 0)
  {
    result << tmp->GetObject()->Print() << std::endl;
    tmp = tmp->GetNextObject();
  }
  return result.str();
}
void VKList::Add(VKObject *object)
{
  if (head == 0)
  {
    head = new VKListObject(object);
  }
  else
  {
    while (head->GetPreviousObject() != 0)
      head = head->GetPreviousObject();
    VKListObject *tmp = head;
    while (tmp->GetNextObject() != 0)
      tmp = tmp->GetNextObject();
    tmp->SetNextObject(new VKListObject(object), true);
  }
}

void VKList::Remove(VKObject *object)
{
  if (head == 0)
    return;
  while (head->GetPreviousObject() != 0)
    head = head->GetPreviousObject();
  VKListObject *tmp = head;
  while (tmp->GetNextObject() != 0)
  {
    if (*(tmp->GetObject()) == *object)
    {
      if (tmp->GetPreviousObject() == 0 && tmp->GetNextObject() == 0)
        head = 0;
      else if (tmp->GetPreviousObject() == 0)
        head = tmp->GetNextObject();
      else
        head = tmp->GetPreviousObject();
      delete tmp;
      return;
    }
    else
    tmp = tmp->GetNextObject();
  }
}
void VKList::Clear(void)
{
  if (head == 0)
    return;
  while (head->GetPreviousObject() != 0)
    head = head->GetPreviousObject();
  VKListObject *tmp = head;
  while (head != 0)
  {
    tmp = head;
    head = head->GetNextObject();
    delete tmp;
  }
}

