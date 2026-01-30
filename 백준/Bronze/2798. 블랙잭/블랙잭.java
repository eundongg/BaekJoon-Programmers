import java.io.*;
import java.util.*;
public class Main{
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        StringTokenizer st = new StringTokenizer(br.readLine());        
        int card = Integer.parseInt(st.nextToken());
        int limit = Integer.parseInt(st.nextToken());
        
        int[] nums = new int[card];
        
        st = new StringTokenizer(br.readLine());
        for(int i=0;i<card;i++){
            nums[i] = Integer.parseInt(st.nextToken());
        }
        
        int result =0;
        
        for(int i=0;i<card-2;i++){
            for(int j=i+1;j<card-1;j++){
                for(int k = j+1;k<card;k++){
                    int sum = nums[i]+ nums[j]+ nums[k];
                    if(sum<=limit){
                        result = Math.max(sum,result);
                    }
                }
            }
        }
        System.out.print(result);
    }
}