#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STR_MAX_DIM 10

int main()
{
  char filename[] = "test_file.txt"; 
  char str[STR_MAX_DIM];
  FILE *f; 

  if(NULL == (f = fopen(filename,"w")))
  {
    printf("fopen() failed!\n");
    exit(EXIT_FAILURE);
  }

  while(NULL!=fgets(str, STR_MAX_DIM, stdin))
  {
    if(str[0] == '.' || EOF == fputs(str,f))
      break;
  }

  fclose(f);

  if(NULL == (f = fopen(filename,"r")))
  {
    printf("fopen() failed!\n");
    exit(EXIT_FAILURE); 
  }

  while(NULL != fgets(str, STR_MAX_DIM, f))
  {
    if(EOF == fputs(str,stdout))
      break;
  }

  fclose(f);
  exit(EXIT_SUCCESS);
}