#include "buttons.h"
#include <gtkmm/box.h>
#include <gtkmm/image.h>
#include <gtkmm/label.h>
#include <iostream>

Buttons::Buttons()
{
    // this correspond to Gtk::Bin::add_pixlabel("info.xpm", "cool button") in gtkmm 3
    // create image and label widgets:
    auto pmap = Gtk::make_managed<Gtk::Image>("info.xpm");
    auto label = Gtk::make_managed<Gtk::Label>("cool button");
    label->set_expand(true);

    // put them in a Box:
    auto hbox = Gtk::make_managed<Gtk::Box>(Gtk::Orientation::HORIZONTAL, 5);
    hbox->append(*pmap);
    hbox->append(*label);

    // And put that box in the button:
    m_button.set_child(*hbox);

    set_title("Pixmap'd buttons!");

    m_button.signal_clicked().connect(sigc::mem_fun(*this, &Buttons::on_button_clicked));
    m_button.set_margin(10);
    set_child(m_button);
}

Buttons::~Buttons()
{
}

void Buttons::on_button_clicked()
{
    std::cout << "The button was clicked." << std::endl;
}