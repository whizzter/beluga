/* -Wv --std=c90 */

void f3(int a234567891123456789212345678931a,
        int a234567891123456789212345678931a,    /* redecl */
        int a234567891123456789212345678931b,    /* conflict */
        int a234567891123456789212345678932a);
void f7(int a234567891123456789212345678932a,
        int a234567891123456789212345678932a,    /* redecl */
        int a234567891123456789212345678932b,    /* conflict */
        int a234567891123456789212345678933a) {}
void f11(int a234567891123456789212345678931a) {
    int a234567891123456789212345678932a;
    void f13(int a234567891123456789212345678933a,
             int a234567891123456789212345678931b,     /* conflict */
             int a234567891123456789212345678932b);    /* conflict */
}
void f17(a234567891123456789212345678931a,
         a234567891123456789212345678931b,     /* conflict */
         a234567891123456789212345678932a);
void f20(a234567891123456789212345678931a,
         a234567891123456789212345678931b,     /* conflict */
         a234567891123456789212345678932a) {}
void f23(a234567891123456789212345678931a,
         a234567891123456789212345678931b,
         a234567891123456789212345678932a)
    int a234567891123456789212345678931a,
        a234567891123456789212345678931b,     /* conflict */
        a234567891123456789212345678932a; {}