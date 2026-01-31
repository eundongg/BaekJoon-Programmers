import java.io.*;
import java.util.*;
public class Main{
    
    static class Person{
        int age;
        String name;
        
        Person(int a, String n){
            this.age = a;
            this.name = n;
        }        
    }
    
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        int testCase = Integer.parseInt(br.readLine());       
        
        Person[] person = new Person[testCase];
        
        for(int i=0;i<testCase;i++){
            StringTokenizer st = new StringTokenizer(br.readLine());
            int age = Integer.parseInt(st.nextToken());
            String name = st.nextToken();
            person[i] = new Person(age,name);
        }
        
        Arrays.sort(person, (p1,p2)->{
            return p1.age - p2.age;
        });
        
        StringBuilder sb = new StringBuilder();
        for(int i=0;i<testCase;i++){
            sb.append(person[i].age).append(" ").append(person[i].name).append("\n");        
        }
        System.out.println(sb);
    }
}