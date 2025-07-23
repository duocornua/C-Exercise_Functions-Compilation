#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
 // ham sinh ngau nhien
/*int i;
srand(time(NULL));
for (i=0; i<=5; i++){
	int x= rand(); 
	printf("%d ", x);
}
}*/
int  x, y, z;
printf ("nhap n ");
scanf ("%d",&x);
printf ("nhap min ");
scanf ("%d",&y);
printf ("nhap max ");
scanf ("%d",&z);
int i;
srand(time(NULL));
for (i= 0; i<x; i++){
	int x= y+rand()%(z-y+1);
	printf ("%d ",x);
}
}

/*float  x, y, z;
printf ("nhap n ");
scanf ("%.2f",&x);
printf ("nhap min ");
scanf ("%.2f",&y);
printf ("nhap max ");
scanf ("%.2f",&z);
int i;
srand(time(NULL));
for (i= 0; i<x; i++){
	 float x= y+(float)rand()/(z-y);
	printf ("%.2f ",x);
}
}*/


