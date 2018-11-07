#include <stdio.h>
#include <stdlib.h>

int c(float x) {
  if (x <= 0) {
    printf("！！！数据错误！！！");
    exit(1);
  }
}

int ch(float x, float y, float z) {
  int c = 1;
  if (x >= 24 || x < 0)
    c = 0;
  if (y >= 60 || x < 0)
    c = 0;
  if (z >= 60 || x < 0)
    c = 0;
  switch (c) {
  case 1:
    break;
  case 0:
    printf("！！！时间错误！！！");
    exit(1);
  }
}

int main(void) {
  float x, h, m, s, x1, h1, m1, s1, x2, h2;
  printf("输入开始里程（km）：");
  scanf("%f", &x);
  c(x);
  printf("输入开始时间（小时,分钟,秒）：");
  scanf("%f,%f,%f", &h, &m, &s);
  ch(h, m, s);
  printf("输入结束里程（km）：");
  scanf("%f", &x1);
  c(x1);
  x2 = x1 - x;
  c(x2);
  printf("输入结束时间（小时,分钟,秒）：");
  scanf("%f,%f,%f", &h1, &m1, &s1);
  ch(h1, m1, s1);
  h2 = h1 - h + (m1 - m) / 60 + (s1 - s) / 3600;
  c(h2);
  printf("计算得到汽车运行路程为（千米）：%f", x2);
  printf("\n计算得到汽车运行时间为（小时）：%f", h2);
  printf("\n平均速度为（千米每小时）：%f", x2 / h2);
  return 0;
}
