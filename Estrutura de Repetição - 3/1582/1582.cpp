#include <stdio.h>

int main()
{
    int A, B, C, lA, lB, lC, resto;

    while(scanf("%d %d %d", &A, &B, &C) != EOF)
    {
        resto = 0;
        
        //ordenação de valores

        if(A>B && B>C)
        {
            lA = A;
            lB = B;
            lC = C;
        }
        else
        {
            if(A>C && C>B)
            {
                lA = A;
                lB = C;
                lC = B;
            }
            else
            {
                if(B>A && A>C)
                {
                    lA = B;
                    lB = A;
                    lC = C;
                }
                else
                {
                    if(B>C && C>A)
                    {
                        lA = B;
                        lB = C;
                        lC = A;
                    }
                    else
                    {
                        if(C>B && B>A)
                        {
                            lA = C;
                            lB = B;
                            lC = A;
                        }
                        else
                        {
                            if(C > A && A > B)
                            {
                                lA = C;
                                lB = A;
                                lC = B;
                            }
                            else
                            {
                                if(A == B && B > C)
                                {
                                    lA = A;
                                    lB = B;
                                    lC = C;
                                }
                                else
                                {
                                    if(B == C && C > A)
                                    {
                                        lA = B;
                                        lB = C;
                                        lC = A;
                                    }
                                    else
                                    {
                                        if(A == C && C > B)
                                        {
                                            lA = A;
                                            lB = C;
                                            lC = B;
                                        }
                                        else
                                        {
                                            if(A == B && B < C)
                                            {
                                                lA = C;
                                                lB = A;
                                                lC = B;
                                            }
                                            else
                                            {
                                                if(B == C && C < A)
                                                {
                                                    lA = A;
                                                    lB = C;
                                                    lC = B;
                                                }
                                                else
                                                {
                                                    if(A == C && C < B)
                                                    {
                                                        lA = B;
                                                        lB = C;
                                                        lC = A;
                                                    }
                                                    else
                                                    {
                                                        lA = A;
                                                        lB = B;
                                                        lC = C;	
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        
        printf("%d %d %d\n", lA, lB, lC);
        A = lA;
        B = lB;
        C = lC;

        //primeiro mdc
        
        while(B != 0)
        {
            resto = A % B;
            A = B;
            B = resto;
        }

        //segundo mdc

        while(C != 0)
        {
            resto = A % C;
            A = C;
            C = resto;
        }

        printf("%d\n", A);

        if(lA*lA != lB*lB + lC*lC)
        {
            printf("tripla\n");
        }
        else
        {
            if(A != 1)
            {
                printf("tripla pitagorica\n");
            }
            else
            {
                printf("tripla pitagorica primitiva\n");

            }
        }
    }

    return 0;
}
