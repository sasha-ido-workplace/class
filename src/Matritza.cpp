#include "Matritza.h"

Matritza::Matritza(int m, int n)
{
    this->m = m;
    this->n = n;

    this->mat = new float*[this->m];
    for(int i = 0 i < this->m; i++) {
        this->mat[i] = new float[this->n];
        for(int j = 0; j < this->n; j++) {
            if(j == i) this->mat[i][j] = 1;
            else this->mat[i][j] = 0;
        }
    }
}

Matritza::~Matritza()
{
    //dtor
}
