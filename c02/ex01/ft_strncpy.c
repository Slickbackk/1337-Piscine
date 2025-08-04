char *ft_strncpy(char *dest, const char *src, unsigned int n) 
{
  int i = 0;

  while(src[i] != '\0' && i < n)
  {
    dest[i] = src[i];
    i++;
  }

  if(i < n) 
  {
    while (i < n)
    {
      dest[i] = '\0';
      i++;
    }
  }

  return dest;
}
