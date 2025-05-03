#include "SerialIn.h"

SerialIn::SerialIn() : m_message(""), m_show_overloading(true)
{
}
void SerialIn::reset_bootsel()
{
    reset_usb_boot(0, 0);
}
void SerialIn::update()
{
    // Check to see if anything is available in the serial receive buffer
    while (tud_cdc_available())
    {
        char chr = getchar();
        if (chr == CTRL_C)
            reset_bootsel();
    }
}
