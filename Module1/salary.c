#include<stdio.h>
int main()
{
float basic,da,hra,pf,lic,net_salary;
printf("enter basic:");
scanf("%f",&basic);
printf("enter da:");
scanf("%f",&da);
printf("enter hra:");
scanf("%f",&hra);
printf("enter pf:");
scanf("%f",&pf);
printf("enter lic:");
scanf("%f",&lic);
net_salary=(basic+da+hra)+(pf-lic);
printf("net salary is:");
printf("%0.2f",net_salary);
}
