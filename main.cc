#include "helloworld.h"
#include <gtkmm/application.h>

int main(int argc, char* argv[])
{
    auto app = Gtk::Application::create("org.gtkm.example");

    //shows the windows and return when it is closed
    return app->make_window_and_run<HelloWorld>(argc, argv);
}