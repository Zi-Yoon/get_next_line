#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int main(void)
{
	int fd = open("./testfile", O_RDONLY);
	char *str;

	while (1)
	{
		str = get_next_line(fd);
		if (str == NULL)
			break;
		printf("%s", str);
		free(str);
	}
	return (0);
}
