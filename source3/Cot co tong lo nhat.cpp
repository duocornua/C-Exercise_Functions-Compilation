#include <stdio.h>

//int main()
//{
//    int row, col;
//    printf("Enter row: ");
//    scanf("%d", &row);
//    printf("Enter col: ");
//    scanf("%d", &col);
//    
//    int a[row][col];
//    
//
//    for (int i = 0; i < row; ++i) {
//        for (int j = 0; j < col; ++j) {
//            printf("Enter element at a[%d][%d]: ", i, j);
//            scanf("%d", &a[i][j]);
//        }
//    }
//    for(int i=0;i<row;i++){
//   	for(int j=0;j<col;j++){
//   		printf("%d",a[i][j]);
//	   }
//	   printf("\n");
//   }
//   int max_sum=0;
//   int max_col=0;
//    for(int i=0;i<row;i++){
//    	int col_sum=0;
//    	for(int j=0;j<col;j++){
//    		col_sum+= a[i][j];
//		}
//		if(col_sum> max_sum){
//			max_sum= col_sum;
//			max_col= i;
//		}
//	}
//	printf("Cot co tong cac phan tu lon nhat la cot thu %d voi tong la %d",max_col,max_sum);
//	return 0;
//}
int main(){

int i;

  int total = 0;

  int keepreading = 1;   

       

  for (int i = 1; i < 10 && keepreading == 1; i++){
  

        if (!(i%3)){
		

              keepreading = 0;
}
        else  {
		

              total += i;
          }
          }

  printf("%d", total);
}
