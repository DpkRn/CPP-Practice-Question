import java.util.*;
class caAss2{
    public static void main(String []args){
        ArrayList<Integer>list=new ArrayList();
        Scanner sc=new Scanner(System.in);
        for(int i=0;i<7;i++){
          System.out.print("Enter no:");
          list.add(sc.nextInt());
        }
        System.out.println(list);
        ArrayList<Integer>tlist=new ArrayList<>();
        for(int i=1;i<=7;i++){
            tlist.clear();
            for(int j=0;j<7-i+1;j++){
                
                
               for(int k=j+1;k<j+i;k++){
                 tlist.add(list.get(j));
               }
                System.out.println(tlist);
            }
        }
    }
}