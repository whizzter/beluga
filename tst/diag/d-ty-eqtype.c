struct t1 *x1; struct t1 *x1;
int x2; double x2;
long double x3; long double x3;
char x4; unsigned char x4;
char x5; signed char x5;
signed char x6; unsigned char x6;
short x7; signed short x7;
short x8; unsigned short x8;
signed short x9; unsigned short x9;
enum t10 { X10 } x10; enum t10 x10;
enum t11 { X11 } x11; enum t11_2 { X11_2 } x11;
int *x12; int *x12;
char *x13; signed char *x13;
char *x14; unsigned char *x14;
signed char *x15; unsigned char *x15;
const int x16; const int x16;
volatile double x17; volatile double x17;
const volatile float x18; volatile const float x18;
const int x19; int x19;
const int x20; volatile int x20;
const volatile int x21; const int x21;
int a22[10]; int a22[];
int a23[]; int a23[];
int a24[1]; int a24[2];
typedef char fchar;
char f26(void); fchar f26(void);
unsigned char f27(void); fchar f27(void);
void f28(int, char, signed char *); void f28(int, char, signed char *);
void f29(int, char *); void f29(int, const char *);
void f30(int); void f30(int, char);
void f31(int, char); void f31(int);
void f32(int); void f32(void);
void f33(int, ...); void f33();
void f34(); void f34(int, ...);
void f35(); void f35(int, double);
void f36(long, long double); void f36();
void f37(); void f37(char, float);
void f38(short); void f38();
void f39(int); void f39(const int);
void f40(volatile short); void f40(const short);
