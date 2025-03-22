
#include <stdio.h>
int seed = 1;
int my_rand(int seed);
int main(void)
{
    int rand_num[10];
    for (int i = 0; i < 10; i++)
    {
        rand_num[i] = my_rand(seed) % 10;
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (rand_num[i] > rand_num[j])
            {
                int temp = rand_num[i];
                rand_num[i] = rand_num[j];
                rand_num[j] = temp;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", rand_num[i]);
    }
    return 0;
}
int my_rand(int seed_in)
{
    int next = seed_in;
    next = next * 110245 + 12345;
    seed = next;
    return (unsigned)(next / 65536) % 32768;
}