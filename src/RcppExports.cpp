// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// transformYCpp
NumericMatrix transformYCpp(NumericMatrix Zr);
RcppExport SEXP _JACA_transformYCpp(SEXP ZrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type Zr(ZrSEXP);
    rcpp_result_gen = Rcpp::wrap(transformYCpp(Zr));
    return rcpp_result_gen;
END_RCPP
}
// jacaCpp
NumericMatrix jacaCpp(NumericMatrix Y, NumericMatrix X_list, NumericVector lambda, double rho, Nullable<List> W_list, int kmax, double eps, bool verbose);
RcppExport SEXP _JACA_jacaCpp(SEXP YSEXP, SEXP X_listSEXP, SEXP lambdaSEXP, SEXP rhoSEXP, SEXP W_listSEXP, SEXP kmaxSEXP, SEXP epsSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type Y(YSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type X_list(X_listSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< Nullable<List> >::type W_list(W_listSEXP);
    Rcpp::traits::input_parameter< int >::type kmax(kmaxSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(jacaCpp(Y, X_list, lambda, rho, W_list, kmax, eps, verbose));
    return rcpp_result_gen;
END_RCPP
}
