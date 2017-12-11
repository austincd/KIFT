#include "../inc/kift.h"

t_arg	*ft_argListFind(t_args *argList, char *argName)
{
	int		counter;

	counter = 0;
	if (argList && argList->numArgs && argName)
	{
		while (counter < argList->numArgs)
		{
			if (ft_strequ(argList->args[counter].argName, argName))
				return (argList->args + counter);
			++counter;
		}
	}
	return (NULL);
}
