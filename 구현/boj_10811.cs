int[] nm = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
int N = nm[0]; int M = nm[1];

int[] basket = new int[N];
for (int i = 0; i < N; i++)
{
    basket[i] = i + 1;
}

for (int i = 0; i < M; i++)
{
    string[] a = Console.ReadLine().Split(' ');
    int first = int.Parse(a[0]) - 1;
    int last = int.Parse(a[1]) - 1;

    for (int j = first; j < last; j++)
    {
        (basket[last], basket[first]) = (basket[first], basket[last]);
        last--;
        first++;
    }
}

Console.WriteLine(string.Join(" ", basket));
