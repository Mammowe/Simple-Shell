#include "shell.h"

/**
<<<<<<< HEAD
 * _myexit - exits the shell
 * @info: Structure containing potential arguments, 
 * used to maintain constant function prototype
 *
 * Return: exits with a given exit status
=======
 * _myexit - exits shell
 * @info: Structure containing potential arguments. Used to maintain
 * Constant function Prototype.
 * Return: exits given exit status
>>>>>>> 1c21c75827dd217ed7d6deb2df8abdfbd8750aa0
 * (0) if info.argv[0] != "exit"
 */
int _myexit(info_t *info)
{
	int exitcheck;

<<<<<<< HEAD
	if (info->argv[1]) /*if there is an exit argument */
=======
	if (info->argv[1]) /* If there is an exit arguement */
>>>>>>> 1c21c75827dd217ed7d6deb2df8abdfbd8750aa0
	{
		exitcheck = _erratoi(info->argv[1]);
		if (exitcheck == -1)
		{
			info->status = 2;
<<<<<<< HEAD
			print_error(info, "lllegal number:");
			_eputs(info->argv[1]);
			_putchar("\n");
=======
			print_error(info, "Illegal number: ");
			_eputs(info->argv[1]);
			_eputchar('\n');
>>>>>>> 1c21c75827dd217ed7d6deb2df8abdfbd8750aa0
			return (1);
		}
		info->err_num = _erratoi(info->argv[1]);
		return (-2);
	}
	info->err_num = -1;
	return (-2);
}

/**
<<<<<<< HEAD
 * _mycd - changes the current directory of the process
 * @info: Structure containing potential arguments, 
 * used to maintain contsant function prototype
 *
 * Return: Always 0
=======
 * _mycd - current directory process changes
 * @info: Structure containing potential arguments. Used to maintain
 * constant function Prototype.
 * Return:0 always
>>>>>>> 1c21c75827dd217ed7d6deb2df8abdfbd8750aa0
 */
int _mycd(info_t *info)
{
	char *s, *dir, buffer[1024];
	int chdir_ret;

	s = getcwd(buffer, 1024);
	if (!s)
		_puts("TODO: >>getcwd failure emsg here<<\n");
	if (!info->argv[1])
	{
		dir = _getenv(info, "HOME=");
		if (!dir)
			chdir_ret = /* TODO: what should this be? */
<<<<<<< HEAD
				chdir((dir = _ggetenv(info, "PWD=")) ? dir : "/");
=======
				chdir((dir = _getenv(info, "PWD=")) ? dir : "/");
>>>>>>> 1c21c75827dd217ed7d6deb2df8abdfbd8750aa0
		else
			chdir_ret = chdir(dir);
	}
	else if (_strcmp(info->argv[1], "-") == 0)
	{
		if (!_getenv(info, "OLDPWD="))
		{
			_puts(s);
			_putchar('\n');
			return (1);
		}
<<<<<<< HEAD

		_puts(_getenv(info, "OLDPWD=")), _putchar('\n');
		chdir_ret = /*TODO: what should this be? */
=======
		_puts(_getenv(info, "OLDPWD=")), _putchar('\n');
		chdir_ret = /* TODO: what should this be? */
>>>>>>> 1c21c75827dd217ed7d6deb2df8abdfbd8750aa0
			chdir((dir = _getenv(info, "OLDPWD=")) ? dir : "/");
	}
	else
		chdir_ret = chdir(info->argv[1]);
	if (chdir_ret == -1)
	{
		print_error(info, "can't cd to ");
		_eputs(info->argv[1]), _eputchar('\n');
	}
	else
	{
<<<<<<< HEAD
		_setenv(info. "OLDPWD", _getenv(info, "PWD="));
		_setenv(info, "PWD", _getcwd(buffer, 1024));
=======
		_setenv(info, "OLDPWD", _getenv(info, "PWD="));
		_setenv(info, "PWD", getcwd(buffer, 1024));
>>>>>>> 1c21c75827dd217ed7d6deb2df8abdfbd8750aa0
	}
	return (0);
}

/**
<<<<<<< HEAD
 * _myhelp - changes the current directory of the process
 * @info: Structure containing potetial arguments, 
 * used to maintain constant function prototype
 *
 * Return: Always 0
 */

=======
 * _myhelp - current directory process changes
 * @info: Structure containing potential arguments. Used to maintain
 * constant function prototype.
 * Return: 0 always
 */
>>>>>>> 1c21c75827dd217ed7d6deb2df8abdfbd8750aa0
int _myhelp(info_t *info)
{
	char **arg_array;

	arg_array = info->argv;
<<<<<<< HEAD
	_puts("help call works, function not yet implemented \n");
	if (0)
		_puts(*arg_array); /*temp att_unused workaround */
	return (0);
}


=======
	_puts("help call works. Function not yet implemented \n");
	if (0)
		_puts(*arg_array); /* temp att_unused workaround */
	return (0);
}

>>>>>>> 1c21c75827dd217ed7d6deb2df8abdfbd8750aa0
