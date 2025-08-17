using System.Text;
StringBuilder sb = new StringBuilder();

while (true)
{
    int[] arr = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
  
    if (arr[0] + arr[1] == 0)
        break;
  
    sb.AppendLine(A(arr[0], arr[1]));
}

Console.WriteLine(sb.ToString());

string A(int a, int b)
{
    if (a > b)
        return "Yes";
  
    else
        return "No";
}
