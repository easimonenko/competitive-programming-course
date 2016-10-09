using System;
using System.IO;

namespace cs
{
	class MainClass
	{
		public static void Main(string[] args)
		{
			StreamReader reader;
			StreamWriter writer;
			#if (ONLINE_JUDGE)
			reader = new StreamReader("input.txt");
			writer = new StreamWriter("output.txt");
			#else
			reader = new StreamReader(Console.OpenStandardInput());
			writer = new StreamWriter(Console.OpenStandardOutput());
			#endif

			var n = Int32.Parse(reader.ReadLine());
			var input = reader.ReadLine().Split();
			var a = new int[n];
			for (int i = 0; i < n; i++) {
				a[i] = Int32.Parse(input[i]);
			}

			Array.Sort(a);

			writer.WriteLine(n);
			writer.WriteLine(String.Join(" ", a));

			writer.Close();
		}
	}
}
