// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// cwt_rcpp
arma::cube cwt_rcpp(arma::mat t, arma::vec scales, double variance, int threads);
RcppExport SEXP _CWT_cwt_rcpp(SEXP tSEXP, SEXP scalesSEXP, SEXP varianceSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type t(tSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type scales(scalesSEXP);
    Rcpp::traits::input_parameter< double >::type variance(varianceSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(cwt_rcpp(t, scales, variance, threads));
    return rcpp_result_gen;
END_RCPP
}
// resampling_FWHM_rcpp
arma::mat resampling_FWHM_rcpp(arma::mat spectra, arma::vec wav, arma::vec new_wav, arma::vec fwhm, int threads);
RcppExport SEXP _CWT_resampling_FWHM_rcpp(SEXP spectraSEXP, SEXP wavSEXP, SEXP new_wavSEXP, SEXP fwhmSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type spectra(spectraSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type wav(wavSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type new_wav(new_wavSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type fwhm(fwhmSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(resampling_FWHM_rcpp(spectra, wav, new_wav, fwhm, threads));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_CWT_cwt_rcpp", (DL_FUNC) &_CWT_cwt_rcpp, 4},
    {"_CWT_resampling_FWHM_rcpp", (DL_FUNC) &_CWT_resampling_FWHM_rcpp, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_CWT(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
