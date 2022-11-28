#include<stdio.h>
// #include<conio.h>
#include<math.h>
double find_s(double x1[],double y1[],double xbar1,double ybar1,int n1,int m1)
{
  int i;
  double s1, ns1=0.0,ns2=0.0,ds,s2;
  for(i=0;i<n1;i++)
  {
    ns1+=pow((x1[i]-xbar1),2);
  }
  for(i=0;i<m1;i++)
  {
    ns2+=pow((y1[i]-ybar1),2);
  }
  ds=n1+m1-2;
  s1=(ns1+ns2)/ds;
  s2=sqrt(s1);
  return s2;
}

int main()
{
   int n,m,i;
   double xbar,ybar,x[500],y[500],mux,muy,s=0.0,tn,t,sumx=0.0,sumy=0.0,dsq,v1,v2,v3;
//    clrscr();
   printf("how many values you want to enter for x-");
   scanf("%d",&n);
   printf("enter the value of mux-");
   scanf("%lf",&mux);
   printf("enter the value for x-");
   for(i=0;i<n;i++)
   {
     scanf("%lf",&x[i]);
     sumx+=x[i];
   }
   xbar=sumx/n;
   printf("how many values you want to enter for y-");
   scanf("%d",&m);
   printf("enter the value of muy-");
   scanf("%lf",&muy);
   printf("enter the value for y-");
   for(i=0;i<m;i++)
   {
     scanf("%lf",&y[i]);
     sumy+=y[i];
   }
   ybar=sumy/m;

s=find_s(x,y,xbar,ybar,n,m);
//printf("s=%lf",s);//
dsq=sqrt((1.0/n)+(1.0/m));
//printf("dsq=%lf",dsq);//
tn=fabs((xbar-ybar)-(mux-muy));
//printf("tn=%lf",tn);//
t=(tn)/(s*dsq);
printf("the tvalue= %lf \n",t);
printf("enter tvalue at 90% c.i.-\n");
scanf("%lf", &v1);
printf("enter tvalue at 95% c.i.-\n");
scanf("%lf",&v2);
printf("enter tvalue at 99% c.i.-\n");
scanf("%lf",&v3);
if(v1>t)
printf("test is passed at 90% c.i.");
else if(v2>t)
printf("test is passed at 95% c.i.");
else if(v3>t)
printf("test is passed at 99% c.i.");
else
printf("test is failed at all levels");
// getch();
return 0;
}

// how many values you want to enter for x-5
// enter the value of mux-26
// enter the value for x-23 24 25 26 23
// how many values you want to enter for y-4
// enter the value of muy-27
// enter the value for y-25 26 28 29
// the tvalue= 1.732051 
// enter tvalue at 90�.i.-
// 1
// enter tvalue at 95.i.-
// 2
// enter tvalue at 99.i.-
// 3