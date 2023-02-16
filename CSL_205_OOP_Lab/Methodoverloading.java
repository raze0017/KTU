import java.util.Scanner;
class shape{
    void a1(float r){
        System.out.println("circle area is"+(r*r*r));
    }
    void a1(int a,int b){
        System.out.println("rectangle area is"+(a*b));
    }
    void a1(float w,float h){
        System.out.println("triangle area is"+(0.5*w*h));
    }
}

class Methodoverloading{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter circle radius");
        int r=sc.nextInt();
        System.out.println("Enter length and breadth of rectangle");
        int a=sc.nextInt();
        int b=sc.nextInt();
        System.out.println("Enter base and height of triangle");
        int w=sc.nextInt();
        int h=sc.nextInt();
        shape bi=new shape();
        bi.a1(r);
        bi.a1(a,b);
        bi.a1(w,h);
        
    }
}