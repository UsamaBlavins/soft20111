/*
 * Created  by rbh, 03/10/13
 * Modified by nas, 09/09/16
 * Modified by nas, 25/09/17
 */

// Specify the header filepath explicitly (bad)
#include "raise.h"
/*
// Requires using a compiler option that specifies where the headers are located
#include "raise.h"
*/

int power(int i, int n)
{
    int result = 1;
    while (n > 0)
    {
        result *= i;
        --n;
    }
    return result;
}
