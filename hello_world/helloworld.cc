#include "helloworld.h"
#include <iostream>

HelloWorld::HelloWorld()
: m_button("Hello World") // create new button with label "Hello world"
{
    // Sets the margin around the button
    m_button.set_margin(10);

    // When the button recieves the "clicked " signal, it will call the
    // on_button_clicked() method defined below .
    m_button.signal_clicked().connect(sigc::mem_fun(*this,
            &HelloWorld::on_button_clicked));

    // This pack the button into the window (a container).
    set_child(m_button);
}

HelloWorld::~HelloWorld()
{
}

void HelloWorld::on_button_clicked()
{
    std::string name, response;
    std::cout<< "Hi"<< std::endl;
    
    
}

void HelloWorld::response_to_greeting()
{
    std::cout<< "Wow that is nice to hear" << std::endl;
}