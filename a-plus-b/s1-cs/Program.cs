using System;
using System.IO;

namespace s1cs
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

			int a = Int32.Parse(reader.ReadLine());
			int b = Int32.Parse(reader.ReadLine());

			writer.Write(a + b);

			writer.Close();
		}
	}
}
