using System;
using System.IO;

namespace filecs
{
	class MainClass
	{
		public static void Main(string[] args)
		{
			var reader = new StreamReader("../../../tests/input.txt");
			var writer = new StreamWriter("../../../tests/output.txt");

			string line;
			while ((line = reader.ReadLine()) != null) {
				writer.WriteLine(line);
			}

			writer.Close();
		}
	}
}
