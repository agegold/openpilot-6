/******************************************************************************
 *                      Code generated with sympy 1.6.1                       *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                         This file is part of 'ekf'                         *
 ******************************************************************************/
void err_fun(double *nom_x, double *delta_x, double *out_4402390855951501637);
void inv_err_fun(double *nom_x, double *true_x, double *out_4055891138970224039);
void H_mod_fun(double *state, double *out_2779033213944997008);
void f_fun(double *state, double dt, double *out_5397829570585544237);
void F_fun(double *state, double dt, double *out_1678270212091368436);
void h_3(double *state, double *unused, double *out_415537722232384979);
void H_3(double *state, double *unused, double *out_5547295802519314136);
void h_4(double *state, double *unused, double *out_3462319009976814174);
void H_4(double *state, double *unused, double *out_4541763298488196428);
void h_9(double *state, double *unused, double *out_2438343891686531249);
void H_9(double *state, double *unused, double *out_6864268842359052398);
void h_10(double *state, double *unused, double *out_1305989348861805415);
void H_10(double *state, double *unused, double *out_3531033405079206215);
void h_12(double *state, double *unused, double *out_4185711369302565978);
void H_12(double *state, double *unused, double *out_6648318810227405997);
void h_31(double *state, double *unused, double *out_8185984924608601486);
void H_31(double *state, double *unused, double *out_3973229035083986176);
void h_32(double *state, double *unused, double *out_894764689427080805);
void H_32(double *state, double *unused, double *out_3707847884371588173);
void h_13(double *state, double *unused, double *out_4458794763942886460);
void H_13(double *state, double *unused, double *out_994158159770539830);
void h_14(double *state, double *unused, double *out_2438343891686531249);
void H_14(double *state, double *unused, double *out_6864268842359052398);
void h_19(double *state, double *unused, double *out_4545113956291161386);
void H_19(double *state, double *unused, double *out_7149795380248068037);
#define DIM 23
#define EDIM 22
#define MEDIM 22
typedef void (*Hfun)(double *, double *, double *);

void predict(double *x, double *P, double *Q, double dt);
const static double MAHA_THRESH_3 = 3.841459;
void update_3(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_4 = 7.814728;
void update_4(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_9 = 7.814728;
void update_9(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_10 = 7.814728;
void update_10(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_12 = 7.814728;
void update_12(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_31 = 7.814728;
void update_31(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_32 = 9.487729;
void update_32(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_13 = 7.814728;
void update_13(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_14 = 7.814728;
void update_14(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_19 = 7.814728;
void update_19(double *, double *, double *, double *, double *);