#include <stdio.h>

int main() {
	int n;
	char c[23];
	int d[1000];
	scanf("%d\n", &n);
	for(int i = 0; i < n -1 ; ++i) {
		scanf("%c\n", &c[i]);
	}
	scanf("%c", &c[n - 1]);
	for (int i=0;i<n;i++)
	{
		d[c[i]]=0;
	}
	for(int i = 0; i < n; ++i) {
		d[c[i]] += 1;
	}
	
	int Max1 = -1, Max2 = -1;
	char kt1, kt2;
	for(int i = 0; i < n; ++i) {
		if (d[c[i]] > Max1) {
			Max1 = d[c[i]];
			kt1 = c[i];
		}
	}
	
	for(int i = 0; i < n; ++i) {
		if (c[i] != kt1 && d[c[i]] > Max2) {
			Max2 = d[c[i]];
			kt2 = c[i];
		}
	}
	printf("%c\n%c", kt1, kt2);
}
