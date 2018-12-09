
for(int i = 1; i <= 100000; ++i) EulerPhi[i] = i;
for(int i = 2; i <= 100000; ++i)
    if (EulerPhi[i] == i)
        for(int j = i; j <= 100000; j += i)
            EulerPhi[j] = (EulerPhi[j]/i) * (i - 1);