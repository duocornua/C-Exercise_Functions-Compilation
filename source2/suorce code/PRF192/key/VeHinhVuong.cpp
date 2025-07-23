#include <stdio.h>

// =========================== VE HINH VUONG BANG DAU (*) ===================================================
//-----------------------------------------------------------------
// ve hinh vuong
void HinhVuongDay (int n) {
	int i,j;
	for (i= 0; i<n; i++) {
		for ( j=0; j<n; j++) {
			printf ("* ");
		}
		printf ("\n");
	}
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// Ve hinh vuong rong
void HinhVuongRong(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// ve hinh vuong bi rong duoi
void HinhVuongRongDuoi(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == 0 || j == 0 || j == n - 1)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// Ve hinh vuong rong o tren
void HinhVuongRongTren(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == n - 1 || j == 0 || j == n - 1)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// Ve hinh vuong rong trai
void HinhVuongRongTrai(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == 0 || i == n - 1 || j == n - 1)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// Ve hinh vuong rong phai
void HinhVuongRongPhai(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == 0 || i == n - 1 || j == 0)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
}
//-----------------------------------------------------------------
// ====================================================================================================================


// =========================== VE HINH VUONG BANG CHU CAI IN THUONG ===================================================
//-----------------------------------------------------------------
// Ve hinh vuong chu cai in thuong day
void HinhVuongChuCaiInThuong_Day(int n) {
	int i, j;
	char ch = 'a';

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("%c ", ch);
			ch++;
			if (ch > 'z')
				ch = 'a';
		}
		printf("\n");
	}
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// Ve hinh vuong chu cai in thuong rong
void HinhVuongChuCaiInThuong_Rong_Ban1(int n) {
	int i, j;
	char ch = 'a';

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
				printf("%c ", ch);
			else
				printf("  ");

			ch++;
			if (ch > 'z')
				ch = 'a';
		}
		printf("\n");
	}
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// Ve hinh vuong chu cai in thuong rong
void HinhVuongChuCaiInThuong_Rong_Ban2(int n) {
	int i, j;
	char ch = 'a';
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
				printf("%c ", ch);
			else
				printf("  ");
		}
		ch++;
		if (ch > 'z')
			ch = 'a';

		printf("\n");
	}
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// Ve hinh vuong chu cai in thuong rong duoi
void HinhVuongChuCaiInThuong_RongDuoi(int n) {
	char ch = 'a';
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == 0 || j == 0 || j == n - 1)
				printf("%c ", ch);
			else
				printf("  ");
		}
		ch++;
		if (ch > 'z')
			ch = 'a';
		printf("\n");
	}
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// Ve hinh vuong chu cai in thuong rong o tren
void HinhVuongChuCaiInThuong_RongTren(int n) {
	char ch = 'a';
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == n - 1 || j == 0 || j == n - 1)
				printf("%c ", ch);
			else
				printf("  ");
		}
		ch++;
		if (ch > 'z')
			ch = 'a';
		printf("\n");
	}
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// Ve hinh vuong chu cai in thuong rong trai
void HinhVuongChuCaiInThuong_RongTrai(int n) {
	char ch = 'a';
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == 0 || i == n - 1 || j == n - 1)
				printf("%c ", ch);
			else
				printf("  ");
		}
		ch++;
		if (ch > 'z')
			ch = 'a';
		printf("\n");
	}
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// Ve hinh vuong chu cai in thuong rong phai
void HinhVuongChuCaiInThuong_RongPhai(int n) {
	char ch = 'a';
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == 0 || i == n - 1 || j == 0)
				printf("%c ", ch);
			else
				printf("  ");
		}
		ch++;
		if (ch > 'z')
			ch = 'a';
		printf("\n");
	}
}
//-----------------------------------------------------------------
// ====================================================================================================================

// =========================== VE HINH VUONG BANG CHU CAI IN HOA ======================================================
//-----------------------------------------------------------------
// Ve hinh vuong chu cai in Hoa day
void HinhVuongChuCaiInHoa_Day(int n) {
	int i, j;
	char ch = 'A';

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("%c ", ch);
			ch++;
			if (ch > 'Z')
				ch = 'A';
		}
		printf("\n");
	}
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// Ve hinh vuong chu cai in Hoa rong
void HinhVuongChuCaiInHoa_Rong_Ban1(int n) {
	int i, j;
	char ch = 'A';

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
				printf("%c ", ch);
			else
				printf("  ");

			ch++;
			if (ch > 'Z')
				ch = 'A';
		}
		printf("\n");
	}
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// Ve hinh vuong chu cai in Hoa rong
void HinhVuongChuCaiInHoa_Rong_Ban2(int n) {
	int i, j;
	char ch = 'A';

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
				printf("%c ", ch);
			else
				printf("  ");
		}

		ch++;
		if (ch > 'Z')
			ch = 'A';

		printf("\n");
	}
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// Ve hinh vuong chu cai in Hoa rong duoi
void HinhVuongChuCaiInHoa_RongDuoi(int n) {
	char ch = 'A';
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == 0 || j == 0 || j == n - 1)
				printf("%c ", ch);
			else
				printf("  ");
		}
		ch++;
		if (ch > 'Z')
			ch = 'A';
		printf("\n");
	}
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// Ve hinh vuong chu cai in Hoa rong o tren
void HinhVuongChuCaiInHoa_RongTren(int n) {
	char ch = 'A';
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == n - 1 || j == 0 || j == n - 1)
				printf("%c ", ch);
			else
				printf("  ");
		}
		ch++;
		if (ch > 'Z')
			ch = 'A';
		printf("\n");
	}
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// Ve hinh vuong chu cai in Hoa rong trai
void HinhVuongChuCaiInHoa_RongTrai(int n) {
	char ch = 'A';
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == 0 || i == n - 1 || j == n - 1)
				printf("%c ", ch);
			else
				printf("  ");
		}
		ch++;
		if (ch > 'Z')
			ch = 'A';
		printf("\n");
	}
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// Ve hinh vuong chu cai in Hoa rong phai
void HinhVuongChuCaiInHoa_RongPhai(int n) {
	char ch = 'A';
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == 0 || i == n - 1 || j == 0)
				printf("%c ", ch);
			else
				printf("  ");
		}
		ch++;
		if (ch > 'Z')
			ch = 'A';
		printf("\n");
	}
}
//-----------------------------------------------------------------
// ====================================================================================================================


// ======================================= VE HINH VUONG BANG SO ======================================================
//-----------------------------------------------------------------
// Ve hinh vuong so day
void HinhVuongSo_Day(int n) {
	int i, j;
	int num = 0;

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("%d ", num);
			num++;
			if (num > 9)
				num = 0;
		}
		printf("\n");
	}
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// Ve hinh vuong so rong
void HinhVuongSo_Rong_Ban1(int n) {
	int i, j;
	int num = 0;

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
				printf("%d ", num);
			else
				printf("  ");

			num++;
			if (num > 9)
				num = 0;
		}
		printf("\n");
	}
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// Ve hinh vuong so rong
void HinhVuongSo_Rong_Ban2(int n) {
	int i, j;
	int num = 0;

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
				printf("%d ", num);
			else
				printf("  ");
		}

		num++;
		if (num > 9)
			num = 0;

		printf("\n");
	}
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// Ve hinh vuong so rong duoi
void HinhVuongSo_RongDuoi(int n) {
	int num = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == 0 || j == 0 || j == n - 1)
				printf("%d ", num);
			else
				printf("  ");
		}
		num++;
		if (num > 9)
			num = 0;
		printf("\n");
	}
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// Ve hinh vuong so rong o tren
void HinhVuongSo_RongTren(int n) {
	int num = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == n - 1 || j == 0 || j == n - 1)
				printf("%d ", num);
			else
				printf("  ");
		}
		num++;
		if (num > 9)
			num = 0;
		printf("\n");
	}
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// Ve hinh vuong so rong trai
void HinhVuongSo_RongTrai(int n) {
	int num = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == 0 || i == n - 1 || j == n - 1)
				printf("%d ", num);
			else
				printf("  ");
		}
		num++;
		if (num > 9)
			num = 0;
		printf("\n");
	}
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// Ve hinh vuong so rong phai
void HinhVuongSo_RongPhai(int n) {
	int num = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == 0 || i == n - 1 || j == 0)
				printf("%d ", num);
			else
				printf("  ");
		}
		num++;
		if (num > 9)
			num = 0;
		printf("\n");
	}
}
//-----------------------------------------------------------------
// ====================================================================================================================



int main() {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);

	//========================
	//VE HINH VUONG BANG DAU (*)
	/*
	HinhVuongDay(n);
	HinhVuongRong(n);
	HinhVuongRongDuoi(n);
	HinhVuongRongTren(n);
	HinhVuongRongTrai(n);
	HinhVuongRongPhai(n);
	*/
	//========================

	//========================
	// VE HINH VUONG BANG CHU CAI IN THUONG
	/*
	HinhVuongChuCaiInThuong_Day(n);
	HinhVuongChuCaiInThuong_Rong_Ban1(n);
	HinhVuongChuCaiInThuong_Rong_Ban2(n);
	HinhVuongChuCaiInThuong_RongDuoi(n);
	HinhVuongChuCaiInThuong_RongTren(n);
	HinhVuongChuCaiInThuong_RongTrai(n);
	HinhVuongChuCaiInThuong_RongPhai(n);
	*/
	//========================s

	//========================
	// VE HINH VUONG BANG CHU CAI IN THUONG
	/*
	HinhVuongChuCaiInHoa_Day(n);
	HinhVuongChuCaiInHoa_Rong_Ban1(n);
	HinhVuongChuCaiInHoa_Rong_Ban2(n);
	HinhVuongChuCaiInHoa_RongDuoi(n);
	HinhVuongChuCaiInHoa_RongTren(n);
	HinhVuongChuCaiInHoa_RongTrai(n);
	HinhVuongChuCaiInHoa_RongPhai(n);
	*/
	//========================

	//========================
	// VE HINH VUONG BANG SO
	/*
	HinhVuongSo_Day(n);
	HinhVuongSo_Rong_Ban1(n);
	HinhVuongSo_Rong_Ban2(n);
	HinhVuongSo_RongDuoi(n);
	HinhVuongSo_RongTren(n);
	HinhVuongSo_RongTrai(n);
	HinhVuongSo_RongPhai(n);
	*/
	//========================

	return 0;
}
