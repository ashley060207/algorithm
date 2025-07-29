string[] arr = new string[8] {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
string a = Console.ReadLine();

foreach (string i in arr)
{
    a = a.Replace(i, "*");
}

Console.WriteLine(a.Length);
