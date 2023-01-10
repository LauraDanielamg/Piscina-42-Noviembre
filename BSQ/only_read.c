

void    rows_and_cols(char *file, int *d, int f, char memory)
{
    int bl;

    bl = 0;
    d->rows = -1;
    d -> cols = 0;

    f = open(file, O_RDONLY);
    while (read(f, &memory, 1) == 1)
    {
        if (memory == 10)
        {
            d->rows++;
        }
    }
    close(f);

    f = open(file, O_RDONLY);
    while (read(f, &memory, 1) == 1)
    {
        if (memory == 10 && bl == 0) 
        {
            b1 = 1;
        }
        else if (memory != 10 && bl == 1)
        {
            d->cols++;
        }
         else if (memory == 10 && bl == 1)
        {
            d->cols++;
        }
    }
    close(f);
  
}