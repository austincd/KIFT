
# DEFINE LIMIT_ARGNAME 64
# DEFINE LIMIT_ARGSIZE 64
# DEFINE LIMIT_NUMARGS 16
# DEFINE LIMIT_TASKS 8

typedef struct		s_arg
{
	char			argName[LIMIT_ARGNAME];
	int				argSize;
	unsigned char	argData[LIMIT_ARGSIZE];
}					t_arg;

typedef struct		s_args
{
	int				numArgs;
	t_arg			args[LIMIT_NUMARGS];
}					t_args;

typedef struct		s_task
{
	t_file			userProfile;
	t_file			userLog;
	t_app			appCall;
	t_args			appArgs;
	t_pthread		threadInfo;
}					t_task;

typedef struct		s_queue
{
	t_file			userProfile;
	t_file			userLog;
	int				numTasks;
	t_task			[LIMIT_TASKS];
}					t_queue;

typedef struct		s_memRegion
{
	void		*data;
	uintmax_t	bytes;
	char		status;
}					t_memRegion;

typedef struct		s_memory
{
	t_memRegion		regions[LIMIT_MALLOCS];
}					t_memory;

typedef struct		s_kift
{
	t_file			userProfile;
	t_file			userLog;
	t_queue			queue;
	t_memory		memory;
}					t_kift;

//ARGUMENT HANDLING
t_arg				*ft_argListFind(t_args *argList, char *argName);
