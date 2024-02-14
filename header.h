#ifndef header.h
#define header.h

class Base
{
private:
    int x;
    int y;

public:
    Base(int x, int y);

    void setX(int x);
    void setY(int y);
    int getX();
    int getY();
};

Base::Base(int x, int y)
{
    this->x = x;
    this->y = y;
    std::cout << "\nОбъект создан!\n";
}

void Base::setX(int x)
{
    this->x = x;
}

void Base::setY(int y)
{
    this->y = y;
}

int Base::getX()
{
    return x;
}

int Base::getY()
{
    return y;
}


#endif
