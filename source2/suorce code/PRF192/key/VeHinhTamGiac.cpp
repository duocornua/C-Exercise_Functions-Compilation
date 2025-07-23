#include <stdio.h>

// ========================================== TAM GIAC VUONG XUOI =================================================
// ====== HINH DAY ========

/*
//Nhap vao so cot in ra hinh cu cai in hoa - co trong de thi
int main() {
	int i, j, rows, count=0;
	printf("Enter the number of rows\n");
	scanf("%d", &rows);
	for (i = 0; i < 2*rows; i=i+2) {
		for (j = 0; j <= i; j++) {
			printf("%c", 'A'+count);
			if(j < i/2)
				count++;
			else
				count--;
		}
		count = 0;
		printf("\n");
	}
	return(0);
}
*/

//-----------------------------------------------------------------
// tam giac vuong day - hinh xuoi - ve bang (*)
void TamGiacVuong_Day(int n) {
	int i,j;
	for (i=0; i<=n; i++) {
		for (j=0; j<i; j++) {
			printf ("*");
		}
		printf ("\n");
	}
	printf("\n");
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// tam giac vuong day - hinh xuoi - ve bang chu cai in thuong a-z - ban 1
void TamGiacVuong_Day_InThuong_az_ban1(int n) {
	int i, j;
	char ch = 'a';

	for (i = 0; i <= n; i++) {
		for (j = 0; j < i; j++) {
			printf("%c", ch);
			ch++;
			if (ch > 'z')
				ch = 'a';
		}
		printf("\n");
	}
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// tam giac vuong day - hinh xuoi - ve bang chu cai in thuong a-z - ban 2
void TamGiacVuong_Day_InThuong_az_ban2(int n) {
	int i, j;

	for (i = 0; i <= n; i++) {
		char ch = 'a';
		for (j = 0; j < i; j++) {
			printf("%c", ch);
			ch++;
			if (ch > 'z')
				ch = 'a';
		}
		printf("\n");
	}
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// tam giac vuong day - hinh xuoi - ve bang chu cai in hoa A-Z - ban 1
void TamGiacVuong_Day_InHoa_AZ_ban1(int n) {
	int i, j;
	char ch = 'A';

	for (i = 0; i <= n; i++) {
		for (j = 0; j < i; j++) {
			printf("%c", ch);
			ch++;
			if (ch > 'Z')
				ch = 'A';
		}
		printf("\n");
	}
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// tam giac vuong day - hinh xuoi - ve bang chu cai in hoa A-Z - ban 2
void TamGiacVuong_Day_InHoa_AZ_ban2(int n) {
	int i, j;

	for (i = 0; i <= n; i++) {
		char ch = 'A';
		for (j = 0; j < i; j++) {
			printf("%c", ch);
			ch++;
			if (ch > 'Z')
				ch = 'A';
		}
		printf("\n");
	}
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// tam giac vuong day - hinh xuoi - ve bang chu cai in hoa A-Z - ban 3
void TamGiacVuong_Day_InHoa_AZ_ban3(int n) {
	int i, j;
	char ch = 'A';

	for (i = 0; i < n; i++) {
		for (j = 0; j <= i; j++) {
			printf("%c", ch + j);
		}
		printf("\n");
		ch++;
		if (ch > 'Z')
			ch = 'A';
	}
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// tam giac vuong day - hinh xuoi - ve bang so 0-9 - ban 1
void TamGiacVuong_Day_So_ban1(int n) {
	int i, j;
	int num = 0;

	for (i = 0; i <= n; i++) {
		for (j = 0; j < i; j++) {
			printf("%d", num);
			num++;
			if (num > 9)
				num = 0;
		}
		printf("\n");
	}
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// tam giac vuong day - hinh xuoi - ve bang so 0-9 - ban 2
void TamGiacVuong_Day_So_ban2(int n) {
	int i, j;

	for (i = 0; i <= n; i++) {
		int num = 0;
		for (j = 0; j < i; j++) {
			printf("%d", num);
			num++;
			if (num > 9)
				num = 0;
		}
		printf("\n");
	}
}
//-----------------------------------------------------------------

// ====== HINH RONG ========
//-----------------------------------------------------------------
// tam giac vuong rong - hinh xuoi - ve bang (*)
void TamGiacVuong_Rong(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (j == 1 || i == n || i == j)
				printf("*");
			else
				printf("  ");
		}
		printf("\n");
	}
	printf("\n");
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// tam giac vuong rong - hinh xuoi - ve bang chu cai in thuong a-z - ban 1
void TamGiacVuong_Rong_InThuong_az_ban1(int n) {
	int i, j;
	char ch = 'a';

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (j == 0 || i == j || i == n - 1)
				printf("%c", ch);
			else
				printf("  ");
		}
		printf("\n");
		ch++;
		if (ch > 'z')
			ch = 'a';
	}
	printf("\n");
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// tam giac vuong rong - hinh xuoi - ve bang chu cai in thuong a-z - ban 2
void TamGiacVuong_Rong_InThuong_az_ban2(int n) {
	int i, j;

	for (i = 0; i < n; i++) {
		char ch = 'a';
		for (j = 0; j < n; j++) {
			if (j == 0 || i == j || i == n - 1)
				printf("%c", ch);
			else
				printf("  ");
			ch++;
			if (ch > 'z')
				ch = 'a';
		}
		printf("\n");
	}
	printf("\n");
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// tam giac vuong rong - hinh xuoi - ve bang chu cai in hoa A-Z - ban 1
void TamGiacVuong_Rong_InHoa_AZ_ban1(int n) {
	int i, j;
	char ch = 'A';

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (j == 0 || i == j || i == n - 1)
				printf("%c", ch);
			else
				printf("  ");
		}
		printf("\n");
		ch++;
		if (ch > 'Z')
			ch = 'A';
	}
	printf("\n");
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// tam giac vuong rong - hinh xuoi - ve bang chu cai in hoa A-Z - ban 2
void TamGiacVuong_Rong_InHoa_AZ_ban2(int n) {
	int i, j;

	for (i = 0; i < n; i++) {
		char ch = 'A';
		for (j = 0; j < n; j++) {
			if (j == 0 || i == j || i == n - 1)
				printf("%c", ch);
			else
				printf("  ");
			ch++;
			if (ch > 'Z')
				ch = 'A';
		}
		printf("\n");
	}
	printf("\n");
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// tam giac vuong rong - hinh xuoi - ve bang so 0-9 - ban 1
void TamGiacVuong_Rong_So_ban1(int n) {
	int i, j;
	int num = 0;

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (j == 0 || i == j || i == n - 1)
				printf("%d", num);
			else
				printf("  ");
		}
		printf("\n");
		num++;
		if (num > 9)
			num = 0;
	}
	printf("\n");
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// tam giac vuong rong - hinh xuoi - ve bang cso 0-9 - ban 2
void TamGiacVuong_Rong_So_ban2(int n) {
	int i, j;

	for (i = 0; i < n; i++) {
		int num = 0;
		for (j = 0; j < n; j++) {
			if (j == 0 || i == j || i == n - 1)
				printf("%d", num);
			else
				printf("  ");
			num++;
			if (num > 9)
				num = 0;
		}
		printf("\n");
	}
	printf("\n");
}
//-----------------------------------------------------------------
// ================================================================================================================



// ========================================== TAM GIAC VUONG NGUOC =================================================
// ====== HINH DAY ========
//-----------------------------------------------------------------
// tam giac vuong day - hinh nguoc - ve bang (*)
void TamGiacVuong_HinhNguoc_Day(int n) {
	int i,j;
	for (i=0; i<=n; i++) {
		for (j=0; j<n-i; j++) {
			printf ("*");
		}
		printf ("\n");
	}
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// tam giac vuong day - hinh nguoc - ve bang chu cai in thuong a-z
void TamGiacVuong_HinhNguoc_Day_InThuong_az(int n) {
	int i, j;
	char ch = 'a';

	for (i = 0; i <= n; i++) {
		for (j = 0; j < n - i; j++) {
			printf("%c", ch);
			ch++;
			if (ch > 'z')
				ch = 'a';
		}
		printf("\n");
	}
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// tam giac vuong day - hinh nguoc - ve bang chu cai in thuong a-z dao nguoc
void TamGiacVuong_HinhNguoc_Day_InThuong_az_DaoNguoc(int n) {
	int i, j;
	char ch = 'z';

	for (i = 0; i <= n; i++) {
		for (j = 0; j < n - i; j++) {
			printf("%c", ch);
			ch--;
			if (ch < 'a')
				ch = 'z';
		}
		printf("\n");
	}
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// tam giac vuong day - hinh nguoc - ve bang chu cai in hoa A-Z
void TamGiacVuong_HinhNguoc_Day_InHoa_AZ(int n) {
	int i, j;
	char ch = 'A';

	for (i = 0; i <= n; i++) {
		for (j = 0; j < n - i; j++) {
			printf("%c", ch);
			ch++;
			if (ch > 'Z')
				ch = 'A';
		}
		printf("\n");
	}
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// tam giac vuong day - hinh nguoc - ve bang chu cai in hoa A-Z dao nguoc
void TamGiacVuong_HinhNguoc_Day_InHoa_AZ_DaoNguoc(int n) {
	int i, j;
	char ch = 'Z';

	for (i = 0; i <= n; i++) {
		for (j = 0; j < n - i; j++) {
			printf("%c", ch);
			ch--;
			if (ch < 'A')
				ch = 'Z';
		}
		printf("\n");
	}
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// tam giac vuong day - hinh nguoc - ve bang so 0-9
void TamGiacVuong_HinhNguoc_Day_So(int n) {
	int i, j;
	int num = 0;

	for (i = 0; i <= n; i++) {
		for (j = 0; j < n - i; j++) {
			printf("%d", num);
			num++;
			if (num > 9)
				num = 0;
		}
		printf("\n");
	}
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// tam giac vuong day - hinh nguoc - ve bang so 0-9
void TamGiacVuong_HinhNguoc_Day_So_DaoNguoc(int n) {
	int i, j;
	int num = 9;

	for (i = 0; i <= n; i++) {
		for (j = 0; j < n - i; j++) {
			printf("%d", num);
			num--;
			if (num < 0)
				num = 9;
		}
		printf("\n");
	}
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// tam giac vuong day - hinh nguoc mui ben phai - ve bang (*)
void TamGiacVuong_HinhNguoc_BenPhai_Day(int n) {
	int i,j;
	for (i=0; i<n; i++) {
		for (j=0; j<i; j++) {
			printf (" ");
		}
		for (j=i; j<n; j++) {
			printf ("*");
		}
		printf ("\n");
	}
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// tam giac vuong day - hinh nguoc mui ben phai - ve bang chu cai in thuong a-z
void TamGiacVuong_HinhNguoc_BenPhai_Day_InThuong_az(int n) {
	int i, j;
	char ch = 'a';

	for (i = 0; i < n; i++) {
		for (j = 0; j < i; j++) {
			printf(" ");
		}
		for (j = i; j < n; j++) {
			printf("%c", ch);
			ch++;
			if (ch > 'z')
				ch = 'a';
		}
		printf("\n");
	}
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// tam giac vuong day - hinh nguoc mui ben phai - ve bang chu cai in hoa A-Z
void TamGiacVuong_HinhNguoc_BenPhai_Day_InHoa_AZ(int n) {
	int i, j;
	char ch = 'A';

	for (i = 0; i < n; i++) {
		for (j = 0; j < i; j++) {
			printf(" ");
		}
		for (j = i; j < n; j++) {
			printf("%c", ch);
			ch++;
			if (ch > 'Z')
				ch = 'A';
		}
		printf("\n");
	}
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// tam giac vuong day - hinh nguoc mui ben phai - ve bang so 0-9
void TamGiacVuong_HinhNguoc_BenPhai_Day_So(int n) {
	int i, j;
	int num = 0;

	for (i = 0; i < n; i++) {
		for (j = 0; j < i; j++) {
			printf(" ");
		}
		for (j = i; j < n; j++) {
			printf("%d", num);
			num++;
			if (num > 9)
				num = 0;
		}
		printf("\n");
	}
}
//-----------------------------------------------------------------

// ====== HINH RONG ========
//-----------------------------------------------------------------
// tam giac vuong - hinh rong - ve bang (*)
void TamGiacVuong_HinhNguoc_Rong(int n) {
	int i, j;

	for (i = 0; i < n; i++) {
		for (j = 0; j < n - i; j++) {
			if (i==0 || j == 0 || i == n - 1 || j == n - i - 1)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// tam giac vuong - hinh rong nguoc mui ben phai - ve bang chu cai in thuong a-z
void TamGiacVuong_HinhNguoc_Rong_InThuong_az(int n) {
	int i, j;
	char ch = 'a';

	for (i = 0; i < n; i++) {
		for (j = 0; j < n - i; j++) {
			if (i == 0 || j == 0 || i == n - 1 || j == n - i - 1)
				printf("%c", ch);
			else
				printf(" ");
		}
		printf("\n");
		ch++;
	}
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// tam giac vuong - hinh rong nguoc mui ben phai - ve bang so 0-9
void TamGiacVuong_HinhNguoc_Rong_So_Ban1(int n) {
	int i, j;
	int num = 0;

	for (i = 0; i < n; i++) {
		for (j = 0; j < n - i; j++) {
			if (i == 0 || j == 0 || i == n - 1 || j == n - i - 1)
				printf("%d", num);
			else
				printf(" ");
		}
		printf("\n");
		num++;
		if (num > 9)
			num = 0;
	}
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// tam giac vuong - hinh rong nguoc mui ben phai - ve bang so 0-9
void TamGiacVuong_HinhNguoc_Rong_So_Ban2(int n) {
	int i, j;

	for (i = 0; i < n; i++) {
		int num = i;
		for (j = 0; j < n - i; j++) {
			if (j == 0 || i == 0 || j == n - i - 1)
				printf("%d", num);
			else
				printf(" ");
			num++;
		}
		printf("\n");
	}
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// tam giac vuong rong - hinh nguoc mui ben phai - ve bang (*)
void TamGiacVuong_HinhNguoc_BenPhai_Rong(int n) {
	int i, j;

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (j < i)
				printf(" ");
			else if (j == n - 1 || i == 0 || i == n - 1)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}
//-----------------------------------------------------------------
// ================================================================================================================


// ========================================== TAM GIAC VUONG XUOI =================================================

// == HINH DAY ==
//-----------------------------------------------------------------
// tam giac vuong xuoi mui ben phai - hinh day - ve bang (*)
void TamGiacVuong_HinhXuoi_BenPhai_Day(int n) {
	int i,j;
	for (i=0; i<n; i++) {
		for (j=0; j<n-i-1; j++) {
			printf (" ");
		}
		for (j=0; j<i+1; j++) {
			printf ("*");
		}
		printf ("\n");
	}
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// tam giac vuong xuoi mui ben phai - hinh day - ve bang chu cai in thuong a-z
void TamGiacVuong_HinhXuoi_BenPhai_Day_InThuong_az(int n) {
	int i, j;
	char ch = 'a';

	for (i = 0; i < n; i++) {
		for (j = 0; j < n - i - 1; j++) {
			printf(" ");
		}

		for (j = 0; j < i + 1; j++) {
			printf("%c", ch);
			ch++;
			if (ch > 'z')
				ch = 'a';
		}

		printf("\n");
	}
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// tam giac vuong xuoi mui ben phai - hinh day - ve bang so 0-9
void TamGiacVuong_HinhXuoi_BenPhai_Day_So(int n) {
	int i, j;
	int num = 0;

	for (i = 0; i < n; i++) {
		for (j = 0; j < n - i - 1; j++) {
			printf(" ");
		}

		for (j = 0; j < i + 1; j++) {
			printf("%d", num);
			num++;
			if (num > 9)
				num = 0;
		}

		printf("\n");
	}
}
//-----------------------------------------------------------------

// == HINH RONG ==
// tam giac vuong xuoi mui ben phai - hinh rong - ve bang (*)
void TamGiacVuong_HinhXuoi_BenPhai_Rong(int n) {
	int i, j;

	for (i = 0; i < n; i++) {
		for (j = 0; j < n - i - 1; j++) {
			printf(" ");
		}

		for (j = 0; j < i + 1; j++) {
			if (j == 0 || j == i || i == n - 1)
				printf("*");
			else
				printf(" ");
		}

		printf("\n");
	}
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// tam giac vuong xuoi mui ben phai - hinh rong - ve bang chu cai in thuong a-z
void TamGiacVuong_HinhXuoi_BenPhai_Rong_InThuong_az(int n) {
	int i, j;
	char ch = 'a';

	for (i = 0; i < n; i++) {
		for (j = 0; j < n - i - 1; j++) {
			printf(" ");
		}

		for (j = 0; j < i + 1; j++) {
			if (j == 0 || j == i || i == n - 1)
				printf("%c", ch);
			else
				printf(" ");
			ch = (ch == 'z') ? 'a' : ch + 1;
		}

		printf("\n");
	}
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// tam giac vuong xuoi mui ben phai - hinh rong - ve bang so 0-9
void TamGiacVuong_HinhXuoi_BenPhai_Rong_So(int n) {
	int num = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			printf(" ");
		}

		for (int j = 0; j < i + 1; j++) {
			if (j == 0 || j == i || i == n - 1)
				printf("%d", num);
			else
				printf(" ");
			num = (num + 1) % 10;
		}

		printf("\n");
	}
}
//-----------------------------------------------------------------
// ================================================================================================================


// ========================================== TAM GIAC CAN XUOI =================================================

// == HINH DAY ==
//-----------------------------------------------------------------
// tam giac can day (*)
void TamGiacCan_HinhXuoi_BenPhai_Day(int n) {
	int i, j, k;
	for (i = 1; i <= n; i++) {
		for (j = i; j < n; j++) {
			printf(" ");
		}
		for (k = 1; k <= 2 * i - 1; k++) {
			printf("*");
		}
		printf("\n");
	}
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// tam giac giac can xuoi mui ben phai - hinh day - ve bang chu cai in thuong a-z
void TamGiacCan_HinhXuoi_BenPhai_Day_InThuong_az(int n) {
	int i, j, k;
	char ch = 'a';

	for (i = 1; i <= n; i++) {
		for (j = i; j < n; j++) {
			printf(" ");
		}

		for (k = 1; k <= 2 * i - 1; k++) {
			printf("%c", ch);
			if (k < i)
				ch++;
			else
				ch--;
		}

		printf("\n");
		ch = 'a';
	}
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// tam giac giac can xuoi mui ben phai - hinh day - ve bang so 0-9
void TamGiacCan_HinhXuoi_BenPhai_Day_So(int n) {
	int i, j, k;
	int num = 0;

	for (i = 1; i <= n; i++) {
		for (j = i; j < n; j++) {
			printf(" ");
		}

		for (k = 1; k <= 2 * i - 1; k++) {
			printf("%d", num);
			if (k < i)
				num++;
			else
				num--;
		}

		printf("\n");
		num = 0;
	}
}
//-----------------------------------------------------------------

// == HINH RONG ==
//-----------------------------------------------------------------
// tam giac can rong (*)
void TamGiacCan_HinhXuoi_BenPhai_Rong(int n) {
	int i, j, k;

	for (i = 1; i <= n; i++) {
		for (j = i; j < n; j++) {
			printf(" ");
		}

		for (k = 1; k <= 2 * i - 1; k++) {
			if (k == 1 || k == 2 * i - 1 || i == n)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// tam giac giac can xuoi mui ben phai - hinh rong - ve bang chu cai in thuong a-z
void TamGiacCan_HinhXuoi_BenPhai_Rong_InThuong_az(int n) {
	int i, j, k;
	char ch = 'a';

	for (i = 1; i <= n; i++) {
		for (j = i; j < n; j++) {
			printf(" ");
		}

		for (k = 1; k <= 2 * i - 1; k++) {
			if (k == 1 || k == 2 * i - 1 || i == n)
				printf("%c", ch);
			else
				printf(" ");
		}

		ch++;
		printf("\n");
	}
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// tam giac giac can xuoi mui ben rong - hinh day - ve bang so 0-9
void TamGiacCan_HinhXuoi_BenPhai_Rong_So(int n) {
	int i, j, k;
	char num = 0;

	for (i = 1; i <= n; i++) {
		for (j = i; j < n; j++) {
			printf(" ");
		}

		for (k = 1; k <= 2 * i - 1; k++) {
			if (k == 1 || k == 2 * i - 1 || i == n)
				printf("%d", num);
			else
				printf(" ");
		}

		num++;
		printf("\n");
	}
}
//-----------------------------------------------------------------
// ================================================================================================================

int main() {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);

	//========================
	// TAM GIAC VUONG XUOI BEN TRAI
	// == HINH DAY ==
	/*
	TamGiacVuong_Day(n);
	TamGiacVuong_Day_InThuong_az_ban1(n);
	TamGiacVuong_Day_InThuong_az_ban2(n);
	TamGiacVuong_Day_InHoa_AZ_ban1(n);
	TamGiacVuong_Day_InHoa_AZ_ban2(n);
	TamGiacVuong_Day_InHoa_AZ_ban3(n);
	TamGiacVuong_Day_So_ban1(n);
	TamGiacVuong_Day_So_ban2(n);
	*/
	// == HINH RONG ==
	/*
	TamGiacVuong_Rong(n);
	TamGiacVuong_Rong_InThuong_az_ban1(n);
	TamGiacVuong_Rong_InThuong_az_ban2(n);
	TamGiacVuong_Rong_InHoa_AZ_ban1(n);
	TamGiacVuong_Rong_InHoa_AZ_ban2(n);
	TamGiacVuong_Rong_So_ban1(n);
	TamGiacVuong_Rong_So_ban2(n);
	*/
	//========================s

	//========================
	// TAM GIAC VUONG NGUOC
	// == HINH DAY ==
	// Nguoc mui ben trai
	/*
	TamGiacVuong_HinhNguoc_Day(n);
	TamGiacVuong_HinhNguoc_Day_InThuong_az(n);
	TamGiacVuong_HinhNguoc_Day_InThuong_az_DaoNguoc(n);
	TamGiacVuong_HinhNguoc_Day_InHoa_AZ(n);
	TamGiacVuong_HinhNguoc_Day_InHoa_AZ_DaoNguoc(n);
	TamGiacVuong_HinhNguoc_Day_So(n);
	TamGiacVuong_HinhNguoc_Day_So_DaoNguoc(n);
	*/
	// Nguoc mui ben phai
	/*
	TamGiacVuong_HinhNguoc_BenPhai_Day(n);
	TamGiacVuong_HinhNguoc_BenPhai_Day_InThuong_az(n);
	TamGiacVuong_HinhNguoc_BenPhai_Day_InHoa_AZ(n);
	TamGiacVuong_HinhNguoc_BenPhai_Day_So(n);
	*/
	// == HINH RONG ==
	/*
	TamGiacVuong_HinhNguoc_Rong(n);
	TamGiacVuong_HinhNguoc_Rong_InThuong_az(n);
	TamGiacVuong_HinhNguoc_Rong_So_Ban1(n);
	TamGiacVuong_HinhNguoc_Rong_So_Ban2(n);
	*/
	//========================

	//========================
	// TAM GIAC VUONG XUOI BEN PHAI
	/*
	// == HINH DAY ==
	TamGiacVuong_HinhXuoi_BenPhai_Day(n);
	TamGiacVuong_HinhXuoi_BenPhai_Day_InThuong_az(n);
	TamGiacVuong_HinhXuoi_BenPhai_Day_So(n);

	// == HINH RONG ==
	TamGiacVuong_HinhXuoi_BenPhai_Rong(n);
	TamGiacVuong_HinhXuoi_BenPhai_Rong_InThuong_az(n);
	TamGiacVuong_HinhXuoi_BenPhai_Rong_So(n);
	*/
	//========================

	//========================
	// TAM GIAC CAN XUOI
	/*
	// == HINH DAY ==
	TamGiacCan_HinhXuoi_BenPhai_Day(n);
	TamGiacCan_HinhXuoi_BenPhai_Day_InThuong_az(n);
	TamGiacCan_HinhXuoi_BenPhai_Day_So(n);
	*/
	/*
	// == HINH RONG ==
	TamGiacCan_HinhXuoi_BenPhai_Rong(n);
	TamGiacCan_HinhXuoi_BenPhai_Rong_InThuong_az(n);
	TamGiacCan_HinhXuoi_BenPhai_Rong_So(n);
	*/
	//========================

	return 0;
}
