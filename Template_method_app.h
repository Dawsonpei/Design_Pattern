#ifndef DESIGN_PATTERN_TEMPLATE_METHOD_APP_H
#define DESIGN_PATTERN_TEMPLATE_METHOD_APP_H

#include "Template_method.h"

// Application development -- sample code
class Template_method_app : public Template_method
{
protected:
    bool step2() override { return true; }

    void step4() override {}
    ~ Template_method_app() override = default;
};

#endif //DESIGN_PATTERN_TEMPLATE_METHOD_APP_H
