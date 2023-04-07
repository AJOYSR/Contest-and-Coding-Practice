#include<bits/stdc++.h>
using namespace std;
int main()
{
    double r1,r2,r3;
    int cases,i;
    scanf("%d",&cases);
    for(i=0;i<cases;i++){
      scanf("%lf %lf %lf",&r1,&r2,&r3);

      double m1= r2+r3;
      double m2= r1+r3;
      double m3= r1+r2;

      double theta1=acos((m2*m2+m3*m3-m1*m1)/(2*m2*m3));
      double theta2=acos((m1*m1+m3*m3-m2*m2)/(2*m1*m3));
      double theta3=acos((m2*m2+m1*m1-m3*m3)/(2*m2*m1));

      double med=(m1+m2+m3)/2.0;
      double areaOfTri=sqrt(med*(med-m1)*(med-m2)*(med-m3));

      double areaofArc1=0.5*theta1*r1*r1;
      double areaofArc2=0.5*theta2*r2*r2;
      double areaofArc3=0.5*theta3*r3*r3;

      double ans=areaOfTri-areaofArc1-areaofArc2-areaofArc3;
      printf("%.6f\n", ans);
    }
    return 0;
}
