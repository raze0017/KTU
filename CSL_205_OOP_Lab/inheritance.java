
class employee{
    String name;
    int age;
    String address;
    double salary;
    public employee(String name, int age, String address){
        this.name=name;
        this.age=age;
        this.address=address;
    }
    public void printinfo(){
        System.out.println("name:"+name);
        System.out.println("age:"+age);
        System.out.println("address:"+address);
    }
    public void printsalary(){
        System.out.println("Salary is"+salary);
    }
}
class Officer extends employee {
    String specialization;
    public Officer(String name, int age, String address,String specialization) {
        super(name, age, address);
        this.specialization=specialization;
       }
    public void printspecialization(){
            System.out.println("Specialization is "+specialization);
    }
    public void printinfo(){
        super.printinfo();
    }
    public void printsalary(){
        System.out.println("SALARY IS"+1000000);
    }
        
}
class manager extends employee{
    String department;
    public manager(String name, int age, String address,String department) {
        super(name, age, address);
        this.department=department;
       }
    public void printdepartment(){
        System.out.println("department:"+department);
    }
    public void printinfo(){
        super.printinfo();
    }
    public void printsalary(){
        System.out.println("SALARY IS"+1500000);
    }
}

public class inheritance {
    public static void main(String[] args) {
        Officer off=new Officer("Razeem", 20, "xyzstreet","webdev");
        manager man=new manager("ROCKY", 45,"xz apartment" ,"sales");
        off.printinfo();
        off.printsalary();
        System.out.println();
        man.printinfo();
        man.printsalary();
    }
}
