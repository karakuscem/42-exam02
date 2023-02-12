#include <unistd.h>

int main(int argc, char **argv)
{
  if (argc < 2)
    write(1, "\n", 1);
  if (argc >= 2)
  {
    int i = 1;
    while (argv[i])
    {
      int j = 0;
      while(argv[i][j])
      {
        if (j == 0 && argv[i][0] >= 97 && argv[i][0] <= 122)
        {
          argv[i][0] -= 32;
        }
        else if (argv[i][j -1] >= 9 && argv[i][j - 1] <= 13 || argv[i][j - 1] == ' ')
        {
          if (argv[i][j] >= 97 && argv[i][j] <= 122)
            argv[i][j] -= 32;
        }
        else if (j != 0 && argv[i][j] >= 65 && argv[i][j] <= 90)
          argv[i][j] += 32;
        write(1, &argv[i][j], 1);
        j++;
      }
      write(1, "\n", 1);
      i++;
    }
  }
}