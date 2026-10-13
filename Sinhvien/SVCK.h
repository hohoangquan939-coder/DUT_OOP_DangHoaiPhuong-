#pragma once
#include "SV.h"

class SVCK : public SV{
    public:
        SVCK(const string&, const string&, const float&, const int&, const int&, const int&, const int&);
        ~SVCK();

        void Xeploai() override;
        void Show() override;
};