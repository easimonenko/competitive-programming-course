using System;
using System.IO;

namespace s2cs
{
	class MainClass
	{
		public static void Main(string[] args)
		{
			StreamReader reader;
			StreamWriter writer;
			#if (ONLINE_JUDGE)
			reader = new StreamReader("sum.in");
			writer = new StreamWriter("sum.out");
			#else
			reader = new StreamReader(Console.OpenStandardInput());
			writer = new StreamWriter(Console.OpenStandardOutput());
			#endif

			string[] input = reader.ReadLine().Split();
			int a = Int32.Parse(input[0]);
			int b = Int32.Parse(input[1]);

			writer.Write(a + b);

			writer.Close();
		}
	}
}
