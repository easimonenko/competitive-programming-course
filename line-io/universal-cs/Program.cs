using System;
using System.IO;
using System.Threading;

namespace universalcs
{
	class MainClass
	{
		public static void Main(string[] args)
		{
			StreamReader reader;
			StreamWriter writer;
			#if (ONLINE_JUDGE)
			reader = new StreamReader("../../../tests/input.txt");
			writer = new StreamWriter("../../../tests/output.txt");
			#else
			reader = new StreamReader(Console.OpenStandardInput());
			writer = new StreamWriter(Console.OpenStandardOutput());
			#endif

			string line;
			while ((line = reader.ReadLine()) != null) {
				writer.WriteLine(line);
			}

			writer.Close();
		}
	}
}
