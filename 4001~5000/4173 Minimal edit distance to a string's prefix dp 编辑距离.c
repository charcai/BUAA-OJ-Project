#include<stdio.h>
#include<string.h>

char a[2010], b[2010];
int lena, lenb;
int dp[2010][2010];//dp[i][j] = A[1...i]与B[i...j]的编辑距离
int flag;

void buildDP()
{
    lena = strlen(a + 1), lenb = strlen(b + 1);
    for (int i = 0; i <= lena; ++i)
    {
        for (int j = 0; j <= lenb; ++j)
        {
            dp[i][j] = 0x3f3f3f3f;
        }
    }
    //初始化边界,显而易见
    for (int i = 0; i <= lena; ++i)
    {
        dp[i][0] = i;
    }
    for (int j = 0; j <= lenb; ++j)
    {
        dp[0][j] = j;
    }
    for (int i = 1; i <= lena; ++i)
    {
        for (int j = 1; j <= lenb; ++j)
        {
            flag = 1;
            if (a[i] == b[j])
            {
                flag = 0;
            }//两者是否相等
            dp[i][j] = dp[i][j] < (dp[i - 1][j] + 1) ? dp[i][j] : (dp[i - 1][j] + 1);//a.pop_back
            dp[i][j] = dp[i][j] < (dp[i][j - 1] + 1) ? dp[i][j] : (dp[i][j - 1] + 1);//b.push_back
            dp[i][j] = dp[i][j] < (dp[i - 1][j - 1] + flag) ? dp[i][j] : (dp[i - 1][j - 1] + flag);//change
        }
    }
}

int main()
{
    while (scanf("%s%s", a + 1, b + 1) != EOF)
    {
        buildDP();
        int ans = 0x3f3f3f3f;
        for (int i = 1; i <= lenb; ++i)
        {
            ans = ans < dp[lena][i] ? ans : dp[lena][i];
        }
        printf("%d\n", ans);
    }
}