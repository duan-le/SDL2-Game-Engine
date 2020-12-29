#pragma once

#include "Entity.h"

class GameObject : public Entity {
  public:
    virtual void update() = 0;
    virtual void draw() = 0;
    virtual void clean() = 0;
};
