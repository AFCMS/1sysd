# Quel problème constatez-vous en exécutant le programme ? (note : vous pouvez l'interrompre par CTRL-C)

Le problème rencontré est une boucle infinie dans la fonction `print_list_slow`.

# Quel est la raison de ce problème ?

La raison de ce problème est que la liste chaînée est circulaire.

A la ligne suivante le dernier noeud de la liste pointe vers le deuxième noeud de la liste :
```c
head->next->next->next->next = head->next;
```

# Décrivez un algorithme permettant de détecter une liste chaînée ayant ce problème.

Le principe de l'algorithme est de parcourir la liste chaînée en utilisant deux pointeurs, un rapide et un lent. Si le pointeur rapide rattrape le pointeur lent, alors la liste chaînée est circulaire.

# Implémentez cet algorithme dans une fonction et testez-la.