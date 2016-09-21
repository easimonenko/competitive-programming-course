using System;

namespace consolecs
{
	class MainClass
	{
		public static void Main(string[] args)
		{
			string line;
			while ((line = Console.ReadLine()) != null) {
				Console.WriteLine(line);
			}
		}
	}
}
