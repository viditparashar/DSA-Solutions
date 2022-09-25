/*Chef has been participating regularly in rated contests but missed the last two contests due to his college exams. He now wants to solve them and so he visits the practice page to view these problems.

Given a list of N contest codes, where each contest code is either START38 or LTIME108, help Chef count how many problems were featured in each of the contests.

Input Format
First line will contain T, number of test cases. Then the test cases follow.
Each test case contains of two lines of input.
First line of input contains the total count of problems that appeared in the two recent contests - N.
Second line of input contains the list of N contest codes. Each code is either START38 or LTIME108, to which each problem belongs.*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    int t;

    scanf("%d", &t);
    while (t--)
    {
        int prob = 0;

        scanf("%d", &prob);

        int count = 0, count1 = 0, i;

        char array[prob][9]; // size of string should be maximum length of input string + 2

        for (i = 0; i < prob; i++)
        {
            scanf("%s", &array[i]);
        }

        for (i = 0; i < prob; i++)
        {
            if (strcmp(array[i], "START38") == 0)
            {
                count = count + 1;
            }

            else if (strcmp(array[i], "LTIME108") == 0)
            {
                count1 = count1 + 1;
            }
        }

        printf("%d %d\n", count, count1);
    }

    return 0;
}
