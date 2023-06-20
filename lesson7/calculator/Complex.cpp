#include "Complex.h"
#include <string>

Complex::Complex(std::string stringValue)
{
    real_ = 0;
    std::string value = "";
    bool firstValue = true;
    int len = stringValue.size();
    for (int i = 0; i < len; i++)
    {
        if (stringValue[i] != ' ')
        {
            value += stringValue[i];
        }
        else
        {
            real_ = atof(value.c_str());
            firstValue = false;
            value = "";
        }
    }
    if (value.size() > 0 && !firstValue)
    {       
        imaginary_ = atof(value.c_str());
    }
    else if (value.size() > 0 && firstValue) {
        real_ = atof(value.c_str());
        imaginary_ = 0;
    }
    else
    {
        imaginary_ = atof(value.c_str());
    }
}

double Complex::GetReal()
{
    return this->real_;
}

double Complex::GetImaginary()
{
    return this->imaginary_;
}

std::string Complex::ToString()
{
    if (imaginary_ != 0)
        return std::to_string(real_) + " + " + std::to_string(imaginary_) + "i";
    return std::to_string(real_);
}

Complex Complex::operator+(Complex &a)
{
    double newReal = this->GetReal() + a.GetReal();
    double newImaginary = this->GetImaginary() + a.GetImaginary();
    return Complex(newReal, newImaginary);
}

Complex Complex::operator-(Complex &a)
{
    double newReal = this->GetReal() - a.GetReal();
    double newImaginary = this->GetImaginary() - a.GetImaginary();
    return Complex(newReal, newImaginary);
}

Complex Complex::operator*(Complex &a)
{
    return Complex((this->GetReal() * a.GetReal() - this->GetImaginary() * a.GetImaginary()),
        (this->GetReal() * a.GetImaginary() + this->GetImaginary() * a.GetReal()));
}

Complex Complex::operator/(Complex& a)
{
    double devider = a.GetReal() * a.GetReal() + a.GetImaginary() * a.GetImaginary();
    double real = (this->GetReal() * a.GetReal() + this->GetImaginary() * a.GetImaginary()) / devider;
    double imaginary = (this->GetImaginary() * a.GetReal() - this->GetReal() * a.GetImaginary()) / devider;
    return Complex(real, imaginary);
}

Complex Complex::operator=(Complex& a)
{
    if (&a != this) {
        real_ = a.GetReal();
        imaginary_ = a.GetImaginary();
    }
    return *this;
}

std::ostream& operator<<(std::ostream& object, const Complex& cmpx)
{
    if (cmpx.imaginary_ == 0)
        return object << cmpx.real_;
    else
    {
        std::string possitive = cmpx.imaginary_ < 0 ? " - " : " + ";
        std::string imaginary = std::abs(cmpx.imaginary_) == 1 ? "" : std::to_string(std::abs(cmpx.imaginary_));
        return object << cmpx.real_ << possitive << imaginary << "i";
    }

}
