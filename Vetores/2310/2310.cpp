#include <iostream>
using namespace std;

int main()
{
    int jogadores = 0, S[100], B[100], A[100], Ss[100], Bs[100], As[100], St = 0, Bt = 0, At = 0, Sw = 0, Bw = 0, Aw = 0;
    string nome;
    float Sp, Bp, Ap;

    cin >> jogadores;

    for(int i = 0; i < jogadores; i++)
    {
        cin >> nome;
        cin >> S[i] >> B[i] >> A[i];
        cin >> Ss[i] >> Bs[i] >> As[i];
    }

    for(int i = 0; i < jogadores; i++)
    {
        St = St + S[i];
        Bt = Bt + B[i];
        At = At + A[i];

        Sw = Sw + Ss[i];
        Bw = Bw + Bs[i];
        Aw = Aw + As[i];
    }
    
    Sp = (Sw * 100.0) / St;
    Bp = (Bw * 100.0) / Bt;
    Ap = (Aw * 100.0) / At;

    printf("Pontos de Saque: %.2f %%.\n", Sp);
    printf("Pontos de Bloqueio: %.2f %%.\n", Bp);
    printf("Pontos de Ataque: %.2f %%.\n", Ap);

    return 0;
}
