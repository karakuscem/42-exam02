#include <unistd.h>
#include <malloc.h>

char *rotate_str(char *str)
{
  int i = 0;
  int j = 0;
  char *first_word = malloc(sizeof(char *));
  char *new_str = malloc(sizeof(char *));
  int counter = 0;
  while (str[i] >= 9 && str[i] <= 13 || str[i] == ' ')
  {
    i++;
  }
  while (!(str[i] >= 9 && str[i] <= 13 || str[i] == ' '))
  {
    first_word[j++] = str[i++];
  }
  int x = 0;
  while(str[i])
  {
    while (str[i] >= 9 && str[i] <= 13 || str[i] == ' ')
    {
      i++;
    }
    if (!(str[i] >= 9 && str[i] <= 13 || str[i] == ' '))
    {
      new_str[x++] = str[i++];
      if (str[i] && str[i] >= 9 && str[i] <= 13 || str[i] == ' ')
        new_str[x++] = ' ';
    }
  }
  int q = 0;
  if(new_str[x - 2])
      new_str[x++] = ' ';
  while(first_word[q])
  {
    new_str[x++] = first_word[q++];
  }
  free(first_word);
  return(new_str);
}

int count_words(char *str)
{
  int counter = 0;
  int i = 0;
  while (str[i])
  {
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r' || str[i] == '\n')
    {
      i++;
    }
    if (str[i] && !(str[i] == ' ' || str[i] == '\t' || str[i] == '\r' || str[i] == '\n'))
    {
      counter++;
      while (str[i] && !(str[i] == ' ' || str[i] == '\t' || str[i] == '\r' || str[i] == '\n'))
      {
        i++;
      }
    }
  }
  return (counter);
}

int main(int argc, char **argv)
{
  if(argc >= 2)
  {
    int counter = count_words(argv[1]);
    if (counter == 1)
    {
      int i = 0;
      while (argv[1][i] == ' ' || argv[1][i] == '\t' || argv[1][i] == '\r' || argv[1][i] == '\n')
        i++;
      while (!(argv[1][i] == ' ' || argv[1][i] == '\t' || argv[1][i] == '\r' || argv[1][i] == '\n') && argv[1][i])
        write(1, &argv[1][i++], 1);
    }
    else
    {
      char *str = rotate_str(argv[1]);
      int i = 0;
      while (str[i])
        write(1, &str[i++], 1);
    }
  }
  write(1, "\n", 1);
}