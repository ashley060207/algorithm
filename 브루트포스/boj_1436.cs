int n = int.Parse(Console.ReadLine());
int count = 0, i = -1;

while (true)
{
    i++;

    if (Has666(i))
    {
        if (count + 1000 >= n) { Console.WriteLine(i * 1000 + (n - count - 1)); return; }
        count += 1000; continue;
    }

    if (i % 100 == 66)
    {
        if (count + 100 >= n) { Console.WriteLine(i * 1000 + 600 + (n - count - 1)); return; }
        count += 100; continue;
    }

    if (i % 10 == 6)
    {
        if (count + 10 >= n) { Console.WriteLine(i * 1000 + 660 + (n - count - 1)); return; }
        count += 10; continue;
    }

    if (++count == n) { Console.WriteLine(i * 1000 + 666); return; }
}

static bool Has666(int x)
{
    int r = 0;
    for (; x > 0; x /= 10)
    {
        r = (x % 10 == 6) ? r + 1 : 0;
        if (r == 3) return true;
    }
    return false;
}
