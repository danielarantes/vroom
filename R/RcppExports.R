# Generated by using Rcpp::compileAttributes() -> do not edit by hand
# Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

force_materialization <- function(x) {
    invisible(.Call(`_vroom_force_materialization`, x))
}

vroom_ <- function(file, delim, col_names, skip, na, num_threads) {
    .Call(`_vroom_vroom_`, file, delim, col_names, skip, na, num_threads)
}

