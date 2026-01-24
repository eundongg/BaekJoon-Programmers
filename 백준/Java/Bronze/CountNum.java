package array;

import java.util.Arrays;
import java.util.Scanner;

public class CountNum {
	
	public static void main(String[] args){	
		Scanner sc = new Scanner(System.in);
		
		int N = sc.nextInt();
		
		int[] arr = new int[N];
		//Integer[] arr = new Integer[N];		
		
		for(int i=0;i<N;i++) {
			arr[i]=sc.nextInt();
		}
		int v = sc.nextInt();
		
		long cnt = Arrays.stream(arr).filter(n->n==v).count();
		//List<Integer> list = Arrays.asList(arr);
		
		//int cnt = Collections.frequency(list, v);
		
		System.out.print(cnt);
		
	}

}
