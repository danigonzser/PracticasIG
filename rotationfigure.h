#ifndef ROTATIONFIGURE_H
#define ROTATIONFIGURE_H

#include "object3d.h"

class _rotationfigure:public _object3D
{
public:

    int n; //(default = 3) número de giros
    int m; //(default = 3) número de puntos

    _rotationfigure(int n = 4, int m = 3, float Size=0.5);
    void draw_point();
    void draw_fill();
    void draw_chess();

};

#endif // ROTATIONFIGURE_H