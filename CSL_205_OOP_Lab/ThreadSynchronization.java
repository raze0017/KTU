import java.lang.*;
class first{
    synchronized public void display(String msg){
        System.out.print("["+msg);
        try{
            Thread.sleep(1000);
        }
        catch(InterruptedException e){
            e.printStackTrace();
        }
        System.out.print("]");
        System.out.println("");
    }
}
class second implements Runnable{
    String msg;
    first fobj;
    second(first fp,String str){
        fobj=fp;
        msg=str;
    }
    public void run(){
        fobj.display(msg);
    }
}
public class ThreadSynchronization {
        public static void main(String[] args) {
            first fnew=new first();
            second ss=new second(fnew, "welcome");
            second ss2=new second(fnew,"new");
            second ss3=new second(fnew,"programmer");
            Thread t1=new Thread(ss);
            Thread t2=new Thread(ss2);
            Thread t3=new Thread(ss3);
            t1.start();
            t2.start();
            t3.start();
        }
}
