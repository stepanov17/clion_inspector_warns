
#ifndef TYPES_H
#define TYPES_H

#if USE_DOUBLE

#ifndef HAVE_REAL
typedef long double real;
#define HAVE_REAL
#endif

#else

#ifndef HAVE_REAL
typedef float real;
#define HAVE_REAL
#endif


#endif


#endif //TYPES_H
