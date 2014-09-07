/*
-----BEGIN PGP SIGNED MESSAGE-----
Hash: SHA1


 * File:   BioFractalTree.cpp
 * Author: Ryan Molecke, Ph.D.
 *
 * Created on September 6, 2014, 6:50 AM
 * MPL_license.txt file (Mozilla Public License 2.0)
 * MUST accompany this or any derivative software
 *
 * Bio-Fractal Tree Generator builds branching tube structures
 * in recursive fractal fashion, with these properties:
 *  - it is non-self-overlapping.
 *  - multiple root/branch structures (bio-networks) can be
 *    generated in the same space and will not overlap with
 *    each other.
 *  - trees / bio-networks can be generated inside pre-defined
 *    (non-manifold geometric model) boundaries in a space-filling way
 *  - multi-threaded "compete" model for sub-branch generation
 *  - nearest-neighbor mapping for space-filling collision detection
 *
 *   V0 Revision0 - build testing
 *
-----BEGIN PGP SIGNATURE-----

iQIcBAEBAgAGBQJUC898AAoJEIRVa2JtJura8FkP/Rr/HceYZYbhZkkDrSs+1QwU
SkQ5U3N2lQmpRf06wY54naPa0dGTsxU8JjzIKwA0Veb0Nyw9xcNXVWwpNCunpdKc
otoqWcjKxBhdZvoUTf4ahhsfwm1WLL9vu0wNEKdxCWK3ZTrSEK0fzTvYjv6vOFhQ
6IfwhO5DuF05It0V+ehRBu8dY3oF+N1hseEbaXGRKjlvmfZOCDUfoESCSQlmIMl/
qZ02WnC99CbWLrOpw6v3vGV5+9fPBl1w5a5g+KnfGkrewxDYJsYPzTmkdOOI/76Y
YdsyJ6tKGzuAJaD/GJld1upkDQXKiHugCbjCKIFVJI8BIHymmF1YauFgH/P/VhTC
+34S3My8sepKtxWQyJlDU5Sl1j1PD92Ygyb+jb62UVqEGpxxd6mecXWY72WKjbVJ
1Rba0rNdOGR7Ztjesb8BODX1aERnoSQhl01mGBfs7bLxwBoNwA8QzS3I8L6NeG4j
gaNmdk4oLoEcvrlsTSXUUiY3gpqRX60s8JKOn1QjcOCnHKx3CrG/ASKQemglmG6w
485NJdcmSvx7n+R7dsJD+e8oSS7wfDqOSfdpmgRalFZhIn3y3zUPLmX2YF+BPGv+
iMHx9JqCis3BqU+Jq//HiFfIf2uIbgH+V76I2qwaYddVA1pnCVWiHavEtsG2XIPy
xCQf3zTRzg/vjT44EWb3
=ZDTL
-----END PGP SIGNATURE-----
*/

#include <memory>
#include <iostream>
#include "BioFractalTree.hpp"

int main(int argc, char **argv) {
  std::cout << "hello world!\n";
  return 0;
}
