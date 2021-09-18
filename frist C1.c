#include <stdio.h>

int main() {
    double a=0,b=0;
    printf ("请输入平时成绩\n");
    scanf ("%lf",&a);
    if(a>100||a<0) printf("输入有误\n");
    else{ printf("请输入期末考试成绩\n");
      scanf ("%lf",&b);
       if(b>100) printf("输入有误\n");
       else{
        int c=a*0.3+b*0.7;
        if(c>90) printf("成绩等级为__优\n");
        else if(c>80) printf("成绩等级为__良\n");
        else if(c>70) printf("成绩等级为__中\n");
        else if(c>60) printf("成绩等级为__差\n");
        else if(c<60) printf("成绩等级为__不及格,\n");
        }
        
    }
    return 0;
}
