int pagecount(int n, int p)
{
    if (n % 2 != 0)
        return (min(n / 2, (n - p) / 2));
    else
        return (min(n / 2, (n - p + 1) / 2));
}