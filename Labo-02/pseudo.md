# Pseudo code de votre programme

    dx = 3 (distance entre la route et l'objet en km)
    dy = 10 (distance le long de la route en km)
    s1 = 5 (vitesse sur la route en km/h)
    s2 = 2 (vitesse sur le terrain en km/h)
    L1 = 6 (distance parcourue sur la route en km)

    t1 = L1 / s1
    L2 = racine carree de (dx * dx + (dy - L1) * (dy - L1))
    t2 = L2 / s2
    tempsTotal = t1 + t2

    afficher tempsTotal