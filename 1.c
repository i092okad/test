#include <stdio.h>

int main(void)
{
  int n;

  printf("n = ");
  scanf("%d", &n);

  if( (n & 1) == 0 ){ //"n & 1 == 0"だと,1 == 0が先に計算されてしまうから,"(n & 1) == 0"のように()をつける
    printf("%d は偶数です\n", n);
  }
  return 0;
}
