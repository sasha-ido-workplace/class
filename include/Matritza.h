#ifndef MATRITZA_H
#define MATRITZA_H


class Matritza
{
    public:
        Matritza(int m, int n);
        virtual ~Matritza();

        // Matrix sizes
        int m, n;
    protected:

    private:
        float** mat;
};

#endif // MATRITZA_H
