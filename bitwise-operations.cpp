int setBit(int num, int pos)
{
    pos=1<<pos;
    return (num | pos);
}

bool checkBit(int num, int pos)
{
    pos=1<<pos;
    if ((num & pos) != 0)
    return true;
    else
    return false;
}

int clearBit(int num, int pos)
{
    pos=1<<pos;
    return (num & (!pos));
}

int setBitCount(int num)
{
    int cnt=0;
    while (num)
    {
        if(num & 1)
        cnt++;
        num=num>>1;
    }
}

int min(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    return b;
}