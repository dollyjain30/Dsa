int maxr = m - 1;
    int maxc = n - 1;
    int minr = 0;
    int minc = 0;
    while (minr <= maxr && minc <= maxc)
    {
        for (int j = minc; j <= maxc; j++)
        {
            cout << a[minr][j] << " ";
        }
        minr++;
        if (minr > maxr || minc > maxc)
            break;
        for (int i = minr; i <= maxr; i++)
        {
            cout << a[i][maxc] << " ";
        }
        maxc--;
        if (minr > maxr || minc > maxc)
            break;

        for (int j = maxc; j >= minc; j--)
        {
            cout << a[maxr][j] << " ";
        }
        maxr--;
        if (minr > maxr || minc > maxc)
            break;

        for (int i = maxr; i >= minr; i--)
        {
            cout << a[i][minc] << " ";
        }
        minc++;
    }