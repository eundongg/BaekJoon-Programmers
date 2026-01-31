import java.io.*;
import java.util.*;

public class Main{
    
    static class Person{
        int weight, height;

        Person(int w,int h){
            this.weight = w;
            this.height = h;            
        }
    }
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        //사람 수
        int p = Integer.parseInt(br.readLine());
        //사람 객체들을 담을 배열
        Person[] list = new Person[p];
        
        for(int i=0;i<p;i++){
            StringTokenizer st = new StringTokenizer(br.readLine());
            int w = Integer.parseInt(st.nextToken());
            int h = Integer.parseInt(st.nextToken());
            list[i] = new Person(w,h);
        }
        StringBuilder sb = new StringBuilder();
        
        for(int i=0;i<p;i++){
            int rank = 1;
            for(int j=0;j<p;j++){
                //자기 자신 비교 x
                if(i==j) continue;
                if(list[j].weight>list[i].weight && list[j].height>list[i].height){
                    rank++;
                }
            }
            sb.append(rank).append(" ");
        }
        System.out.print(sb);
    }
}