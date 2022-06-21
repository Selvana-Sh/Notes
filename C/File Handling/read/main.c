#include <unistd.h>
#include <stdio.h>

/* read(int fd, void *buf, size_t nbytes);
 * DESCR:
 * int fd : The file descriptor of where to read the input: 0(stdin), 1(stdout), or 2(stderr).
 * void *buf : A char array where the read content will be stored.
 * size_t nbytes : Is the number of bytes that you want to read.
 * return value : Returns the number of bytes that were read. If value is negative, then the system call returned an error.
 */

int main(void)
{
	int nread;
	char buff[20];
	nread=read(0, buff,10); //read 10 bytes from standard input device(keyboard), store in buffer (buff)
	write(1, buff,nread); //print 10 bytes from the buffer on the screen
	printf("%d", nread); //??is one more than the bytes that was read 
}
