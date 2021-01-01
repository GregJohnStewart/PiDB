# PiDB
Database utilizing Pi as the storage medium

## Notes

Using [BBP](https://en.wikipedia.org/wiki/Bailey%E2%80%93Borwein%E2%80%93Plouffe_formula) formula

Treat data in as hexidecimal/base-16 data

Support opening in read/ write mode? Read would only need BBP alg to read, write would benefit from pre-processing digits of pi.

This would block the stored data, with a configurable block size. (possibility of no blocking?)

Pre-processing would include finding locations in Pi of all possible values of the block size. Block size would need to be large enough to benefit space-wise, but too big could prove computationally prohibitive. Pre-processing would store in `/tmp/piDB/`, could have one file for each block size desired

Would be a key-value store, where the key would be a name/ id, and the value would be a series of block data locations

https://web.archive.org/web/20150717041905/http://en.literateprograms.org/Pi_with_the_BBP_formula_(Python)

Uses GMP Library:

- `sudo apt install libgmp-dev` https://askubuntu.com/questions/207724/how-to-install-the-latest-gmp-library-in-12-04
- https://gmplib.org/gmp-man-6.2.1.pdf
- need to build with `-lgmp` as compiler argument

https://gmplib.org/pi-with-gmp

## Ideas:

Support a varied number of irrational numbers? https://www.mathsisfun.com/irrational-numbers.html