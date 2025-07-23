#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

/*
2
8
10
16
*/

/*
Test
1111111111
2-8: 1777 - correct
2-10: 1023 - correct
2-16: 3FF - correct

1777
8-2: 1111111111 - correct
8-10: 1023 - correct
8-16: 3FF - correct

1023
10-2: - correct
10-8: - correct
10-16: - correct

3FF
16-2: - correct
16-8: - correct
16-10: - correct
*/

// ========= BINARY - 2 ==========

//-----------------------------------------------------------------
/*
// binary -> octal = 2->8
int binaryToOctalGroup(char binaryGroup[3]) {
    int decimal = 0;
    for (int i = 0; i < 3; i++) {
        decimal = decimal * 2 + (binaryGroup[i] - '0');
    }

    return decimal;
}

int main() {
    char binary[100];
    printf("Nhap so nhi phan: ");
    scanf("%s", binary);

    int length = strlen(binary);
    int remainder = length % 3;
    
    char paddedBinary[100];
    strcpy(paddedBinary, "");
    for (int i = 0; i < 3 - remainder; i++) {
        strcat(paddedBinary, "0");
    }
    strcat(paddedBinary, binary);

    printf("So nhi phan da duoc bo sung: %s\n", paddedBinary);

    printf("So da chuyen doi sang he co so 8: ");
    for (int i = 0; i < length; i += 3) {
        char binaryGroup[3];
        strncpy(binaryGroup, paddedBinary + i, 3);
        binaryGroup[3] = '\0';

        int octalDigit = binaryToOctalGroup(binaryGroup);
        printf("%d", octalDigit);
    }
    printf("\n");

    return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
// binary -> decimal = 2->10
int binaryToDecimal(char binary[]) {
    int length = strlen(binary);
    int decimal = 0;
    int base = 1; // 2^0 = 1

    for (int i = length - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += base;
        }
        base *= 2;
    }

    return decimal;
}

int main() {
    char binary[100];

    printf("Nhap so nhi phan: ");
    scanf("%s", binary);

    int decimal = binaryToDecimal(binary);

    printf("So da chuyen doi sang he co so 10: %d\n", decimal);

    return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
// binary -> hexa = 2->16
char decimalToHexadecimal(int num) {
    if (num >= 0 && num <= 9) {
        return (char)(num + '0');
    } else {
        return (char)(num - 10 + 'A');
    }
}

char binaryToHexadecimalGroup(char binaryGroup[4]) {
    int decimal = 0;
    for (int i = 0; i < 4; i++) {
        decimal = decimal * 2 + (binaryGroup[i] - '0');
    }
    return decimalToHexadecimal(decimal);
}

int main() {
    char binary[100];
    printf("Nhap so nhi phan: ");
    scanf("%s", binary);

    int length = strlen(binary);
    int remainder = length % 4;

    char paddedBinary[100];
    strcpy(paddedBinary, "");
    for (int i = 0; i < 4 - remainder; i++) {
        strcat(paddedBinary, "0");
    }
    strcat(paddedBinary, binary);

    printf("So nhi phan da duoc bo sung: %s\n", paddedBinary);

    printf("So da chuyen doi sang he co so 16: ");
    for (int i = 0; i < length; i += 4) {
        char binaryGroup[4];
        strncpy(binaryGroup, paddedBinary + i, 4);
        binaryGroup[4] = '\0';

        char hexDigit = binaryToHexadecimalGroup(binaryGroup);
        printf("%c", hexDigit);
    }
    printf("\n");
    return 0;
}
*/
//-----------------------------------------------------------------
// ===========================



// ========= OCTAL - 8 ==========

//-----------------------------------------------------------------
/*
// octal -> binary = 8->2
void octalToBinaryDigit(char octalDigit) {
    printf("%c%c%c",
           (octalDigit & 4) ? '1' : '0',
           (octalDigit & 2) ? '1' : '0',
           (octalDigit & 1) ? '1' : '0');
}

int main() {
    char octal[100];
    printf("Nhap so o bat phan: ");
    scanf("%s", octal);

    printf("So da chuyen doi sang he co so 2: ");
    int length = strlen(octal);
    for (int i = 0; i < length; i++) {
        char octalDigit = octal[i];
        octalToBinaryDigit(octalDigit - '0');
    }
    printf("\n");
    return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
// octal -> decimal = 8->10
int octalToDecimalDigit(char octalDigit) {
    return octalDigit - '0';
}

int octalToDecimal(char octal[]) {
    int length = strlen(octal);
    int decimal = 0;

    for (int i = 0; i < length; i++) {
        int digit = octalToDecimalDigit(octal[i]);
        decimal += digit * pow(8, length - i - 1);
    }
    return decimal;
}

int main() {
    char octal[100];
    printf("Nhap so o bat phan: ");
    scanf("%s", octal);

    int decimal = octalToDecimal(octal);

    printf("So da chuyen doi sang he co so 10: %d\n", decimal);
    return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
// octal -> hexa = 8->16
void octalToHex(int octal) {
    int decimal = 0, i = 0, remainder;
    while (octal != 0) {
        remainder = octal % 10;
        octal /= 10;
        decimal += remainder * (1 << (i * 3));
        i++;
    }
    char hex[50];
    sprintf(hex, "%X", decimal);

    printf("Hexadecimal: %s\n", hex);
}

int main() {
    int octalNumber;
	printf("Enter octal: ");
	scanf("%d", &octalNumber);
    octalToHex(octalNumber);

    return 0;
}
*/
//-----------------------------------------------------------------
// ==============================

// ========= DECIMAL - 10 ==========

//-----------------------------------------------------------------
/*
// decimal -> binary 10->2
void decimalToBinary(int decimal) {
    int binary[32];
    int i = 0;

    // Chuy?n t? h? co s? 10 sang h? co s? 2
    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    }
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int decimalNumber;
    printf("Enter decimal: ");
	scanf("%d", &decimalNumber);
    decimalToBinary(decimalNumber);

    return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
// decimal -> octal 10->8
void decimalToOctal(int decimal) {
    int octal[100]; 
    int i = 0;
    while (decimal > 0) {
        octal[i] = decimal % 8;
        decimal /= 8;
        i++;
    }
    printf("Octal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octal[j]);
    }
    printf("\n");
}

int main() {
    int decimalNumber;
    printf("Enter decimal: ");
	scanf("%d", &decimalNumber);
    decimalToOctal(decimalNumber);

    return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
// decimal -> hexa 10->16
void decimalToHex(int decimal) {
    char hex[100];
    int i = 0;
    while (decimal > 0) {
        int remainder = decimal % 16;

        // Chuy?n ph?n du thành ch? s? hex tuong ?ng
        if (remainder < 10) {
            hex[i] = remainder + '0';
        } else {
            hex[i] = remainder + 'A' - 10;
        }
        decimal /= 16;
        i++;
    }
    printf("Hexadecimal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hex[j]);
    }
    printf("\n");
}

int main() {
    int decimalNumber;
    printf("Enter decimal: ");
	scanf("%d", &decimalNumber);
    decimalToHex(decimalNumber);

    return 0;
}
*/
//-----------------------------------------------------------------
// ==============================


// ========= HEXA - 16 ==========

//-----------------------------------------------------------------
/*
// hexa -> binary 16->2
void hexToBinary(char hex) {
	char *binaryTable[] = {"0000", "0001", "0010", "0011",
	                       "0100", "0101", "0110", "0111",
	                       "1000", "1001", "1010", "1011",
	                       "1100", "1101", "1110", "1111"
	                      };
	if (hex >= '0' && hex <= '9') {
		printf("%s", binaryTable[hex - '0']);
	} else if (hex >= 'A' && hex <= 'F') {
		printf("%s", binaryTable[hex - 'A' + 10]);
	} else if (hex >= 'a' && hex <= 'f') {
		printf("%s", binaryTable[hex - 'a' + 10]);
	} else {
		printf("Invalid hexadecimal digit: %c\n", hex);
	}
}

int main() {
	char hexNumber[100];

	printf("Enter hexa: ");
	scanf("%s", hexNumber);

	printf("Binary: ");
	for (int i = 0; hexNumber[i] != '\0'; i++) {
		hexToBinary(hexNumber[i]);
	}
	printf("\n");
	return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
// hexa -> octal 16->8
void hexToOctal(char hex[]) {
    long decimal = strtol(hex, NULL, 16);

    int octal[100];
    int i = 0;

    while (decimal != 0) {
        octal[i] = decimal % 8;
        decimal /= 8;
        i++;
    }
    printf("Hexadecimal: %s\n", hex);
    printf("Octal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octal[j]);
    }
    printf("\n");
}

int main() {
    char hexNumber[100]; 

    printf("Enter hexa: ");
    scanf("%s", hexNumber);

    hexToOctal(hexNumber);
    return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
// hexa -> octal 16->10
int hexCharToDecimal(char c) {
	if (c >= '0' && c <= '9') {
		return c - '0';
	} else if (c >= 'A' && c <= 'F') {
		return 10 + c - 'A';
	} else if (c >= 'a' && c <= 'f') {
		return 10 + c - 'a';
	} else {
		printf("Invalid hexadecimal digit: %c\n", c);
		return -1;
	}
}

long hexToDecimal(char hex[]) {
	int len = strlen(hex);
	long decimal = 0;

	for (int i = 0; i < len; i++) {
		int digit = hexCharToDecimal(hex[i]);
		if (digit == -1) {
			return -1;
		}
		decimal = decimal * 16 + digit;
	}
	return decimal;
}

int main() {
	char hexNumber[100];

	printf("Enter hexa: ");
	scanf("%s", hexNumber);

	long decimalNumber = hexToDecimal(hexNumber);

	if (decimalNumber != -1) {
		printf("Hexadecimal: %s\n", hexNumber);
		printf("Decimal: %ld\n", decimalNumber);
	}
	return 0;
}
*/
//-----------------------------------------------------------------
// ==============================
