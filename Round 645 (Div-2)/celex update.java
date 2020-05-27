// "I Bleed Maroon"- Devang Sharma

import java.io.*;
import java.util.*;

public class Main {
	static StringTokenizer st;

	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(br.readLine());
		for (int i = 0; i < n; i++) {
			
			st = new StringTokenizer(br.readLine());
			
			long x1 = Long.parseLong(st.nextToken());
			long y1 = Long.parseLong(st.nextToken());
			long x2 = Long.parseLong(st.nextToken());
			long y2 = Long.parseLong(st.nextToken());
			
			System.out.println((x2-x1)*(y2-y1)+1);
		}
	}
}