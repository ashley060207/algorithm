int N = int.Parse(Console.ReadLine());

int a = 5;
int b = 3;

int A = N / a;

int Q = A;

while (true)
{
    int aa = N - a * Q;
    int bb = aa / b;
    int cc = aa % b;
    
    if (cc > 0)
    {
        Q--;
    }

    if (cc == 0)
    {
        Console.WriteLine($"{Q + bb}");
        break;
    }

    if (Q < 0)
    {
        Console.WriteLine("-1");
        break;
    }

}
