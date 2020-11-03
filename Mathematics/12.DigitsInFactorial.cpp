int digitsInFactorial(int n)
{
    double sum = 0.0;  
    for(int i=1;i<=n;i++)
    {
        sum += log10(i);
    }
    return (1+floor(sum));
}
