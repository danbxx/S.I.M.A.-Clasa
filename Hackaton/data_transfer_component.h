#pragma once

#include <raylib.h>
#include "component.h"
#include "actor.h"

class DataTransferComponent : public Component {

public:
    Actor* actor;
    int additional_data;
    DataTransferComponent() {}
};
