// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// force_materialization
void force_materialization(SEXP x);
RcppExport SEXP _vroom_force_materialization(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    force_materialization(x);
    return R_NilValue;
END_RCPP
}
// vroom_
SEXP vroom_(RObject file, const char delim, RObject col_names, R_xlen_t skip, CharacterVector na, int num_threads);
RcppExport SEXP _vroom_vroom_(SEXP fileSEXP, SEXP delimSEXP, SEXP col_namesSEXP, SEXP skipSEXP, SEXP naSEXP, SEXP num_threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type file(fileSEXP);
    Rcpp::traits::input_parameter< const char >::type delim(delimSEXP);
    Rcpp::traits::input_parameter< RObject >::type col_names(col_namesSEXP);
    Rcpp::traits::input_parameter< R_xlen_t >::type skip(skipSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type na(naSEXP);
    Rcpp::traits::input_parameter< int >::type num_threads(num_threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(vroom_(file, delim, col_names, skip, na, num_threads));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_vroom_force_materialization", (DL_FUNC) &_vroom_force_materialization, 1},
    {"_vroom_vroom_", (DL_FUNC) &_vroom_vroom_, 6},
    {NULL, NULL, 0}
};

void init_vroom_string(DllInfo* dll);
void init_vroom_real(DllInfo* dll);
void init_vroom_int(DllInfo* dll);
void init_vroom_string(DllInfo* dll);
RcppExport void R_init_vroom(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
    init_vroom_string(dll);
    init_vroom_real(dll);
    init_vroom_int(dll);
    init_vroom_string(dll);
}
