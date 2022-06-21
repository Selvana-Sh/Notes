#include <unistd.h>

/* write(int fd, const void *buf, size_t nbytes);
 * DESCR:
 * int fd : The file descriptor of where to read the input: 0(stdin), 1(stdout), or 2(stderr).
 * const void *buf : A pointer to a buffer of at least nbytes bytes, which will be written to the file.
 * size_t count : The number of bytes to write. If smaller than the provided buffer, the output is truncated.
 * return value : Returns the number of bytes that were written. If value is negative, then the system call returned an error.
 */


int main(void)
{
	write(1, "lol\n", 4);
}
