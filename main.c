#include "hello.h"

/**
 * encoded in gbk
 * �� gbk ����
 */
int main(void)
{
    hello("eglot");
    /**
     * type `hel` and wait for auto-completion
     * you would see jsonrpc warning about "Invalid JSON", because of Chinese characters
     */
    // hel

    return 0;
}