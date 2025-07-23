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
	char fileName[] = "Student.txt";
	STD arraySTD[MAX];
	int numberOfSTD = 0;
	int idCount = 0;

	// Nhap vao list hien thi danh sach sinh vien tu file
	numberOfSTD = readFile(arraySTD, fileName);
	idCount = idMAX(arraySTD, numberOfSTD);

	while (true) {
		printf("======================= STUDENT MANAGEMENT =======================\n");
		printf(" 1. Add a new student.\n");
		printf(" 2. Update a student by ID.\n");
		printf(" 3. Delete a student by ID.\n");
		printf(" 4. Search a student by Name.\n");
		printf(" 5. Search a student by ID.\n");
		printf(" 6. Sort student list by Average (GPA) Ascending.\n");
		printf(" 7. Sort student list by Average (GPA) Descending.\n");
		printf(" 8. Sort student list by Name Ascending.\n");
		printf(" 9. Sort student list by Name Descending.\n");
		printf(" 10. Show student list.\n");
		printf(" 11. Save student list to File.txt. Default is Student.txt.\n");
		printf(" 12. Save student list to Custom File .txt.\n");
		printf(" 0. Exit\n");
		printf("=================================================================\n");
		printf("Your choice: ");
		scanf("%d", &key);
		switch (key) {
			case 1:
				printf("\n Add a new student.");
				idCount++;
				printf("\nDo you want to add a new student? (Y/N): ");
				char choice;
				fflush(stdin);
				scanf("%c", &choice);

				if (choice == 'Y' || choice == 'y') {
					addSTD(arraySTD, idCount, numberOfSTD);
					printf("\nAdd a new student success!");
					numberOfSTD++;
				} else if (choice == 'N' || choice == 'n') {
					printf("\nAddition cancelled.");
				} else {
					printf("\nInvalid choice. Addition cancelled.");
				}

				pressAnyKey();
				break;
			case 2:
				if (numberOfSTD > 0) {
					int id;
					printf("\n Update student's information. ");
					printf("\n Enter ID: ");
					scanf("%d", &id);

					printf("Do you want to update student information with ID %d? (Y/N): ", id);
					char choice;
					fflush(stdin);
					scanf("%c", &choice);

					if (choice == 'Y' || choice == 'y') {
						updateSTD(arraySTD, id, numberOfSTD);
					} else if (choice == 'N' || choice == 'n') {
						printf("\nUpdate cancelled.");
					} else {
						printf("\nInvalid choice. Update cancelled.");
					}
				} else {
					printf("\nList of students is empty!");
				}

				pressAnyKey();
				break;
			case 3:
				if (numberOfSTD > 0) {
					int id;
					char choice;

					printf("\n Delete a student.");
					printf("\n Enter ID: ");
					scanf("%d", &id);

					printf("Do you want to delete student with ID %d? (Y/N): ", id);
					scanf(" %c", &choice);

					if (choice == 'Y' || choice == 'y') {
						if (removeByIdSTD(arraySTD, id, &numberOfSTD) == 1) {
							printf("");
						}
					} else if (choice == 'N' || choice == 'n') {
						printf("\nDeletion cancelled.");
					} else {
						printf("\nInvalid choice. Deletion cancelled.");
					}
				} else {
					printf("\nList of students is empty!");
				}
				pressAnyKey();
				break;
			case 4:
				if (numberOfSTD > 0) {
					printf("\n Search a student by name.");
					char strTen[30];
					printf("\nEnter student name: ");
					fflush(stdin);
					gets(strTen);
					searchByNameSTD(arraySTD, strTen, numberOfSTD);
				} else {
					printf("\nList of students is empty!");
				}
				pressAnyKey();
				break;
			case 5:
				if (numberOfSTD > 0) {
					int id;
					printf("\n Search a student by ID.");
					printf("\nEnter student ID: ");
					scanf("%d", &id);
					searchByIdSTD(arraySTD, id, numberOfSTD);
				} else {
					printf("\nList of students is empty!");
				}
				pressAnyKey();
				break;
			case 6:
				if (numberOfSTD > 0) {
					printf("\n Sort student list by average (GPA) ascending.");
					sortByAverageAscendingSTD(arraySTD, numberOfSTD);
					showSTD(arraySTD, numberOfSTD);
				} else {
					printf("\nList of students is empty!");
				}
				pressAnyKey();
				break;
			case 7:
				if (numberOfSTD > 0) {
					printf("\n Sort student list by average (GPA) descending.");
					sortByAverageDescendingSTD(arraySTD, numberOfSTD);
					showSTD(arraySTD, numberOfSTD);
				} else {
					printf("\nList of students is empty!");
				}
				pressAnyKey();
				break;
			case 8:
				if (numberOfSTD > 0) {
					printf("\n Sort student list by name ascending.");
					sortByNameAscendingSTD(arraySTD, numberOfSTD);
					showSTD(arraySTD, numberOfSTD);
				} else {
					printf("\nList of students is empty!");
				}
				pressAnyKey();
				break;
			case 9:
				if (numberOfSTD > 0) {
					printf("\n Sort student list by name descending.");
					sortByNameDescendingSTD(arraySTD, numberOfSTD);
					showSTD(arraySTD, numberOfSTD);
				} else {
					printf("\nList of students is empty!");
				}
				pressAnyKey();
				break;
			case 10:
				if (numberOfSTD > 0) {
					printf("\n Show list student.");
					// Sort Student's List by Student ID tang dan truoc khi hien thi
					sortByIdAscendingSTD(arraySTD, numberOfSTD);
					showSTD(arraySTD, numberOfSTD);
				} else {
					printf("\nList of students is empty!");
				}
				pressAnyKey();
				break;
			case 11:
				if (numberOfSTD > 0) {
					printf("\n Save student's list to file .txt.");
					// Sort Student's List by Student ID tang dan truoc khi save to file Student.txt
					sortByIdAscendingSTD(arraySTD, numberOfSTD);
					writeFile(arraySTD, numberOfSTD, fileName);
					printf("\nSave student's list to file %s success!", fileName);
				} else {
					printf("\nList of students is empty!");
				}
				pressAnyKey();
				break;
			case 12:
				if (numberOfSTD > 0) {
					char customFileName[100];
					printf("\n Save student list to a custom file.");
					printf("\nEnter the file name (including '.txt' extension): ");
					scanf("%s", customFileName);
					// Sort Student's List by Student ID tang dan truoc khi save to custom file - vi du dat ten cho file la StuManagement.txt
					sortByIdAscendingSTD(arraySTD, numberOfSTD);
					writeFile(arraySTD, numberOfSTD, customFileName);
					printf("\nStudent's list saved to %s successfully!", customFileName);
				} else {
					printf("\nList of students is empty!");
				}
				pressAnyKey();
				break;
			case 0:
				printf("\nYou have exited the program.!");
				getchar();
				return 0;
			default:
				printf("\nThis function is not available.!");
				printf("\nPlease try again.");
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
	if (std->average >= 8) strcpy(std->rank, "A");
	else if (std->average >= 6.5) strcpy(std->rank, "B");
	else if (std->average >= 5) strcpy(std->rank, "C");
	else strcpy(std->rank, "F");
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
		printf("\n Enter name: ");
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
			printf(" Invalid characters in the name. Please enter only alphabetic characters.\n");
		}
	}

	// Gender
	int validGender = 0;
	while (!validGender) {
		printf(" Enter gender (Male/Female): ");
		fflush(stdin);
		gets(std->gender);

		if (strcmp(std->gender, "male") == 0 || strcmp(std->gender, "Male") == 0 || strcmp(std->gender, "MALE") == 0 ||
		        strcmp(std->gender, "female") == 0 || strcmp(std->gender, "Female") == 0 || strcmp(std->gender, "FEMALE") == 0) {
			validGender = 1;
		} else {
			printf(" Invalid gender! Please enter 'Male' or 'Female'.\n");
		}
	}

	// Age
	while (true) {
		printf(" Enter age (must be equals or more than 18): ");
		scanf("%d", &(std->age));

		if (std->age >= 18 && std->age <= 100) {
			break;
		} else {
			printf(" Invalid age! Age must be equals or more than 18.\n");
		}
	}

	// Validate email format - Email hop le @gmail.com
	while (true) {
		printf(" Enter email: ");
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
			printf(" Invalid email format! Please enter an email ending with '@gmail.com'.\n");
		}
	}

	// City
	int validAddress = 0;
	while (!validAddress) {
		printf(" Enter city: ");
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
			printf(" Invalid characters in the city. Please enter only alphabetic characters.\n");
		}
	}


	// Math Scores - 0<= math scores <=10
	while (true) {
		printf(" Enter Math scores (0 to 10): ");
		scanf("%f", &(std->math));

		if (std->math >= 0 && std->math <= 10) {
			break;
		} else {
			printf(" Invalid Math score! Please enter a score between 0 and 10.\n");
		}
	}

	// Physics Scores - 0<= math scores <=10
	while (true) {
		printf(" Enter Physics scores (0 to 10): ");
		scanf("%f", &(std->physics));

		if (std->physics >= 0 && std->physics <= 10) {
			break;
		} else {
			printf(" Invalid Physics score! Please enter a score between 0 and 10.\n");
		}
	}

	// Chemistry Scores - 0<= math scores <=10
	while (true) {
		printf(" Enter Chemistry scores (0 to 10): ");
		scanf("%f", &(std->chemistry));

		if (std->chemistry >= 0 && std->chemistry <= 10) {
			break;
		} else {
			printf(" Invalid Chemistry score! Please enter a score between 0 and 10.\n");
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
	printf("\n Student ID: %d", n + 1);
	inputInformationSTD(&a[n], id);
	printLine(40);
}

// Update Student's Information
// Nhap thong tin moi cua student cho viec update
void updateInformationSTD(STD *std) {
	// Name
	int validName = 0;
	while (!validName) {
		printf("\n Enter name: ");
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
			printf(" Invalid characters in the name. Please enter only alphabetic characters.\n");
		}
	}

	// Gender
	int validGender = 0;
	while (!validGender) {
		printf(" Enter gender (Male/Female): ");
		fflush(stdin);
		gets(std->gender);

		if (strcmp(std->gender, "male") == 0 || strcmp(std->gender, "Male") == 0 || strcmp(std->gender, "MALE") == 0 ||
		        strcmp(std->gender, "female") == 0 || strcmp(std->gender, "Female") == 0 || strcmp(std->gender, "FEMALE") == 0) {
			validGender = 1;
		} else {
			printf(" Invalid gender! Please enter 'Male' or 'Female'.\n");
		}
	}

	// Age
	while (true) {
		printf(" Enter age (must be equals or more than 18): ");
		scanf("%d", &(std->age));

		if (std->age >= 18 && std->age <= 100) {
			break;
		} else {
			printf(" Invalid age! Age must be equals or more than 18.\n");
		}
	}

	// Validate email format - Email hop le @gmail.com
	while (true) {
		printf(" Enter email: ");
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
			printf(" Invalid email format! Please enter an email ending with '@gmail.com'.\n");
		}
	}

	// City
	int validAddress = 0;
	while (!validAddress) {
		printf(" Enter city: ");
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
			printf(" Invalid characters in the city. Please enter only alphabetic characters.\n");
		}
	}

	// Math Scores - 0<= math scores <=10
	while (true) {
		printf(" Enter Math scores (0 to 10): ");
		scanf("%f", &(std->math));

		if (std->math >= 0 && std->math <= 10) {
			break;
		} else {
			printf(" Invalid Math score! Please enter a score between 0 and 10.\n");
		}
	}

	// Physics Scores - 0<= math scores <=10
	while (true) {
		printf(" Enter Physics scores (0 to 10): ");
		scanf("%f", &(std->physics));

		if (std->physics >= 0 && std->physics <= 10) {
			break;
		} else {
			printf(" Invalid Physics score! Please enter a score between 0 and 10.\n");
		}
	}

	// Chemistry Scores - 0<= math scores <=10
	while (true) {
		printf(" Enter Chemistry scores (0 to 10): ");
		scanf("%f", &(std->chemistry));

		if (std->chemistry >= 0 && std->chemistry <= 10) {
			break;
		} else {
			printf(" Invalid Chemistry score! Please enter a score between 0 and 10.\n");
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
			printf("\n Update student information have ID = %d", id);
			updateInformationSTD(&a[i]);
			printLine(40);
			break;
		}
	}
	if (found == 0) {
		printf("\n Student have ID = %d does not exist.", id);
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
			printf("\n Deleted student have ID = %d", id);
			printLine(40);
			(*n)--;
			break;
		}
	}
	if (found == 0) {
		printf("\n Student have ID = %d does not exist.", id);
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
		printf("Student does not exits.");
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
		printf("Student does not exits.");
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
	printLine(130);
	printf("%-6s%-20s%-7s%-5s%-20s%-20s%-10s%-10s%-10s%-10s%-10s\n", "ID", "FullName", "Gender", "Age", "Email", "City", "Math", "Physics", "Chemistry", "Average", "Rank");

	for (int i = 0; i < n; i++) {
		printf("%-6d%-20s%-7s%-5d%-20s%-20s%-10.2f%-10.2f%-10.2f%-10.2f%-10s\n",
		       a[i].id, a[i].name, a[i].gender, a[i].age, a[i].email, a[i].city,
		       a[i].math, a[i].physics, a[i].chemistry, a[i].average, a[i].rank);
	}

	printLine(130);
}

// Read From File .txt
int readFile(STD a[], char fileName[]) {
	FILE *fp;
	int i = 0;
	fp = fopen(fileName, "r");
	if (fp == NULL) {
		printf("Could not open file for reading.\n");
		return 0;
	}

	printf("Reading file: %s\n", fileName);
	while (fscanf(fp, "%6d %20[^0-9\n] %4s %d %20[^0-9\n] %20[^0-9\n] %f %f %f %f %9s", &a[i].id, a[i].name, a[i].gender,
	              &a[i].age, a[i].email, a[i].city, &a[i].math, &a[i].physics, &a[i].chemistry, &a[i].average, a[i].rank) == 11) {
		i++;
	}
	fclose(fp);
	printf("Read %d student records.\n", i);
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
	printf("\nPress any key to continue...");
	getchar();
	getchar();
	system("cls");
}
