#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 100

struct Student {
	int id;
	char name[50];
	char gender[10];
	int age;
	char email[50];
	char city[50];
	float math, physics, chemistry;
	float average;
	char rank[10];
};

typedef struct Student STD;

void calculateAverage(STD *std);
void rank(STD *std);
void inputInformationSTD(STD *std, int id);
void addSTD(STD a[], int id, int n);
void updateInformationSTD(STD *std);
void updateSTD(STD a[], int id, int n);
int  removeByIdSTD(STD a[], int id, int *n);
void searchByNameSTD(STD a[], char name[], int n);
void searchByIdSTD(STD a[], int id, int n);
int  idMAX(STD a[], int n);
void sortByAverageAscendingSTD(STD a[], int n);
void sortByAverageDescendingSTD(STD a[], int n);
void sortByNameAscendingSTD(STD a[], int n);
void sortByNameDescendingSTD(STD a[], int n);
void sortByIdAscendingSTD(STD a[], int n);
void showSTD(STD a[], int n);
int  readFile(STD a[], char fileName[]);
void writeFile(STD a[], int n, char fileName[]);
void printLine(int n);
void pressAnyKey();

int main() {
	int key;
	char fileName[] = "Sinhvien.txt";
	STD arraySTD[MAX];
	int numberOfSTD = 0;
	int idCount = 0;

	// Nhap vao list hien thi danh sach sinh vien tu file
	numberOfSTD = readFile(arraySTD, fileName);
	idCount = idMAX(arraySTD, numberOfSTD);

	while (true) {
		printf("======================= QUAN LY SINH VIEN =======================\n");
		printf(" 1. Them sinh vien moi.\n");
		printf(" 2. Cap nhat thong tin sinh vien theo ID.\n");
		printf(" 3. Xoa sinh vien theo ID.\n");
		printf(" 4. Tim kiem sinh vien theo Ten.\n");
		printf(" 5. Tim kiem sinh vien theo ID.\n");
		printf(" 6. Sap xep danh sach sinh vien theo Diem trung binh (GPA) tang dan.\n");
		printf(" 7. Sap xep danh sach sinh vien theo Diem trung binh (GPA) giam dan.\n");
		printf(" 8. Sap xep danh sach sinh vien theo Ten tang dan.\n");
		printf(" 9. Sap xep danh sach sinh vien theo Ten giam dan.\n");
		printf(" 10. Hien thi danh sach sinh vien.\n");
		printf(" 11. Luu danh sach sinh vien vao File.txt. Mac dinh la Sinhvien.txt.\n");
		printf(" 12. Luu danh sach sinh vien vao File .txt tu chon.\n");
		printf(" 0. Thoat\n");
		printf("=================================================================\n");
		printf("Lua chon cua ban: ");
		scanf("%d", &key);
		switch (key) {
			case 1:
				printf("\n Them sinh vien moi.");
				idCount++;
				printf("\nBan co muon them sinh vien moi? (C/K): ");
				char choice;
				fflush(stdin);
				scanf("%c", &choice);

				if (choice == 'C' || choice == 'c') {
					addSTD(arraySTD, idCount, numberOfSTD);
					printf("\nThem sinh vien moi thanh cong!");
					numberOfSTD++;
				} else if (choice == 'K' || choice == 'k') {
					printf("\nThem moi da bi huy.");
				} else {
					printf("\nLua chon khong hop le. Them moi da bi huy.");
				}

				pressAnyKey();
				break;
			case 2:
				if (numberOfSTD > 0) {
					int id;
					printf("\n Cap nhat thong tin sinh vien. ");
					printf("\n Nhap ID: ");
					scanf("%d", &id);

					printf("Ban co muon cap nhat thong tin sinh vien voi ID %d? (C/K): ", id);
					char choice;
					fflush(stdin);
					scanf("%c", &choice);

					if (choice == 'C' || choice == 'c') {
						updateSTD(arraySTD, id, numberOfSTD);
					} else if (choice == 'K' || choice == 'k') {
						printf("\nCap nhat da bi huy.");
					} else {
						printf("\nLua chon khong hop le. Cap nhat da bi huy.");
					}
				} else {
					printf("\nDanh sach sinh vien trong!");
				}

				pressAnyKey();
				break;
			case 3:
				if (numberOfSTD > 0) {
					int id;
					char choice;

					printf("\n Xoa sinh vien.");
					printf("\n Nhap ID: ");
					scanf("%d", &id);

					printf("Ban co muon xoa sinh vien voi ID %d? (C/K): ", id);
					scanf(" %c", &choice);

					if (choice == 'C' || choice == 'K') {
						if (removeByIdSTD(arraySTD, id, &numberOfSTD) == 1) {
							printf("");
						}
					} else if (choice == 'K' || choice == 'k') {
						printf("\Xoa da bi huy.");
					} else {
						printf("\nLua chon khong hop le. Xoa da bi huy.");
					}
				} else {
					printf("\nDanh sach sinh vien trong!");
				}
				pressAnyKey();
				break;
			case 4:
				if (numberOfSTD > 0) {
					printf("\n Tim kiem sinh vien theo ten.");
					char strTen[30];
					printf("\nNhap ten: ");
					fflush(stdin);
					gets(strTen);
					searchByNameSTD(arraySTD, strTen, numberOfSTD);
				} else {
					printf("\nDanh sach sinh vien trong!");
				}
				pressAnyKey();
				break;
			case 5:
				if (numberOfSTD > 0) {
					int id;
					printf("\n Tim kiem sinh vien theo ID.");
					printf("\nNhap ID: ");
					scanf("%d", &id);
					searchByIdSTD(arraySTD, id, numberOfSTD);
				} else {
					printf("\nDanh sach sinh vien trong!");
				}
				pressAnyKey();
				break;
			case 6:
				if (numberOfSTD > 0) {
					printf("\n Sap xep danh sach sinh vien theo Diem trung binh (GPA) tang dan.");
					sortByAverageAscendingSTD(arraySTD, numberOfSTD);
					showSTD(arraySTD, numberOfSTD);
				} else {
					printf("\nDanh sach sinh vien trong!");
				}
				pressAnyKey();
				break;
			case 7:
				if (numberOfSTD > 0) {
					printf("\n Sap xep danh sach sinh vien theo Diem trung binh (GPA) giam dan.");
					sortByAverageDescendingSTD(arraySTD, numberOfSTD);
					showSTD(arraySTD, numberOfSTD);
				} else {
					printf("\nDanh sach sinh vien trong!");
				}
				pressAnyKey();
				break;
			case 8:
				if (numberOfSTD > 0) {
					printf("\n Sap xep danh sach sinh vien theo Ten tang dan.");
					sortByNameAscendingSTD(arraySTD, numberOfSTD);
					showSTD(arraySTD, numberOfSTD);
				} else {
					printf("\nDanh sach sinh vien trong!");
				}
				pressAnyKey();
				break;
			case 9:
				if (numberOfSTD > 0) {
					printf("\n Sap xep danh sach sinh vien theo Ten giam dan.");
					sortByNameDescendingSTD(arraySTD, numberOfSTD);
					showSTD(arraySTD, numberOfSTD);
				} else {
					printf("\nDanh sach sinh vien trong!");
				}
				pressAnyKey();
				break;
			case 10:
				if (numberOfSTD > 0) {
					printf("\n Hien thi danh sach sinh vien.");
					// Sort Student's List by Student ID tang dan truoc khi hien thi
					sortByIdAscendingSTD(arraySTD, numberOfSTD);
					showSTD(arraySTD, numberOfSTD);
				} else {
					printf("\nDanh sach sinh vien trong!");
				}
				pressAnyKey();
				break;
			case 11:
				if (numberOfSTD > 0) {
					printf("\n Luu danh sach sinh vien vao file Sinvien.txt");
					// Sort Student's List by Student ID tang dan truoc khi save to file Student.txt
					sortByIdAscendingSTD(arraySTD, numberOfSTD);
					writeFile(arraySTD, numberOfSTD, fileName);
					printf("\nLuu danh sach sinh vien vao file %s thanh cong!", fileName);
				} else {
					printf("\nDanh sach sinh vien trong!");
				}
				pressAnyKey();
				break;
			case 12:
				if (numberOfSTD > 0) {
					char customFileName[100];
					printf("\n Luu danh sach sinh vien vao File .txt tu chon.");
					printf("\nNhap ten file (bao gom ca ten file co duoi '.txt'): ");
					scanf("%s", customFileName);
					// Sort Student's List by Student ID tang dan truoc khi save to custom file - vi du dat ten cho file la StuManagement.txt
					sortByIdAscendingSTD(arraySTD, numberOfSTD);
					writeFile(arraySTD, numberOfSTD, customFileName);
					printf("\nLuu danh sach sinh vien vao file %s thanh cong!", customFileName);
				} else {
					printf("\nDanh sach sinh vien trong!");
				}
				pressAnyKey();
				break;
			case 0:
				printf("\nBan da lua chon thoat khoi chuong trinh.!");
				getchar();
				return 0;
			default:
				printf("\nChuc nang khong hop le.!");
				printf("\nVui long chon lai.");
				pressAnyKey();
				break;
		}
	}
}

// Cakculate Average (GPA)
void calculateAverage(STD *std) {
	std->average = (std->math + std->physics + std->chemistry) / 3;
}

// Rank
void rank(STD *std) {
	if (std->average >= 8) strcpy(std->rank, "Gioi");
	else if (std->average >= 6.5) strcpy(std->rank, "Kha");
	else if (std->average >= 5) strcpy(std->rank, "Trung binh");
	else strcpy(std->rank, "Yeu");
}

// Check Alphabet - kiem tra ky tu hop le - chu cai va khoang trang
// Dung cho check name va city
int isAlphabetic(char ch) {
	return isalpha(ch) || ch == ' ';
}

// Input Student's Information
void inputInformationSTD(STD *std, int id) {
	// Name
	int validName = 0;
	while (!validName) {
		printf("\n Nhap ten: ");
		fflush(stdin);
		gets(std->name);

		int len = strlen(std->name);
		int isValid = 1;

		for (int i = 0; i < len; i++) {
			if (!isAlphabetic(std->name[i])) {
				isValid = 0;
				break;
			}
		}

		if (isValid) {
			validName = 1;
		} else {
			printf(" Ky tu khong hop le trong ten. Vui long chi nhap cac ky tu chu cai.\n");
		}
	}

	// Gender
	int validGender = 0;
	while (!validGender) {
		printf(" Nhap gioi tinh (Nam/Nu): ");
		fflush(stdin);
		gets(std->gender);

		if (strcmp(std->gender, "nam") == 0 || strcmp(std->gender, "Nam") == 0 || strcmp(std->gender, "NAM") == 0 ||
		        strcmp(std->gender, "nu") == 0 || strcmp(std->gender, "Nu") == 0 || strcmp(std->gender, "NU") == 0) {
			validGender = 1;
		} else {
			printf(" Gioi tinh khong hop le! Vui long chi chon 'Nam' hoac 'Nu'.\n");
		}
	}

	// Age
	while (true) {
		printf(" Nhap tuoi (phai bang hoac lon hon 18): ");
		scanf("%d", &(std->age));

		if (std->age >= 18 && std->age <= 100) {
			break;
		} else {
			printf(" Tuoi khong hop le! Tuoi phai bang hoac lon hon 18.\n");
		}
	}

	// Validate email format - Email hop le @gmail.com
	while (true) {
		printf(" Nhap email: ");
		fflush(stdin);
		gets(std->email);

		// Check if the email ends with "@gmail.com"
		int len = strlen(std->email);
		const char *gmailSuffix = "@gmail.com";
		int gmailSuffixLength = strlen(gmailSuffix);

		if (len >= gmailSuffixLength &&
		        strcmp(std->email + len - gmailSuffixLength, gmailSuffix) == 0) {
			break;
		} else {
			printf(" Email khong hop le! Vui long nhap email co dinh dang la '@gmail.com'.\n");
		}
	}

	// City
	int validAddress = 0;
	while (!validAddress) {
		printf(" Nhap thanh pho: ");
		fflush(stdin);
		gets(std->city);

		int len = strlen(std->city);
		int isValid = 1;

		for (int i = 0; i < len; i++) {
			if (!isAlphabetic(std->city[i])) {
				isValid = 0;
				break;
			}
		}

		if (isValid) {
			validAddress = 1;
		} else {
			printf(" Ky tu khong hop le trong thanh pho. Vui long chi nhap cac ky tu chu cai.\n");
		}
	}


	// Math Scores - 0<= math scores <=10
	while (true) {
		printf(" Nhap diem Toan (0 to 10): ");
		scanf("%f", &(std->math));

		if (std->math >= 0 && std->math <= 10) {
			break;
		} else {
			printf(" Diem Toan khong hop le! Vui long nhap diem trong khoang tu 0 den 10.\n");
		}
	}

	// Physics Scores - 0<= math scores <=10
	while (true) {
		printf(" Nhap diem Ly (0 to 10): ");
		scanf("%f", &(std->physics));

		if (std->physics >= 0 && std->physics <= 10) {
			break;
		} else {
			printf(" Diem Ly khong hop le! Vui long nhap diem trong khoang tu 0 den 10.\n");
		}
	}

	// Chemistry Scores - 0<= math scores <=10
	while (true) {
		printf(" Nhap diem Hoa (0 to 10): ");
		scanf("%f", &(std->chemistry));

		if (std->chemistry >= 0 && std->chemistry <= 10) {
			break;
		} else {
			printf(" Diem Hoa khong hop le! Vui long nhap diem trong khoang tu 0 den 10.\n");
		}
	}

	// Lay theo ID cua Student
	std->id = id;
	calculateAverage(std);
	rank(std);
}

// Add new Student
// Thuc hien add a student sau khi nhap thong tin tu inputInformationSTD
void addSTD(STD a[], int id, int n) {
	printLine(40);
	printf("\n Sinh vien co ID: %d", n + 1);
	inputInformationSTD(&a[n], id);
	printLine(40);
}

// Update Student's Information
// Nhap thong tin moi cua student cho viec update
void updateInformationSTD(STD *std) {
	// Name
	int validName = 0;
	while (!validName) {
		printf("\n Nhap ten: ");
		fflush(stdin);
		gets(std->name);

		int len = strlen(std->name);
		int isValid = 1;

		for (int i = 0; i < len; i++) {
			if (!isAlphabetic(std->name[i])) {
				isValid = 0;
				break;
			}
		}

		if (isValid) {
			validName = 1;
		} else {
			printf(" Ky tu khong hop le trong ten. Vui long chi nhap cac ky tu chu cai.\n");
		}
	}

	// Gender
	int validGender = 0;
	while (!validGender) {
		printf(" Nhap gioi tinh (Nam/Nu): ");
		fflush(stdin);
		gets(std->gender);

		if (strcmp(std->gender, "nam") == 0 || strcmp(std->gender, "Nam") == 0 || strcmp(std->gender, "NAM") == 0 ||
		        strcmp(std->gender, "nu") == 0 || strcmp(std->gender, "Nu") == 0 || strcmp(std->gender, "NU") == 0) {
			validGender = 1;
		} else {
			printf(" Gioi tinh khong hop le! Vui long chi chon 'Nam' hoac 'Nu'.\n");
		}
	}

	// Age
	while (true) {
		printf(" Nhap tuoi (phai bang hoac lon hon 18): ");
		scanf("%d", &(std->age));

		if (std->age >= 18 && std->age <= 100) {
			break;
		} else {
			printf(" Tuoi khong hop le! Tuoi phai bang hoac lon hon 18.\n");
		}
	}

	// Validate email format - Email hop le @gmail.com
	while (true) {
		printf(" Nhap email: ");
		fflush(stdin);
		gets(std->email);

		// Check if the email ends with "@gmail.com"
		int len = strlen(std->email);
		const char *gmailSuffix = "@gmail.com";
		int gmailSuffixLength = strlen(gmailSuffix);

		if (len >= gmailSuffixLength &&
		        strcmp(std->email + len - gmailSuffixLength, gmailSuffix) == 0) {
			break;
		} else {
			printf(" Email khong hop le! Vui long nhap email co dinh dang la '@gmail.com'.\n");
		}
	}

	// City
	int validAddress = 0;
	while (!validAddress) {
		printf(" Nhap thanh pho: ");
		fflush(stdin);
		gets(std->city);

		int len = strlen(std->city);
		int isValid = 1;

		for (int i = 0; i < len; i++) {
			if (!isAlphabetic(std->city[i])) {
				isValid = 0;
				break;
			}
		}

		if (isValid) {
			validAddress = 1;
		} else {
			printf(" Ky tu khong hop le trong thanh pho. Vui long chi nhap cac ky tu chu cai.\n");
		}
	}

	// Math Scores - 0<= math scores <=10
	while (true) {
		printf(" Nhap diem Toan (0 to 10): ");
		scanf("%f", &(std->math));

		if (std->math >= 0 && std->math <= 10) {
			break;
		} else {
			printf(" Diem Toan khong hop le! Vui long nhap diem trong khoang tu 0 den 10.\n");
		}
	}

	// Physics Scores - 0<= math scores <=10
	while (true) {
		printf(" Nhap diem Ly (0 to 10): ");
		scanf("%f", &(std->physics));

		if (std->physics >= 0 && std->physics <= 10) {
			break;
		} else {
			printf(" Diem Ly khong hop le! Vui long nhap diem trong khoang tu 0 den 10.\n");
		}
	}

	// Chemistry Scores - 0<= math scores <=10
	while (true) {
		printf(" Nhap diem Hoa (0 to 10): ");
		scanf("%f", &(std->chemistry));

		if (std->chemistry >= 0 && std->chemistry <= 10) {
			break;
		} else {
			printf(" Diem Hoa khong hop le! Vui long nhap diem trong khoang tu 0 den 10.\n");
		}
	}
	calculateAverage(std);
	rank(std);
}

// Update Student
// Thuc hien update student sau khi nhap thong tin moi tu updateInformationSTD
void updateSTD(STD a[], int id, int n) {
	int found = 0;
	for (int i = 0; i < n; i++) {
		if (a[i].id == id) {
			found = 1;
			printLine(40);
			printf("\n Cap nhat thong tin sinh vien co ID = %d", id);
			updateInformationSTD(&a[i]);
			printLine(40);
			break;
		}
	}
	if (found == 0) {
		printf("\n Sinh vien co ID = %d khong ton tai.", id);
	}
}

// Remove Student by Student ID
int removeByIdSTD(STD a[], int id, int *n) {
	int found = 0;
	for (int i = 0; i < *n; i++) {
		if (a[i].id == id) {
			found = 1;
			printLine(40);
			for (int j = i; j < *n; j++) {
				a[j] = a[j + 1];
			}
			printf("\n Xoa sinh vien co ID = %d", id);
			printLine(40);
			(*n)--;
			break;
		}
	}
	if (found == 0) {
		printf("\n Sinh vien co ID = %d khong ton tai.", id);
		return 0;
	} else {
		return 1;
	}
}

// Search a Student by Student's Name
void searchByNameSTD(STD a[], char name[], int n) {
	STD arrayFound[MAX];
	char nameSTD[30];
	int found = 0;
	for (int i = 0; i < n; i++) {
		strcpy(nameSTD, a[i].name);
		if (strstr(strupr(nameSTD), strupr(name))) {
			arrayFound[found] = a[i];
			found++;
		}
	}

	if(found==0) {
		printf("Khong co sinh vien.");
	} else {
		showSTD(arrayFound, found);
	}
}

// Search a Student by Student's ID
void searchByIdSTD(STD a[], int id, int n) {
	STD arrayFound[MAX];
	int found = 0;
	for (int i = 0; i < n; i++) {
		if (a[i].id == id) {
			arrayFound[found] = a[i];
			found++;
		}
	}

	if(found==0) {
		printf("Khong co sinh vien.");
	} else {
		showSTD(arrayFound, found);
	}
}

// Sort Student's List by Student's Average (GPA) Ascending - tang dan
void sortByAverageAscendingSTD(STD a[], int n) {
	STD tmp;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i].average > a[j].average) {
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}

// Sort Student's List by Student's Average (GPA) Descending - giam dan
void sortByAverageDescendingSTD(STD a[], int n) {
	STD tmp;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i].average < a[j].average) {
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}

// Sort Student's List by Student's Name Ascending - tang dan
void sortByNameAscendingSTD(STD a[], int n) {
	STD tmp;
	char nameSTD1[30];
	char nameSTD2[30];
	for (int i = 0; i < n; i++) {
		strcpy(nameSTD1, a[i].name);
		for (int j = i + 1; j < n; j++) {
			strcpy(nameSTD2, a[j].name);
			if (strcmp(strupr(nameSTD1), strupr(nameSTD2)) > 0) {
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}

// Sort Student's List by Student's Name Descending - giam dan
void sortByNameDescendingSTD(STD a[], int n) {
	STD tmp;
	char nameSTD1[30];
	char nameSTD2[30];
	for (int i = 0; i < n; i++) {
		strcpy(nameSTD1, a[i].name);
		for (int j = i + 1; j < n; j++) {
			strcpy(nameSTD2, a[j].name);
			if (strcmp(strupr(nameSTD1), strupr(nameSTD2)) < 0) {
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}

// Sort Student's List by Student's ID Ascending - tang dan
void sortByIdAscendingSTD(STD a[], int n) {
	STD tmp;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i].id > a[j].id) {
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}

// Find ID MAX
// Duyet qua mang cac student de tim ra ID lon nhat.
/*
Khi chuong trinh bat dau hoac sau khi doc thong tin sinh vien tu file, ham nay duoc goi de tim ra ID lon nhat trong mang du lieu hien tai.
Cho viec tu tao mot ID moi cho mot sinh vien moi ma khong gay trung lap voi các ID da co.
*/
int idMAX(STD a[], int n) {
	int idMax = 0;
	if (n > 0) {
		idMax = a[0].id;
		for (int i = 0; i < n; i++) {
			if (a[i].id > idMax) {
				idMax = a[i].id;
			}
		}
	}
	return idMax;
}

// Show Student's information
// Hien thi bang thong tin cua cac Student
void showSTD(STD a[], int n) {
	printLine(140);
	printf("%-6s%-20s%-14s%-8s%-20s%-20s%-10s%-10s%-10s%-14s%-10s\n", "ID", "HoTen", "GioiTinh", "Tuoi", "Email", "ThanhPho", "Toan", "Ly", "Hoa", "TrungBinh", "Xep loai");

	for (int i = 0; i < n; i++) {
		printf("%-6d%-20s%-14s%-8d%-20s%-20s%-10.2f%-10.2f%-10.2f%-14.2f%-10s\n",
		       a[i].id, a[i].name, a[i].gender, a[i].age, a[i].email, a[i].city,
		       a[i].math, a[i].physics, a[i].chemistry, a[i].average, a[i].rank);
	}

	printLine(140);
}

// Read From File .txt
int readFile(STD a[], char fileName[]) {
	FILE *fp;
	int i = 0;
	fp = fopen(fileName, "r");
	if (fp == NULL) {
		printf("Khong the mo file cho viec doc.\n");
		return 0;
	}

	printf("Doc file: %s\n", fileName);
	while (fscanf(fp, "%6d %20[^0-9\n] %4s %d %20[^0-9\n] %20[^0-9\n] %f %f %f %f %9s", &a[i].id, a[i].name, a[i].gender,
	              &a[i].age, a[i].email, a[i].city, &a[i].math, &a[i].physics, &a[i].chemistry, &a[i].average, a[i].rank) == 11) {
		i++;
	}
	fclose(fp);
	printf("Doc %d ban ghi cua sinh vien.\n", i);
	return i;
}

// Write To File .txt
void writeFile(STD a[], int n, char fileName[]) {
	FILE *fp;
	fp = fopen(fileName, "w");
	for (int i = 0; i < n; i++) {
		fprintf(fp, "%6d %-20s %-4s %d %-20s %-20s %.2f %.2f %.2f %.2f %s\n", a[i].id, a[i].name, a[i].gender,
		        a[i].age, a[i].email, a[i].city, a[i].math, a[i].physics, a[i].chemistry, a[i].average, a[i].rank);
	}
	fclose(fp);
}

// Print Line - in dong
void printLine(int n) {
	printf("\n");
	for (int i = 0; i < n; i++) {
		printf("_");
	}
	printf("\n");
}

// Press Any Key
void pressAnyKey() {
	printf("\nNhan phim bat ky de tiep tuc...");
	getchar();
	getchar();
	system("cls");
}
