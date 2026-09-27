#include<stdio.h>

int main()
{
  //switch语句，即根据条件选择
  /*
  switch(表达式)
  {
    case 值1:
        语句体1;
        break; break即结束

    case 值2:
        语句体2;
        break;
    ...

    default:
      语句体n;
      break
  }
  */
  int energy = 0;
  printf("请输入活力值（1~10）\n");
  scanf("%d",&energy);

  switch(energy)
  {
    case 1:
      printf("玲奈子!\n");
      break;
    case 2:
      printf("玲奈子!\n");
      break;
    case 3:
      printf("艾莉欧!\n");
      break;
    case 4:
      printf("艾莉欧!\n");
      break;
    case 5:
      printf("真由理!\n");
      break;
    case 6:
      printf("真由理!\n");
      break;
    case 7:
      printf("kurisutina!\n");
      break;
    case 8:
      printf("1096!\n");
      break;
    case 9:
      printf("ryoko!\n");
      break;
    case 10:
      printf("社!\n");
      break;
    
    default:
      printf("私の名前は涼宮ハルヒ、以上！\n");
      break;
  }
  if(energy < 0)
  {
    printf(" だめだこいつ、早く何とかしないと。。。\n");
  }
  //若你输入abc这种，由于scanf只录入整数，则不会被接收，故后面参与判断的值仍为0

  return 0;
}
