#ifndef __S_H
#define __S_H
/*
 * strassen.h
 *
 * Copurtesy [Buhler 1993].
 * Header file for strassen matrix multiplication functions.
 */

/*
 * Square matrices of size <= BREAK are handled with the ``classical
 * algorithms.  The shape of almost all functions is therefore
 * something like
 *
 *  if ( n <= BREAK )
 *      classical algorithms
 *  else
 *      n/= 2
 *      recursive call for 4 half-size submatrices
 */

#define BREAK 8

/*
 * A matrix is defined to be a pointer to a ``union _matrix'', which
 * is (if the size is <= BREAK) a matrix of numbers, or else is an
 * array of four submatrices of half size.
 */

/*
 *typedef struct _matrix_s {
 *    double **d;
 *    struct _matrix_s *p;
 *} *matrix_s;
 */
typedef union _matrix_s
{
    double **d;
    union _matrix_s **p;
} *matrix_s;

void update_matrix_s(matrix_s a, int n);
void multiply(int, matrix_s, matrix_s, matrix_s, matrix_s);
void add(int, matrix_s, matrix_s, matrix_s);
void sub(int, matrix_s, matrix_s, matrix_s);

/*
 * Notational shorthand to access submatrices for matrices named
 * a,b,c,d
 */

#define a11 a->p[0]
#define a12 a->p[1]
#define a21 a->p[2]
#define a22 a->p[3]
#define b11 b->p[0]
#define b12 b->p[1]
#define b21 b->p[2]
#define b22 b->p[3]
#define c11 c->p[0]
#define c12 c->p[1]
#define c21 c->p[2]
#define c22 c->p[3]
#define d11 d->p[0]
#define d12 d->p[1]
#define d21 d->p[2]
#define d22 d->p[3]
#endif
