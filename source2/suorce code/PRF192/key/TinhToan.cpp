//// tinh toan gio phut giay
//#include<stdio.h>
//								int main() {
//									int a;
//									scanf("%d",&a);
//									int h,m,s;
//									h=a/3600;
//									printf("\n%d",h);
//									m=(a-(h*3600))/60;
//									printf("\n%d",m);
//									s=a-h*3600-m*60;
//									printf("\n%d",s);
//									return 0;
//								}
//
//
//// binh phuong cac so trong mang
//								int size;
//								scanf("%d",&size);
//								int i,Arr[size];
//								for(i=0; i<size; i++)
//									scanf("%d",&Arr[i]);
//								for(i=0; i<size; i++)
//									if(Arr[i]%2==1&& Arr[i]>0) {
//										printf("%d ",Arr[i]*Arr[i]);
//									}
//
//



////                                                                 Ham` tinh' tong? n so.
//								int SumInRange(int n) {
//									int i;
//									int sum = 0;
//									for (i = 1; i <= n; i++) {
//										sum += i;
//									}
//									return sum;
//								}
//
//								int main() {
//									int n;
//									int sum;
//									scanf("%d", &n);
//									sum = SumInRange(n);
//									printf("%d", sum);
//									return 0;
//								}
//






//
////                                       Cac cong thuc tinh S,chu vi hinh chu nhat, tam giac, tron.
//								double getPerimCircle(double r)
//								double getAreaCircle(double r)
//								double getPerimRecangle(double A,double B)
//								double getAreaRecangle(double A,double B)
//								double getPerimTriangle(double a,double B,double C)
//								double getAreaTriangle(double A,double B,double C)
//								if (r>0) return getPerimCircle==2*r*3.14;
//								if (r>0) return getAreaCircle==r*r*3.14;
//								if (A>0&&B>0) return getPerimRectangle==(A+B)*2;
//								if (A>0&&B>0) return getAreaRectangle==(A*B);
//								if (A>0&&B>0&&C>0&&A+B>C&&B+C>A&&A+C>B) return getPerimTriangle==(A+B+C);
//								{
//									if (A>0&&B>0&&C>0&&A+B>C&&B+C>A&&A+C>B) {
//										double P=getPerimTriangle(A,B,C)/2;
//										return sqrt(P*(P-A)*P(P-B)*P*(P-C));
//									} else {
//										printf("\nTHis is not a triangle,pls check length of A,B,C edge");
//										return 0;
//									}
//								}
//



////                                                            LCM,GCD
//#include<stdio.h>
//								int GCD(int a, int b) {
//									while (a!=b)
//										if(a>b) a=a-b;
//										else b=b-a;
//									return b;
//								}
//								int LCM(int a, int b) {
//									int lcm=a * b /GCD(a,b);
//									return lcm;
//								}
//								int main() {
//									int a,b;
//									printf("Please enter two positive integer to find GCD,LCM: ");
//									scanf("%d%d", &a,&b);
//
//									GCD(a,b);
//									printf("OUTPUT:\n");
//									printf("%d\t%d", GCD(a,b),LCM(a,b));
//									return 0;
//								}
//
//



////                                                  Neu la so le, binh phuong roi cong vao
//#include <stdio.h>
//								int main() {
//									int size;
//									int sum=0;
//									do {
//										scanf("%d",&size);
//									} while(size>10);
//									int i,Arr[size];
//									for(i=0; i<size; i++)
//										scanf("%d",&Arr[i]);
//									for(i=0; i<size; i++)
//										if(Arr[i]%2!=0)
//											sum=sum+(Arr[i]*Arr[i]);
//									printf("%d",sum);
//									return 0;
//								}
//
//




//
////                                                      In ra tich cua cac so trong chu so n
//#include <stdio.h>
//								int main() {
//									int n,a,pro=1;
//									scanf("%d",&a);
//									do {
//										n=a%10;
//										pro*=n;
//										a=a/10;
//									} while (a>0);
//									printf("%d",pro);
//									return 0;
//								}
//
//
//
//



//
////                                                        Average positive number
//#include<stdio.h>
//#include<string.h>
//								double averageNumber(int Arr[], int size) {
//									int i,count=0;
//									int sum=0;
//									for(i=0; i<size; i++)
//										if(Arr[i]>=0) {
//											sum+=Arr[i];
//											count++;
//										}
//									if(count==0) return 0;
//									else return  sum*1.0 /count ;
//								}
//								int main() {
//									int size;
//									scanf("%d",&size);
//									int i,Arr[size];
//									for(i=0; i<size; i++) {
//										scanf("%d",&Arr[i]);
//									}
//
//									printf("%.2lf",averageNumber(Arr,size));
//								}
//
//
//



//
//
////                                                     Area of a circle
//#include<stdio.h>
//#define PI 3.14159
//								int main() {
//									double a;
//									printf("Enter radius to calculate the area of a circle:");
//									scanf("%lf",&a);
//									double area=0;
//									if (a>0) area=PI*a*a;
//									printf("%lf",area);
//									return 0;
//								}
//
//
//
//



//
//
////                                                               In ra gio phut giay
//#include<stdio.h>
//								int main() {
//									int a;
//									scanf("%d",&a);
//									int h,m,s;
//									h=a/3600;
//									printf("\n%d",h);
//									m=(a-(h*3600))/60;
//									printf("\n%d",m);
//									s=a-h*3600-m*60;
//									printf("\n%d",s);
//									return 0;
//								}
//
//
////                                                                   Tong so dau va so cuoi
//#include <stdio.h>
//
//								int sum, a[100], x, count1 = 0, i;
//								int main() {
//									scanf("%d", &x);
//									while (x != 0) {
//										int n = x % 10;
//										x = x / 10;
//										a[count1++] = n;
//									}
//									sum = a[0] + a[count1 - 1];
//									printf("%d", sum);
//									return 0;
//								}





//
////                                                                    tinh':  (-1)^n+1 * x^n
//#include<stdio.h>
//#include<math.h>
//								int main() {
//									int sum=0, i, n,x;
//									scanf("%d",&n);
//									fflush(stdin);
//									scanf("%d",&x);
//									for(i=1; i<=n; i++) {
//										sum+= ((pow(-1,i+1))*(pow(x,i)));
//									}
//									printf("\nOUTPUT:\n%d",sum);
//									return 0;
//								}
//
//




//
////                                                                       square odd number
//#include<stdio.h>
//								int main() {
//									int size;
//									scanf("%d",&size);
//									int i,Arr[size];
//									for(i=0; i<size; i++)
//										scanf("%d",&Arr[i]);
//									for(i=0; i<size; i++)
//										if(Arr[i]%2==1&& Arr[i]>0) {
//											printf("%d ",Arr[i]*Arr[i]);
//										}
//									printf("\n");
//									return 0;
//								}



//#include <stdio.h>
//
//								int main() {
//									float chieu_dai = 5.0;
//									float chieu_rong = 3.0;
//									float dien_tich, chu_vi;
//
//									dien_tich = chieu_dai * chieu_rong;
//									chu_vi = 2 * (chieu_dai + chieu_rong);
//
//									printf("Chieu dai = %f\n", chieu_dai);
//									printf("Chieu rong = %f\n", chieu_rong);
//									printf("Dien tich = %f\n", dien_tich);
//									printf("Chu vi = %f\n", chu_vi);
//
//									return 0;
//								}
//								----------------------------------------------------------------------------------------------------------------------------------------------------------
//								Di?n tích và chu vi tam giác:
//								Di?n tích tam giác = (dáy x chi?u cao) / 2
//
//								                     Chu vi tam giác = c?nh a + c?nh b + c?nh c
//
//#include <stdio.h>
//
//								int main() {
//									float day = 5.0;
//									float chieu_cao = 3.0;
//									float canh_a = 4.0;
//									float canh_b = 3.0;
//									float canh_c = 5.0;
//									float dien_tich, chu_vi;
//
//									dien_tich = (day * chieu_cao) / 2;
//									chu_vi = canh_a + canh_b + canh_c;
//
//									printf("Day = %f\n", day);
//									printf("Chieu cao = %f\n", chieu_cao);
//									printf("Canh a = %f\n", canh_a);
//									printf("Canh b = %f\n", canh_b);
//									printf("Canh c = %f\n", canh_c);
//									printf("Dien tich = %f\n", dien_tich);
//									printf("Chu vi = %f\n", chu_vi);
//
//									return 0;
//								}
//
//								-----------------------------------------------------------------------------------------------------------------------------------------------------------
//								Di?n tích và chu vi hình tròn:
//								Di?n tích hình tròn = pi x bán kính x bán kính
//
//								                      Chu vi hình tròn = 2 x pi x bán kính
//
//#include <stdio.h>
//#define PI 3.14159265358979323846
//
//								int main() {
//									float ban_kinh = 3.0;
//									float dien_tich, chu_vi;
//
//									dien_tich = PI * ban_kinh * ban_kinh;
//									chu_vi = 2 * PI * ban_kinh;
//
//									printf("Ban kinh = %f\n", ban_kinh);
//									printf("Dien tich = %f\n", dien_tich);
//									printf("Chu vi = %f\n", chu_vi);
//
//									return 0;
//								}
//								----------------------------------------------------------------------------------------------------------------------------------------------------------
//
//
//								/ Tinh F1(n) = n!
//								void FactorNumber(int n) {
//									int F1 = 1, i;
//									for (i = 1; i <= n; i++) {
//										F1 *= i;
//									}
//									printf("F1(%d) = %d\n", n, F1);
//								}
//
//// Tinh tong phan so F2(n) = 1 + 2 + 3 + ... + n
//								void SumFraction(int n) {
//									int F2 = 0, i;
//									for (i = 1; i <= n; i++) {
//										F2 += i;
//									}
//									printf("F2(%d) = %d\n", n, F2);
//								}
//
//// Tinh F1(n) + F2(n) = m
//								void SumF1F2(int n, int m) {
//									int tempF1, i;
//									for (i = 1; i <= n; i++) {
//										tempF1 = 1;
//										int j;
//										for (j = 1; j <= i; j++) {
//											tempF1 *= j;
//										}
//										if(tempF1 + (int)(i * (i + 1) / 2.0) == m) {
//											printf("n = %d\n", i);
//											break;
//										}
//									}
//								}
//
//// Nhap so nguyen n
//								int Input() {
//									int n;
//									printf("Enter an int num:");
//									scanf("%d", &n);
//									return n;
//								}
//
////Tinh n^m
//								void Tinhsomu(int n, int m) {
//									int nm = 1, i;
//									for (i = 1; i <= m; i++) {
//										nm *= n;
//									}
//									printf("%d^%d = %d\n", n, m, nm);
//								}
//
//								int main() {
//									int n = Input();
//									FactorNumber(n);
//									SumFraction(n);
//									int m;
//									printf("Enter an int m:");
//									scanf("%d", &m);
//									SumF1F2(n, m);
//									Tinhsomu(n, m);
//									return 0;
//								}
//
