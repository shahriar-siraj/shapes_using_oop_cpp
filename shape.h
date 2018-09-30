#ifndef _SHAPE_H
#define _SHAPE_H

class Shape
{
    protected:
        double width;
        double height;
    public:
        void setHeight(double);
        void setWidth(double);
        virtual double getArea() = 0;
};

#endif