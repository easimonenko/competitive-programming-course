using System;

namespace cs
{
    class MainClass
    {
        public static void Main(string[] args)
        {
            var s = Console.ReadLine();

            var char_array = s.ToCharArray();
            Array.Reverse(char_array);

            var r = new string(char_array);

            Console.WriteLine(r);
        }
    }
}
