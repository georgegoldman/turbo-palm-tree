#pragma once

#include <gtkmm/window.h>
#include <gtkmm/button.h>

class Buttons : public Gtk::Window
{
private:
    /* data */
public:
    Buttons(/* args */);
    virtual ~Buttons();

protected:
    //signal handlers:
    void on_button_clicked();

    //child widgets:
    Gtk::Button m_button;
};

