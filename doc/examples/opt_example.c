/* Example code for command line option parser.
 *
 * Compile with:  cc -o opt_example opt_example.c -last
 *
 * Run with:
 *    ./opt_example
 */

/* The following defines are workarounds due to the lack of a config.h. */
#define HAVE_STRSEP 1
#define HAVE_USLEEP 1

/* Set our compile-time debug threshold and include the LibAST header. */
#define DEBUG 5
#include <libast.h>

int
main(int argc, char *argv[])
{
    return 0;
}
