int runScript(t_kift *env, int index)
{
  t_file script;

  ft_bzero(&script, sizeof(t_file));
  if (env && env->cans && env->cans[index].ready)
    {
      ft_strcpy(script.path, env->cans[index].loc.path);
      ft_strcpy(script.path, "/script.sh");
      system(script.path);
    }
}
