/*
** EPITECH PROJECT, 2025
** G-PDG-300-LYN-3-1-nanotekspice-10
** File description:
** VM.cpp
*/

#include "../../include/VM/VM.hpp"
#include <csignal>

static volatile sig_atomic_t g_running = 1;

static void handle(int)
{
    g_running = 0;
}

namespace nts {

    VM::VM(const std::string &filename)
    {
        Parser parser(filename);
        _circuit = parser.parse();
    }

    void VM::run()
    {
        std::string line;
        bool looping = false;

        while (true) {
            if (!looping)
                std::cout << "> ";

            if (!std::getline(std::cin, line))
                break;
            if (line.empty())
                continue;

            if (line == "exit")
                break;
            else if (line == "display")
                _circuit.display();
            else if (line == "simulate")
                cmdSimulate();
            else if (line == "loop") {
                looping = true;
                cmdLoop();
                looping = false;
            } else
                cmdSet(line);
        }
    }

    void VM::cmdSimulate()
    {
        _circuit.simulate(_circuit.getTick() + 1);
    }

    void VM::cmdLoop()
    {
        g_running = 1;
        std::signal(SIGINT, handle);
        while (g_running) {
            _circuit.simulate(_circuit.getTick() + 1);
            _circuit.display();
        }
        std::signal(SIGINT, SIG_DFL);
    }

    void VM::cmdSet(const std::string &line)
    {
        std::size_t eq = line.find('=');
        if (eq == std::string::npos) {
            std::cerr << "Unknown command: " << line << std::endl;
            return;
        }

        std::string name = line.substr(0, eq);
        std::string value = line.substr(eq + 1);
        nts::Tristate val;

        if (value == "0")
            val = nts::False;
        else if (value == "1")
            val = nts::True;
        else if (value == "U")
            val = nts::Undefined;
        else
            throw std::invalid_argument("Invalid value: " + value);

        _circuit.setInputValue(name, val);
    }
}
