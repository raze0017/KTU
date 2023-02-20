import java.util.*;
public class Matrixsum {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int a[][]=new int[20][20];
        int b[][]=new int[20][20];
        int i,j;
        System.out.println("Enter a row and columns");
        int r=sc.nextInt();
        int c=sc.nextInt();
        System.out.println("Enter elements of first matrix");
        for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++) {
                a[i][j]=sc.nextInt();
            }
        }
        System.out.println("Enter elements of second matrix");
        for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++) {
                b[i][j]=sc.nextInt();
            }
        }
        System.out.println("The sum matrix is");
        for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++) {
                System.out.print(" "+(a[i][j]+b[i][j]));
            }System.out.println("");
        }
    }
}
