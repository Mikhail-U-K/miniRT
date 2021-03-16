#include <imsl.h>
#include <stdio.h>
#include <cmath>
#include <iostream>
#include <fstream>

using namespace std;

#define F(x)    (float)(pow(M_PI,x)*sin(x))

int main()
{
    ofstream out("Output.txt");
    float a, b, e[5];
    float pi = M_PI;

    int ndata[] = {10, 20, 40, 80, 160};
    int i, j, N, l;
    l = 16;

    a = -pi;
    b = -a;

    out << "Курбан Михаил23431/5" << endl;
    out << "f(x) = e^x*sinx" << endl;
    out << "a = " << a << "  b = " << b << endl << endl;

    for(i=0;i<5;i++)
    {
        out << "Разбиение " << i+1 << endl;
        N = ndata[i];
        out << "N = " << N << endl;
        float fdata[N+1], xdata[N+1],x,y,error[N*4];
        Imsl_f_ppoly *pp;
        for(j=0;j<=N;j++)
        {
            xdata[j] = a + (float)j*(b - a)/(float)(N);
            fdata[j] = F(xdata[j]);
        }
        pp = imsl_f_cub_spline_interp_e_cnd(N+1, xdata, fdata, 0);

        for(j=0;j<=4*N;j++)
        {
            x = a + (float)j*(b - a)/(float)(4*N);
            y = imsl_f_cub_spline_value(x, pp, 0);
            error[j] = abs(F(x)-y);
        }
        for(j=0;j<=N;j++)
        {
            if(error[4*j] != 0)
                out << "В узле " << j << " значения функции и сплайна не совпадают, ошибка составляет " << error[4*j] << endl;
        }

        e[i] = error[0];
        for(j=1;j<=4*N;j++)
        {
            if(e[i] < error[j])
                e[i] = error[j];
        }
        out << "Погрешность аппроксимации " << e[i] << endl << endl;

    }
    out << "Отношение погрешностей для разбиений:" << endl;
    for(i=0;i<4;i++)
    {
        out << i+1 << "," << i+2 << "  -  " << e[i]/e[i+1] << endl;
    }
    out << "С увеличением числа разбиений погрешность аппроксимации уменьшается" << endl;
}
