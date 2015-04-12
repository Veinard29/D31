#pragma once
#include "VKListObject.h"
class VKList
{
public:

  VKList(void);
  VKList(VKObject *object);
  virtual ~VKList(void);
  virtual string Print(void);

  virtual void Add(VKObject *object);
  virtual void Remove(VKObject *object);
  virtual void Clear(void);
protected:
  VKListObject *head;
};
