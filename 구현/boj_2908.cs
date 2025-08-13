string[] ab = Console.ReadLine().Split(' ');

int a = int.Parse(change(ab[0]));
int b = int.Parse(change(ab[1]));

Console.WriteLine(Math.Max(a, b));

string change(string a)
{
    char[] chars = a.ToCharArray();
    (chars[0], chars[2]) = (chars[2], chars[0]);
    return new string(chars);
}
