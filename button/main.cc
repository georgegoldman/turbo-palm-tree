#include "buttons.h"
#include <gtkmm/application.h>

int main(int argc, char *argv[])
{
    auto app = Gtk::Application::create("org.gtkmm.example");

    // show the window and return when it is closed.
    return app->make_window_and_run<Buttons>(argc, argv);
}