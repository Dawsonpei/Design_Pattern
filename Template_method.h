#ifndef DESIGN_PATTERN_TEMPLATE_METHOD_H
#define DESIGN_PATTERN_TEMPLATE_METHOD_H

// Library development -- sample code
class Template_method {
public:
    // Template method-->stable
    void mainProcess()
    {
        step1();
        if(step2()) step3();        // step2()-->变化，虚函数的多态调用
        for(int i = 0; i < 5; ++i)
            step4();                // step4()-->变化，虚函数的多态调用
        step5();
    }
    virtual ~ Template_method() = default;

protected:
    void step1() {}     // step1/3/5-->稳定
    void step3() {}
    void step5() {}
    virtual bool step2() { return true; }
    virtual void step4() {}
};


#endif //DESIGN_PATTERN_TEMPLATE_METHOD_H
