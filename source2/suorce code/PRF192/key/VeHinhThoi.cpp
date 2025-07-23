#include <stdio.h>

// =========================== VE HINH THOI ===================================================
//-----------------------------------------------------------------

// ve 1 nua hinh thoi co hang ngang o giua = n
void drawHalfDiamond(int n) {
    int i, j;

    // In phia tren hinh thoi
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // In phia duoi hinh thoi
    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

// ve hinh thoi day
void HinhThoiDay(int n) {

	int halfSize = n / 2;

	// In phia tren hinh thoi
	for (int i = 0; i <= halfSize; i++) {
		for (int j = 0; j < halfSize - i; j++)
			printf(" ");
		for (int k = 0; k < 2 * i + 1; k++)
			printf("*");
		printf("\n");
	}

	// In phia duoi hinh thoi
	for (int i = halfSize - 1; i >= 0; i--) {
		for (int j = 0; j < halfSize - i; j++)
			printf(" ");
		for (int k = 0; k < 2 * i + 1; k++)
			printf("*");
		printf("\n");
	}
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// ve hinh thoi rong
void HinhThoiRong(int n) {
	int halfSize = n / 2;

	// In phia tren hinh thoi
	for (int i = 0; i <= halfSize; i++) {
		for (int j = 0; j < halfSize - i; j++)
			printf(" ");
		printf("*");
		if (i > 0) {
			for (int k = 0; k < 2 * i - 1; k++)
				printf(" ");
			printf("*");
		}
		printf("\n");
	}

	// In phia duoi hinh thoi
	for (int i = halfSize - 1; i >= 0; i--) {
		for (int j = 0; j < halfSize - i; j++)
			printf(" ");
		printf("*");
		if (i > 0) {
			for (int k = 0; k < 2 * i - 1; k++)
				printf(" ");
			printf("*");
		}
		printf("\n");
	}
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// ve hinh thoi day in thuong a-z ban 1
void HinhThoiDaychuInThuongaz_ban1(int n) {
	char ch = 'a';
	int halfSize = n / 2;

	// In phia tren hinh thoi
	for (int i = 0; i <= halfSize; i++) {
		for (int j = 0; j < halfSize - i; j++) {
			printf(" ");
		}
		for (int k = 0; k < 2 * i + 1; k++) {
			printf("%c", ch);
		}
		ch++;
		if (ch > 'z')
			ch = 'a';
		printf("\n");
	}

	// In phia duoi hinh thoi
	for (int i = halfSize - 1; i >= 0; i--) {
		for (int j = 0; j < halfSize - i; j++) {
			printf(" ");
		}
		for (int k = 0; k < 2 * i + 1; k++) {
			printf("%c", ch);
		}
		ch++;
		if (ch > 'z')
			ch = 'a';
		printf("\n");
	}
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// ve hinh thoi day in thuong a-z ban 2
void HinhThoiDaychuInThuongaz_ban2(int n) {
	char ch = 'a';
	int halfSize = n / 2;

	// In phia tren hinh thoi
	for (int i = 0; i <= halfSize; i++) {
		for (int j = 0; j < halfSize - i; j++) {
			printf(" ");
		}
		for (int k = 0; k < 2 * i + 1; k++) {
			printf("%c", ch);
			ch = (ch == 'z') ? 'a' : ch + 1;
		}
		printf("\n");
	}

	// In phia duoi hinh thoi
	for (int i = halfSize - 1; i >= 0; i--) {
		for (int j = 0; j < halfSize - i; j++) {
			printf(" ");
		}
		for (int k = 0; k < 2 * i + 1; k++) {
			printf("%c", ch);
			ch = (ch == 'z') ? 'a' : ch + 1;
		}
		printf("\n");
	}
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// ve hinh thoi day so 0-9 ban 1
void HinhThoiDaySo_ban1(int n) {
	int num = 0;
	int halfSize = n / 2;

	// In phia tren hinh thoi
	for (int i = 0; i <= halfSize; i++) {
		for (int j = 0; j < halfSize - i; j++) {
			printf(" ");
		}
		for (int k = 0; k < 2 * i + 1; k++) {
			printf("%d", num);
		}
		num++;
		if (num > 9)
			num = 0;
		printf("\n");
	}

	// In phia duoi hinh thoi
	for (int i = halfSize - 1; i >= 0; i--) {
		for (int j = 0; j < halfSize - i; j++) {
			printf(" ");
		}
		for (int k = 0; k < 2 * i + 1; k++) {
			printf("%d", num);
		}
		num++;
		if (num > 9)
			num = 0;
		printf("\n");
	}
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// ve hinh thoi day so 0-9 ban 2
void HinhThoiDaySo_ban2(int n) {
	int num = 0;
	int halfSize = n / 2;

	// In phia tren hinh thoi
	for (int i = 0; i <= halfSize; i++) {
		for (int j = 0; j < halfSize - i; j++) {
			printf(" ");
		}
		for (int k = 0; k < 2 * i + 1; k++) {
			printf("%d", num);
			num = (num == 9) ? 0 : num + 1;
		}
		printf("\n");
	}

	// In phia duoi hinh thoi
	for (int i = halfSize - 1; i >= 0; i--) {
		for (int j = 0; j < halfSize - i; j++) {
			printf(" ");
		}
		for (int k = 0; k < 2 * i + 1; k++) {
			printf("%d", num);
			num = (num == 9) ? 0 : num + 1;
		}
		printf("\n");
	}
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// ve hinh thoi rong chu in thuong a-z
void HinhThoiRong_ChuInThuong_az(int n) {
    int halfSize = n / 2;
    char ch = 'a';

    // In phia tren hinh thoi
    for (int i = 0; i <= halfSize; i++) {
        for (int j = 0; j < halfSize - i; j++)
            printf(" ");
        if (i == 0 || i == halfSize) {
            printf("%c", ch);
        } else {
            printf("%c", ch);
            for (int k = 0; k < 2 * i - 1; k++)
                printf(" ");
            printf("%c", ch);
        }
        ch = (ch == 'z') ? 'a' : ch + 1;
        printf("\n");
    }

    // In phia duoi hinh thoi
    for (int i = halfSize - 1; i >= 0; i--) {
        for (int j = 0; j < halfSize - i; j++)
            printf(" ");
        if (i == 0 || i == halfSize) {
            printf("%c", ch);
        } else {
            printf("%c", ch);
            for (int k = 0; k < 2 * i - 1; k++)
                printf(" ");
            printf("%c", ch);
        }
        ch = (ch == 'z') ? 'a' : ch + 1;
        printf("\n");
    }
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// ve hinh thoi rong so 0-9
void HinhThoiRongSo(int n) {
    int halfSize = n / 2;
    int num = 0;

    // In phia tren hinh thoi
    for (int i = 0; i <= halfSize; i++) {
        for (int j = 0; j < halfSize - i; j++)
            printf(" ");
        if (i == 0 || i == halfSize) {
            printf("%d", num);
        } else {
            printf("%d", num);
            for (int k = 0; k < 2 * i - 1; k++)
                printf(" ");
            printf("%d", num);
        }
        num = (num == 9) ? 0 : num + 1;
        printf("\n");
    }

    // In phia duoi hinh thoi
    for (int i = halfSize - 1; i >= 0; i--) {
        for (int j = 0; j < halfSize - i; j++)
            printf(" ");
        if (i == 0 || i == halfSize) {
            printf("%d", num);
        } else {
            printf("%d", num);
            for (int k = 0; k < 2 * i - 1; k++)
                printf(" ");
            printf("%d", num);
        }
        num = (num == 9) ? 0 : num + 1;
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
	HinhThoiDay(n);
	HinhThoiRong(n);
	HinhThoiDaychuInThuongaz_ban1(n);
	HinhThoiDaychuInThuongaz_ban2(n);
	HinhThoiDaySo_ban1(n);
	HinhThoiDaySo_ban2(n);
	HinhThoiRong_ChuInThuong_az(n);
	HinhThoiRongSo(n);
	drawHalfDiamond(n);
	*/
	//========================

	return 0;
}
