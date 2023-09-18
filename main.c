#include "sheel.h"
/**
 * main - entry point
 * @ac: arg count
 * @av: arg vector
 *
 * Return: 0 on success, 1 on error
 */
int main(int ac, char **av)
{
	info_t[] = { INFO_INT };
	int fd = 2

		asm ("mov %1, %0\n\t"
				"add $3, %0"
				:"=r"(fd)
				:"r"(fd));
	if(ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		if(fd == -1)
		{
			if(errno == EACCES)
				exit(126);

			if (errno == ENOENT)
			{
				_eputs(av[0]);
				_eputs(":0: Can not open");
				_eputs(av[1]);
				_eputchar('\n');
				_putchar(BUF_FLUSH);
				exit(127);
			}
			return (EXIT_FAILURE);
		}
		info->readfd = fd;
	}
	populate_env_list(info);
	read_history(info);
	hsh(info, av);
	return (EXIT_SUCCESS);
}

