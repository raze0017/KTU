import java.util.*;
public class matrixmultiplication {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int a[][]=new int[20][20];
        int b[][]=new int[20][20];
        int c[][]=new int[20][20];
        int i,j,k;
        System.out.println("Enter row and column of first matrix");
        int r1=sc.nextInt();
        int c1=sc.nextInt();
        System.out.println("Enter row and column of second matrix");
        int r2=sc.nextInt();
        int c2=sc.nextInt();
        System.out.println("Enter elements of first matrix");
        if(r1!=c2){
            System.out.println("Not possible");
        }
        else{
            for (i = 0; i < r1; i++) {
                for (j = 0; j < c1; j++) {
                    a[i][j]=sc.nextInt();
                }
            }
            System.out.println("Enter elements of second matrix");
            for (i = 0; i < r2; i++) {
                for (j = 0; j < c2; j++) {
                    b[i][j]=sc.nextInt();
                }
            }
            System.out.println("The product matrix is");
            for (i = 0; i < r1; i++) {
                for (j = 0; j < c2; j++) {
                    for(k=0;k<c1;k++){
                        c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
                    }
                }
            }
            for (i = 0; i < r1; i++) {
                for (j = 0; j < c2; j++) {
                    System.out.print(" "+c[i][j]);
                }System.out.println("");
            }
        }
    }
}