#include <bits/stdc++.h>
using namespace std;

int main()
{
  map<string, string> m;

  m.insert({"brasil", "Feliz Natal!"});
  m.insert({"alemanha", "Frohliche Weihnachten!"});
  m.insert({"austria", "Frohe Weihnacht!"});
  m.insert({"coreia", "Chuk Sung Tan!"});
  m.insert({"espanha", "Feliz Navidad!"});
  m.insert({"grecia", "Kala Christougena!"});
  m.insert({"estados-unidos", "Merry Christmas!"});
  m.insert({"inglaterra", "Merry Christmas!"});
  m.insert({"australia", "Merry Christmas!"});
  m.insert({"portugal", "Feliz Natal!"});
  m.insert({"suecia", "God Jul!"});
  m.insert({"turquia", "Mutlu Noeller"});
  m.insert({"argentina", "Feliz Navidad!"});
  m.insert({"chile", "Feliz Navidad!"});
  m.insert({"mexico", "Feliz Navidad!"});
  m.insert({"antardida", "Merry Christmas!"});
  m.insert({"canada", "Merry Christmas!"});
  m.insert({"irlanda", "Nollaig Shona Dhuit!"});
  m.insert({"belgica", "Zalig Kerstfeest!"});
  m.insert({"italia", "Buon Natale!"});
  m.insert({"libia", "Buon Natale!"});
  m.insert({"siria", "Milad Mubarak!"});
  m.insert({"marrocos", "Milad Mubarak!"});
  m.insert({"japao", "Merii Kurisumasu!"});

  string a;

  while(cin >> a)
  {
    if(m.find(a) == m.end())
      printf("--- NOT FOUND ---\n");
    else
      cout << m[a] << endl;
  }
}
