#include "VKListObject.h"
VKListObject::VKListObject(void)
{
  object = 0;
  previous = 0;
  next = 0;
}
VKListObject::VKListObject(VKObject *_object)
{
  object = _object;
  previous = 0;
  next = 0;
}
VKListObject::~VKListObject(void)
{
  if (object != 0)
    delete object;
  if (previous != 0)
    previous->SetNextObject(next, true);
  if (next != 0)
    next->SetPreviousObject(previous, true);
}
VKObject *VKListObject::GetObject(void)
{
  return object;
}
void VKListObject::SetObject(VKObject *_object)
{
  object = _object;
}
VKListObject *VKListObject::GetPreviousObject(void)
{
  return previous;
}
void VKListObject::SetPreviousObject(VKListObject *_object, bool bInsertOnly)
{
  previous = _object;
  if (!bInsertOnly)
    previous->SetNextObject(this);
}
VKListObject *VKListObject::GetNextObject(void)
{
  return next;
}
void VKListObject::SetNextObject(VKListObject *_object, bool bInsertOnly)
{
  next = _object;
  if (!bInsertOnly)
    next->SetPreviousObject(this);
}

