import java.util.*;
public class matrixtranspose {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int a[][]=new int[20][20];
        int b[][]=new int[20][20];
        int i,j;
        System.out.println("Enter row and columns");
        int r=sc.nextInt();
        int c=sc.nextInt();
        System.out.println("Enter elements of matrix");
        for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++) {
                a[i][j]=sc.nextInt();
            }
        }
        System.out.println("The transpose");
        for (i = 0; i < c; i++) {
            for (j = 0; j < r; j++) {
                System.out.print(" "+(a[j][i]));
            }System.out.println("");
        }
    }
}
