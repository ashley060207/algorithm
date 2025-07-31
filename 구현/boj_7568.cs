using System.Text;
StringBuilder sb = new StringBuilder();

int n = int.Parse(Console.ReadLine());
int[,] arr = new int[n, 2];
for (int i = 0; i < n; i++)
{
    var input = Console.ReadLine().Split(' ');
    arr[i,0] = int.Parse(input[0]);
    arr[i,1] = int.Parse(input[1]);
}

for (int i = 0; i < n; i++)
{
    int counter = 1;
    
    for (int j = 0; j < n; j++)
    {
        if (i != j)
        {
            if (arr[i,0] < arr[j,0] && arr[i,1] < arr[j,1])
                counter++;
        }   
    }
    sb.Append(counter + " ");
}

Console.WriteLine(sb.ToString());
