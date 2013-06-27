Just a few simple math-related C and C++ programs and functions.
These are written extremely pedantically in either Allman or OTB
styles, with 2-space or 4-space indentation.


# Benchmarks for the factorial functions
## Recursive factorial_r(12), 100,000,000 iterations

    real    0m6.067s
    user    0m5.861s
    sys     0m0.039s

## For-loop factorial_f(12), 100,000,000 iterations

    real    0m4.656s
    user    0m4.596s
    sys     0m0.030s

## Recursive factorial_r(3), 100,000,000 iterations

    real    0m1.248s
    user    0m1.231s
    sys     0m0.009s

## For-loop factorial_f(3), 100,000,000 iterations

    real    0m0.918s
    user    0m0.735s
    sys     0m0.007s
