  #include <bits/stdc++.h>
  using namespace std;

  int main()
  {
    string ex;

    while(cin >> ex)
    {
      bool flag = true;
      int qtd =0;
      for(int i=0;i<(int)ex.size();i++)
      {
        if(ex[i]=='(')
          qtd++;
        else if(ex[i]==')')
        qtd--;

        if(qtd < 0)flag = false;
      }

      if(!flag)printf("incorrect\n");
      else if(qtd>0)printf("incorrect\n");
      else printf("correct\n");
    }

  }
