/*
** EPITECH PROJECT, 2022
** my_str_to_word_array.c
** File description:
** my_str_to_word_array
*/
#include "../includes/my_h.h"

int is_alphanum(char c)
{
  if (c < ' ' || c >= 127)
    return (0);
  return (1);
}

int	nb_word(char *str)
{
  int   word = 0;
  for (int i = 0; str != NULL && str[i]; i++) {
    if (is_alphanum(str[i]) == 1 && is_alphanum(str[i + 1]) == 0)
      word = word + 1;
  }
  return (word);
}

char **my_str_to_word_array(char *str)
{
  int len = 0;
  int j = 0;
  char** word_array = malloc((nb_word(str) + 1) * sizeof(char *));
  for (int i = 0; str != NULL && str[i]; i ++)
  {
      if (is_alphanum(str[i]))
        len ++;
      if (is_alphanum(str[i]) == 1 && is_alphanum(str[i + 1]) == 0) {
        word_array[j] = malloc(len + 1);
        my_strncpy(word_array[j], &str[i - len + 1], len);
        len = 0;
        j ++;
    }
  }
  word_array[j] = NULL;
  return (word_array);
}