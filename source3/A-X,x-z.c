#include <stdio.h>
int main(){
	char x, i;
	do {
	printf ("Moi nhap ki tu ");
    x = getchar ();
	fflush(stdin);
	} while (!(x>= 'a'&&x<='z'|| x>= 'A'&& x<='Z'));
	
	// hien thi A-X, x-z
	if (x>= 'a'&& x<= 'z'){
		for (i= 'A';i<= x- ('a'-'A'); i++ ){
			printf ("%c",i);}
		for (i= x; i<= 'z'; i++ ){
		printf ("%c", i);}
}   if (x>= 'A'&& x<= 'Z'){
		for (i='A'; i<= x; i++){
		printf ("%c", i);}
		for (i= x + ('a'-'A');i<= 'z'; i++ ){
			printf ("%c ",i);}
	
}
}