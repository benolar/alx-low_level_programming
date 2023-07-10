int print_sign(int n)
{
        int result;
        
        if (n > 0)
        {
                write(1, "+", 1);
                result = 1;
        }
        else if (n < 0)
        {
                write(1, "-", 1);
                result = -1;
        }
        else if (n == 0)
        {
            write(1, "0", 1);
            result = 0;
        }
        else
        {
            write(1, "Input is not a number", 21);
        }
        return (result);
}
