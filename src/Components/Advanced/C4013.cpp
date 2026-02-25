#include "../../../include/Components/Advanced/C4008.hpp"

#include "../../../include/Components/Advanced/C4013.hpp"

void nts::C4013::simulate(std::size_t tick)
{
    (void)tick;

    nts::Tristate clk1 = getLinkValue(3);
    nts::Tristate clk2 = getLinkValue(11);
    nts::Tristate s1 = getLinkValue(6);
    nts::Tristate r1 = getLinkValue(4);
    nts::Tristate d1 = getLinkValue(5);
    nts::Tristate s2 = getLinkValue(8);
    nts::Tristate r2 = getLinkValue(9);
    nts::Tristate d2 = getLinkValue(10);

    if (s1 == True)
        _q1 = True;
    else if (r1 == True)
        _q1 = False;
    else if (_prevClk1 == False && clk1 == True)
        _q1 = d1;
    _prevClk1 = clk1;

    if (s2 == True)
        _q2 = True;
    else if (r2 == True)
        _q2 = False;
    else if (_prevClk2 == False && clk2 == True)
        _q2 = d2;
    _prevClk2 = clk2;
}

nts::Tristate nts::C4013::compute(std::size_t pin)
{
    if (pin == 1)
        return _q1;
    if (pin == 13)
        return _q2;
    if (pin == 2) {
        if (_q1 == True)
            return False;
        if (_q1 == False)
            return True;
        return Undefined;
    }
    if (pin == 12) {
        if (_q2 == True)
            return False;
        if (_q2 == False)
            return True;
        return Undefined;
    }
    return getLinkValue(pin);
}
