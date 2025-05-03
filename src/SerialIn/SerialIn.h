#pragma once

#include <tusb.h>
#include <string>
#include "pico/bootrom.h"
#include <stdio.h>

#define CTRL_C 3
#define CTRL_D 4
#define CTRL_X 24
#define CTRL_Z 26

#define CMD_SHOW "show"
#define CMD_DELETE "delete"
#define CMD_SET "set"
#define CMD_ADD "add"

#define PARAM_OVERLOADING "overloading"
#define PARAM_MAX_BRIGHT "max bright"
#define PARAM_SENSITIVITY "sensitivity"
#define PARAM_VOLUME_THRESHOLD "volume threshold"
#define PARAM_CONFIG "config"
#define PARAM_MACHINE_VOLUME "volume"

class SerialIn
{
private:
    std::string m_message;
    bool m_show_overloading;
    void reset_bootsel();

public:
    void update();
    SerialIn();
};