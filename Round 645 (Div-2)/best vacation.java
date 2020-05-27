// Its a Good Question, Can Also be Solved Using Binary Search - Devang Sharma

import java.io.*;
import java.util.*;

public class Main {
	static StringTokenizer st;

	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		st = new StringTokenizer(br.readLine());
		int n = Integer.parseInt(st.nextToken());
		long m = Long.parseLong(st.nextToken());
		
		st = new StringTokenizer(br.readLine());
		long[] arr = new long[2*n];
		for (int i = 0; i < n; i++) {
			arr[i] = Long.parseLong(st.nextToken());
		}
	
		for (int i = n; i < arr.length; i++) {
			arr[i] = arr[i-n];
		}

		long sum = 0;
		long sum2 = 0;
		long endday = 2*n-1;
		long result = 0;
		boolean check = false;
		for (int i = arr.length-1; i >= 0; i--) {
			
			while(sum<m) {
				
				if(endday==-1) {
					check = true;
					break;
				}
				
				sum+=arr[(int) endday];
				sum2+=daysum(arr[(int) endday]);
			
				endday--;
			}
			
			if(check) {
				break;
			}
			
			result = Math.max(result, sum2 - daysum(sum-m));
			sum2-=daysum(arr[i]);
			sum-=arr[i];
		}
		
		System.out.println(result);
	}
	static long daysum(long n) {
		return (n*(n+1))/2;
	}

}