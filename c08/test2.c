typedef enum {
 false = 0,
 true = 1
} t_bool;
# 14 "test.c" 2

void ft_putstr(char *str)
{
 while (*str)
  write(1, str++, 1);
}

t_bool ft_is_even(int nbr)
{
 return (((nbr % 2 == 0)) ? true : false);
}

int main(int argc, char **argv)
{
 (void)argv;
 if (ft_is_even(argc - 1) == true)
  ft_putstr("I have an even number of arguments.\n");
 else
  ft_putstr("I have an odd number of arguments.\n");
 return (0);
}
