#include<stdio.h>
#include<math.h>
#include<string.h>

int main() {
	
	int n;
	scanf("%d", &n);
	
	int nam, thang, ngay, dungay;
	
	nam=n/365;
	
	dungay=n%365;
	
	thang= dungay/30;
	
	ngay= dungay%30;
	
	printf("%d-%d-%d", nam, thang, ngay);
	
	return 0;
}
