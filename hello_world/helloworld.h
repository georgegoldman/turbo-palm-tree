#pragma once

#include <gtkmm/button.h>
#include <gtkmm/window.h>


class HelloWorld : public Gtk::Window
{
public:
    HelloWorld();
    ~HelloWorld() override;
    void response_to_greeting();

protected:
    // Signal handlers:
    void on_button_clicked();


    //member widgets:
    Gtk::Button m_button;
};

