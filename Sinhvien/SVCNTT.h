#pragma once
#include "SV.h"

class SVCNTT : public SV{
    public:
        SVCNTT(const string& = "", const string& = "", const float& = 0, const int& = 0, const int& = 0, const int& = 0, const int& = 0);
        ~SVCNTT();

        void Xeploai() override;
        void Show() override;
};
