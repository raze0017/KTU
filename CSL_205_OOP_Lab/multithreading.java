import java.lang.Thread;
class threaderodd implements Runnable{
    public void run(){
        try{
            for(int i=0;i<10;i++){
                if(i%2!=0){
                    System.out.println(i+" ");
                    Thread.sleep(1000);
                }
            }
        }catch(InterruptedException e){
            System.out.println(e);
        };
    }
}
class threadereven implements Runnable{
    public void run(){
        try{
            for(int i=0;i<10;i++){
                if(i%2==0){
                    System.out.println(i);
                    Thread.sleep(1000);
                }
            }
        }catch(InterruptedException e){
            e.printStackTrace();
        }
    }
}
class multithreading{
    public static void main(String[] args) {
        Thread odd=new Thread(new threaderodd());
        Thread even=new Thread(new threadereven());
        odd.start();

        even.start();
    }
}