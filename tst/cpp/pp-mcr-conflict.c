/* -Wv --std=c90 */

#define A234567891123456789212345678931
#define A2345678911234567892123456789312    /* warning */
#define A2345678911234567892123456789313    /* warning */

#define A234567891123456789212345678932

#define A234567891123456789212345678933
#define A2345678911234567892123456789331    /* warning */
#undef  A234567891123456789212345678933
#define A2345678911234567892123456789332    /* warning; 1 */
#undef  A2345678911234567892123456789331
#define A2345678911234567892123456789333    /* warning: 2 */
#undef  A2345678911234567892123456789332
#undef  A2345678911234567892123456789333
#define A2345678911234567892123456789334
