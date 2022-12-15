for (int *i = arr; i < arr + length; i++)
    {
        for (int *j = i + 1; j < arr + length; j++)
        {
            if (*i > *j)
            {
                int temp = *i;
                *i = *j;
                *j = temp;
            }
        }
    }