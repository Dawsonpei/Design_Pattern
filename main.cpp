#include <iostream>
#include "Template_method.h"
#include "Template_method_app.h"
using namespace std;

namespace TemplateMethod
{
    int test_template_method()
    {
        Template_method * ptr = new Template_method_app;
        ptr->mainProcess();
        delete ptr;
        return 0;
    }
}


#include <iostream>
using namespace std;

namespace StrategyPattern
{
    int test_strategy_pattern()
    {
        return 0;
    }
}
