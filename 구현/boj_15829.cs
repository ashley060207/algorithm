int m = 1234567891;
int a = 'a' - 1; 
long r = 1;
long Hash = 0;

int n = int.Parse(Console.ReadLine());
string arr = Console.ReadLine();

for (int i = 0; i < n; i++)
{
    if (i != 0)
        r = (r * 31) % m;
    
    Hash = (Hash + (arr[i] - a) * r) % m;
}

Console.WriteLine(Hash % m);
