using System;
using System.Text;

namespace v2cs
{
    class MainClass
    {
        public static void Main(string[] args)
        {
            var s = Console.ReadLine();

            var builder = new StringBuilder(s);

            for (int i = 0; i < builder.Length / 2; i++) {
                var c = builder[i];
                builder[i] = builder[builder.Length - 1 - i];
                builder[builder.Length - 1 - i] = c;
            }

            Console.WriteLine(builder);
        }
    }
}
