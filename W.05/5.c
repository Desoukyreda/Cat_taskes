#include<stdio.h>

int main()
{
    int x =1,y=2 ,z=3;
    int *p_x =&x,*p_y=&y,*p_z=&z;
    printf("x: %d\ty: %d\tz: %d\np_x: %p\t,p_y: %p\t,p_z: %p\n*p_x: %d\t,*p_y: %d\t,*p_z: %d\n",x,y,z,p_x,p_y,p_z,*p_x,*p_y,*p_z);
    printf("\nSwapping pointer \n\n");
 p_z = p_x , p_x = p_y , p_y = p_z;
      printf("x: %d\ty: %d\tz: %d\np_x: %p\t,p_y: %p\t,p_z: %p\n*p_x: %d\t  *p_y: %d\t  *p_z: %d",x,y,z,p_x,p_y,p_z,*p_x,*p_y,*p_z);
}